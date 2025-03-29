add_library(frame_source_interface INTERFACE)   
target_include_directories(frame_source_interface INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/interface)
target_compile_features(frame_source_interface INTERFACE cxx_std_23)
target_link_libraries(frame_source_interface INTERFACE std_extension)

add_library(frame_source STATIC)
target_link_libraries(frame_source PRIVATE frame_source_interface)
target_link_libraries(frame_source PRIVATE std_extension)
target_compile_features(frame_source PRIVATE cxx_std_23)
target_include_directories(frame_source PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/interface)
target_include_directories(frame_source INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(frame_source PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(frame_source PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/source)

target_sources(frame_source PRIVATE 
    source/frame_source.cpp
)

include(${deps_dir}/add_deps.cmake)
add_deps(frame_source WindowsHModular)
  
#target_link_libraries(frame_source PRIVATE)


# source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SOURCES})


