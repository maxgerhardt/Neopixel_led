#ifndef LIB_NEOPIXEL_LED_SCALE_RGB_H_
#define LIB_NEOPIXEL_LED_SCALE_RGB_H_

namespace neopixel_led {
  namespace scale_led {
    inline void ScaleColorComponentsWithThreshold(uint8_t& red, uint8_t& green, uint8_t& blue, uint8_t scale) {
      uint8_t nonzero_scale = (scale != 0) ? 1 : 0;

      red = ((red == 0) ? 0 : (red * scale) >> 8) + nonzero_scale;
      green = ((green == 0) ? 0 : (green * scale) >> 8) + nonzero_scale;
      blue = ((blue == 0) ? 0 : (blue * scale) >> 8) + nonzero_scale;
    }

    inline void ScaleColorComponents(uint8_t& red, uint8_t& green, uint8_t& blue, uint8_t scale) {
      uint16_t scale_value = scale + 1;
      
      red = (red * scale_value) >> 8;
      green = (green * scale_value) >> 8;
      blue = (blue * scale_value) >> 8;
    }

    inline uint8_t ScaleColorComponent(uint8_t color_component, uint8_t scale) {
      return (color_component * (1 + (uint16_t)(scale))) >> 8;
    } 

    inline uint8_t ScaleColorComponentWithThreshold(uint8_t color_component, uint8_t scale) {
      uint8_t nonzero_scale = (scale != 0) ? 1 : 0;
      return ((color_component == 0) ? 0 : (color_component * scale) >> 8) + nonzero_scale;
    }

  }
}






#endif