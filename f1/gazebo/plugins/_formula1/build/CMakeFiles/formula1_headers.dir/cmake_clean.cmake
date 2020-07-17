file(REMOVE_RECURSE
  "libformula1_headers.a"
  "libformula1_headers.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/formula1_headers.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
