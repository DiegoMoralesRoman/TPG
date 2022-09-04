#ifndef COLOR_HPP
#define COLOR_HPP

#include <stdint.h>

namespace tpg {
    template<typename Base_t>
    class Color {
        public:
            Base_t color;
    };

    // Color RGB
    namespace ___impl {
        struct RGB {
            uint8_t r, g, b;
        };
    }

    template class Color<___impl::RGB>;

    namespace colors {
        using RGB = Color<___impl::RGB>;
    }
}

#endif
