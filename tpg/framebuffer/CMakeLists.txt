set(SOURCES framebuffer.cpp color.cpp utils.cpp)
set(HEADERS framebuffer.hpp color.hpp utils.hpp)

add_library(framebuffer ${HEADERS} ${SOURCES})
