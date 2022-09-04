file(REMOVE_RECURSE
  "libtpg.a"
  "libtpg.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/tpg.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
