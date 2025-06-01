if(NOT DEFINED PROJECT_SETTINGS)
    set(PROJECT_SETTINGS Project_Settings)
endif()
aux_source_directory(./Startup_Code PROJECT_SETTINGS_SRC)

set(ASM_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/Startup_Code/startup_cm4.S  # 添加您的实际启动文件名
    ${CMAKE_CURRENT_SOURCE_DIR}/Startup_Code/Vector_Table.S  # 添加您的实际启动文件名

    # 添加更多汇编文件...
)

add_library(${PROJECT_SETTINGS} STATIC ${PROJECT_SETTINGS_SRC} ${ASM_SOURCES})

target_link_libraries(${PROJECT_SETTINGS} PRIVATE ${RTD_TARGET})

target_include_directories(${PROJECT_SETTINGS} PUBLIC 
)

target_compile_options(${PROJECT_SETTINGS} PUBLIC
    ##
)


