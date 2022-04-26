cmake_minimum_required(VERSION 3.0.0)

set(CMAKE_C_COMPILER "gcc-11")
set(CMAKE_CXX_COMPILER "g++-11")

project(Mathemax VERSION 0.1.0)

include(CTest)
enable_testing()

file(GLOB src_files "tests/*.cpp")
foreach(src_file IN LISTS src_files)
    get_filename_component(target_name ${src_file} NAME_WE)
    add_executable("${target_name}" "${src_file}")
endforeach()


set(CMAKE_CXX_STANDARD 20)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
