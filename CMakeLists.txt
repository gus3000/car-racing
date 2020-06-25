cmake_minimum_required(VERSION 3.16)
project(car-racing)

set(CMAKE_CXX_STANDARD 17)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()


add_executable(car-racing main.cpp fenetre.cpp fenetre.hpp)

target_link_libraries(car-racing ${CONAN_LIBS})
add_custom_command(TARGET car-racing PRE_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/images $<TARGET_FILE_DIR:car-racing>/images)