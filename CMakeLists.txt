cmake_minimum_required(VERSION 3.20)
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR arm)
project(WDG_EXAMPLE_S32K144 LANGUAGES C CXX ASM)

set(CMAKE_ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR})
# 工具链路径（根据实际安装位置修改）
set(TOOLCHAIN_PATH "C:/NXP/S32DS.3.4/S32DS/build_tools/gcc_v6.3/gcc-6.3-arm32-eabi/bin")
set(NOSYS_SPEC "C:/NXP/S32DS.3.4/S32DS/build_tools/gcc_v6.3/gcc-6.3-arm32-eabi/arm-none-eabi/newlib/lib/nosys.specs")
set(NANO_SPEC "C:/NXP/S32DS.3.4/S32DS/build_tools/gcc_v6.3/gcc-6.3-arm32-eabi/arm-none-eabi/newlib/lib/nano.specs")

# 设置编译器
set(CMAKE_C_COMPILER ${TOOLCHAIN_PATH}/arm-none-eabi-gcc)
set(CMAKE_ASM_COMPILER ${TOOLCHAIN_PATH}/arm-none-eabi-gcc)
set(CMAKE_OBJCOPY ${TOOLCHAIN_PATH}/arm-none-eabi-objcopy)
set(CMAKE_SIZE ${TOOLCHAIN_PATH}/arm-none-eabi-size)

add_compile_options(
    # 核心架构
    "-mcpu=cortex-m4"
    "-mthumb"
    "-mfloat-abi=hard"
    "-mfpu=fpv4-sp-d16"
    "-march=armv7e-m"
    
    # 优化与调试
    "-Og"
    "-g3"
    "-gdwarf-4"
    
    # 代码生成
    "-ffunction-sections"
    "-fdata-sections"
    "-fno-common"
    "-fmessage-length=0"
    
    # 警告控制
    "-Wall"
    "-Wextra"
    "-Wconversion"
    
    # 嵌入式特性
    "-ffreestanding"
    "-fno-builtin"
)

# 语言特定选项
set(CMAKE_C_FLAGS_INIT "-std=gnu11")
set(CMAKE_ASM_FLAGS_INIT "-x assembler-with-cpp")
# ============ 关键修改结束 ============

# 1. 设置链接脚本路径变量
set(LINKER_SCRIPT_DIR "${CMAKE_ROOT_DIR}/Project_Settings/Linker_Files")
set(LINKER_SCRIPT "${LINKER_SCRIPT_DIR}/linker_flash_s32k144.ld")

# 全局定义
add_compile_definitions(-DS32K144)  # 移到这里

set(RTD_TARGET RTD)
set(PROJECT_SETTINGS Project_Settings)
set(GENERATE generate)
set(BOARD board)

# 添加子模块
add_subdirectory(${RTD_TARGET})
add_subdirectory(${PROJECT_SETTINGS})
add_subdirectory(${GENERATE})
add_subdirectory(${BOARD})

# 创建可执行文件
add_executable(${PROJECT_NAME}.elf  # 使用自动变量
    ${CMAKE_ROOT_DIR}/src/main.c
)

set_target_properties(${PROJECT_NAME}.elf PROPERTIES
    SUFFIX ".elf"  # 强制使用 .elf 后缀
    OUTPUT_NAME "${PROJECT_NAME}"  # 可选：移除项目名重复
)

# 链接所有模块库
target_link_libraries(${PROJECT_NAME}.elf PRIVATE
    -Wl,--start-group
    ${RTD_TARGET}
    ${PROJECT_SETTINGS}
    ${GENERATE}
    ${BOARD}
    -Wl,--end-group
)
# 设置包含目录  
target_include_directories(${PROJECT_NAME}.elf PRIVATE
    ${CMAKE_ROOT_DIR}/include
)

# 全局链接选项
# 完整的链接器配置
target_link_options(${PROJECT_NAME}.elf PRIVATE
    # 链接器脚本
    -T${LINKER_SCRIPT}
    
    # 使用绝对路径指定 spec 文件
    "-specs=${NOSYS_SPEC}"
    "-specs=${NANO_SPEC}"
    # 系统选项
    -nodefaultlibs
    -nostartfiles
    # 优化选项
    -Wl,--gc-sections
    -Wl,-Map=${PROJECT_NAME}.map
    # 解决循环依赖
    -Wl,--start-group
    -Wl,--end-group
)

# 后构建步骤
add_custom_command(TARGET ${PROJECT_NAME}.elf POST_BUILD
    COMMAND ${CMAKE_OBJCOPY} -O ihex ${PROJECT_NAME}.elf ${PROJECT_NAME}.hex
    COMMAND ${CMAKE_OBJCOPY} -O binary ${PROJECT_NAME}.elf ${PROJECT_NAME}.bin
    COMMAND ${CMAKE_SIZE} ${PROJECT_NAME}.elf
    COMMENT "生成 HEX 和 BIN 文件"
)