macro(add_deps target_name deps)
    target_include_directories(${target_name} PRIVATE ${deps_dir}/${deps}/include)
endmacro(add_deps)
