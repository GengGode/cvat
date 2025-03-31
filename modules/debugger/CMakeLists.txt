add_library(debugger_interface INTERFACE)   
target_include_directories(debugger_interface INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/interface)
target_compile_features(debugger_interface INTERFACE cxx_std_23)
target_link_libraries(debugger_interface INTERFACE std_extension)

add_library(debugger STATIC)
target_link_libraries(debugger PRIVATE debugger_interface)
target_link_libraries(debugger PRIVATE std_extension)
target_compile_features(debugger PRIVATE cxx_std_23)
target_include_directories(debugger PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/interface)
target_include_directories(debugger INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(debugger PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(debugger PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/source)

target_sources(debugger PRIVATE 
    source/debugger_app.cpp
    source/app_impl.cpp
)

include(${deps_dir}/add_deps.cmake)
add_deps(debugger WindowsHModular)

find_package(imgui CONFIG REQUIRED)
find_package(Vulkan REQUIRED)
target_link_libraries(debugger PRIVATE imgui::imgui glfw Vulkan::Vulkan)

# source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SOURCES})


