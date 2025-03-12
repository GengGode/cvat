# std_extension samples test
add_executable(debugger_test main.cpp)
target_link_libraries(debugger_test PRIVATE debugger)
target_link_libraries(debugger_test PRIVATE std_extension)
target_compile_features(debugger_test PRIVATE cxx_std_23)
