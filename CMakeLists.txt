cmake_minimum_required(VERSION 3.20)

include(cmake/vcpkg_env.cmake)

project(cvat)

include(cmake/project_setting.cmake)

include(cmake/auto_increment_version.cmake)
auto_generate_version(${CMAKE_SOURCE_DIR}/.version ${CMAKE_SOURCE_DIR}/.build_version)

add_subdirectory(modules/std_extension)  
add_subdirectory(modules/debugger)  
add_subdirectory(modules/frame_source)  

add_subdirectory(samples)  