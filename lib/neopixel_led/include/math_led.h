#ifndef LIB_NEOPIXEL_LED_MATH_LED_H_
#define LIB_NEOPIXEL_LED_MATH_LED_H_
#include <stdint.h>

namespace neopixel_led {
  namespace math_led {
    inline uint8_t AddByteSaturating0xff(uint8_t a, uint8_t b) {
      uint16_t sum = a + b;
      if (sum > 0xFF) {
        return 0xFF;
      }
      return sum;
    }

    inline uint8_t AddByteSaturating0xf7(uint8_t a, uint8_t b) {
      uint16_t sum = a + b;
      if (sum > 0xF7) {
        return 0xF7;
      }
      return sum;
    }

    inline uint8_t SubByteSaturating0x00(uint8_t a, uint8_t b) {
      if (a < b) {
        return 0x00;
      }
      return a - b;
    }

    inline uint8_t MulByteSaturating0xff(uint8_t a, uint8_t b) {
      uint16_t product = a * b;
      if (product > 0xFF) {
        return 0xFF;
      }
      return product;
    }

  }
}



#endif