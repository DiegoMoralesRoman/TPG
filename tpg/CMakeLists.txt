add_subdirectory(framebuffer)
add_library(tpg framebuffer tpg.hpp)
target_link_libraries(tpg framebuffer)
set_target_properties(tpg PROPERTIES LINKER_LANGUAGE CXX)
