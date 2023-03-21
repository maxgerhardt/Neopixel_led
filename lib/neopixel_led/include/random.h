#ifndef LIB_NEOPIXEL_LED_RANDOM_H_
#define LIB_NEOPIXEL_LED_RANDOM_H_


namespace neopixel_led {
  namespace random {
    uint16_t rand_16_seed;

    inline uint8_t Random_8_Bit() {
      rand_16_seed = (rand_16_seed * 2053) + 13849;
      return (rand_16_seed >> 8) & 0xFF;
    }

    inline uint8_t Random_8_Bit(uint8_t max) {
      rand_16_seed = (rand_16_seed * 2053) + 13849;
      return ((rand_16_seed >> 8) & 0xFF) % max;
    }

    inline uint8_t Random_8_Bit(uint8_t min, uint8_t max) {
      rand_16_seed = (rand_16_seed * 2053) + 13849;
      return ((rand_16_seed >> 8) & 0xFF) % (max - min) + min;
    }

    inline uint16_t Random_16_Bit() {
      rand_16_seed = (rand_16_seed * 2053) + 13849;
      return rand_16_seed;
    }

    inline uint16_t Random_16_Bit(uint16_t max) {
      rand_16_seed = (rand_16_seed * 2053) + 13849;
      return rand_16_seed % max;
    }

    inline uint16_t Random_16_Bit(uint16_t min, uint16_t max) {
      rand_16_seed = (rand_16_seed * 2053) + 13849;
      return rand_16_seed % (max - min) + min;
    }
    
  }
}

#endif