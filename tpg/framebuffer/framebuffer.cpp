#include "framebuffer.hpp"

#include <sys/ioctl.h>
#include <stdio.h>

using namespace tpg::canvas;

// Template explicit instantiations
template class tpg::canvas::FrameBuffer<tpg::colors::RGB>;

namespace termsize {
    bool updated = false;
    struct winsize w;
    size_t get_width() {
        if (!updated) {
            updated = true;
            ioctl(0, TIOCGWINSZ, &w);
        }
        return w.ws_col;
    }

    size_t get_height() {
        if (!updated) {
            updated = true;
            ioctl(0, TIOCGWINSZ, &w);
        }
        return w.ws_row * 2;
    }

    tpg::Vec2<size_t> get_size() {
        struct winsize w;
        ioctl(0, TIOCGWINSZ, &w);
        return {w.ws_col, static_cast<size_t>(w.ws_row * 2)};
    }
}

template<typename Color>
FrameBuffer<Color>::FrameBuffer()
    : m_color_buffer(termsize::get_width() * termsize::get_height()), m_position(termsize::get_width(), termsize::get_height()) {
    termsize::updated = false;
}
