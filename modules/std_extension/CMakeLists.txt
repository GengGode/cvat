# header-only library for std_extension
add_library(std_extension INTERFACE)
target_include_directories(std_extension INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_compile_features(std_extension INTERFACE cxx_std_23)

