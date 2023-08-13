#include <stdint.h>
#include <stdbool.h>

typedef struct gpio_s * gpio_t;

/**
 * @brief
 *
 * @param puerto
 * @param bit
 * @return gpio_t
 */
gpio_t gpioCreate(uint8_t puerto, uint8_t bit);

void gpioSetOutput(gpio_t gpio, bool output);

void gpioSetState(gpio_t gpio, bool state);

bool gpioGetState(gpio_t gpio);
