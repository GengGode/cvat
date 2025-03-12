cmake_minimum_required(VERSION 3.20)

include(cmake/vcpkg_env.cmake)

project(cvat)

include(cmake/project_setting.cmake)

add_subdirectory(modules/std_extension)  
add_subdirectory(modules/debugger)  

add_subdirectory(samples)  