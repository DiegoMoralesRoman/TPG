#ifndef CANVAS_HPP
#define CANVAS_HPP

#include "color.hpp"
#include "utils.hpp"

#include <vector>

namespace tpg::canvas {
    template<typename Color>
    class FrameBuffer {
        public:
            /**
             * @brief Default constructor takes the terminal size as the FrameBuffer size
             */
            FrameBuffer(); 
            FrameBuffer(Vec2<size_t> size);
            FrameBuffer(Vec2<size_t> position, Vec2<size_t> size);

            /**
             * @brief
             */
            void render();

        private:
            std::vector<Color> m_color_buffer;
            Vec2<size_t> m_size;
            Vec2<size_t> m_position;
    };
    
}

#endif
