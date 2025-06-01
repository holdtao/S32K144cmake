if(NOT DEFINED GENERATE)
    set(GENERATE generate)
endif()
aux_source_directory(./IntCtrl_Ip INTCTRL_IP_SRC)

aux_source_directory(./src SRC_SRC)

set(GENERATE_SRC ${INTCTRL_IP_SRC} ${SRC_SRC})

add_library(${GENERATE} STATIC ${GENERATE_SRC})

target_link_libraries(${GENERATE} PRIVATE ${RTD_TARGET} ${BOARD})

target_include_directories(${GENERATE} PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/IntCtrl_Ip
    ${CMAKE_CURRENT_SOURCE_DIR}/System_Ip
)
add_definitions(-DS32K144)


target_compile_options(${GENERATE} PUBLIC
    ##
)


