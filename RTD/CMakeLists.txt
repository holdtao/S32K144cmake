if(NOT DEFINED RTD_TARGET)
    set(RTD_TARGET RTD)
endif()
aux_source_directory(./src RTD_SRC)

add_library(${RTD_TARGET} STATIC ${RTD_SRC})

target_include_directories(${RTD_TARGET} PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/base_include)

target_link_libraries(${RTD_TARGET} PRIVATE ${BOARD} ${GENERATE})

add_definitions(-DS32K144)


target_compile_options(${RTD_TARGET} PUBLIC
    ##
)


