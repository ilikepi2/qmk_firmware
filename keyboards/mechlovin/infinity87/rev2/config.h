#pragma once

#define PRODUCT_ID  0x8702
#define DEVICE_VER  0x0001
#define MANUFACTURER  Team.Mechlovin
#define PRODUCT       Infinity 87 rev2

#define MATRIX_ROW_PINS { A10, B13, B12, B11, C14, C15 }
#define MATRIX_COL_PINS { C13, B9, B4, B7, B8, B5, B6, A9, A5, A6, A7,B1, B2, B10, B3, B14, B15 }

#define BACKLIGHT_PIN B0
#define BACKLIGHT_BREATHING
#define BACKLIGHT_PWM_DRIVER PWMD3
#define BACKLIGHT_PWM_CHANNEL 3

#define RGB_DI_PIN A15
#define RGBLED_NUM 26
#define RGBLIGHT_LIMIT_VAL 255
#define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
/*== all animations enable ==*/
#define RGBLIGHT_ANIMATIONS
// /*== or choose animations ==*/
//     #define RGBLIGHT_EFFECT_BREATHING
//     #define RGBLIGHT_EFFECT_RAINBOW_MOOD
//     #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//     #define RGBLIGHT_EFFECT_SNAKE
//     #define RGBLIGHT_EFFECT_KNIGHT
//     #define RGBLIGHT_EFFECT_CHRISTMAS
//     #define RGBLIGHT_EFFECT_STATIC_GRADIENT
//     #define RGBLIGHT_EFFECT_RGB_TEST
//     #define RGBLIGHT_EFFECT_ALTERNATING

// generated by KBFirmware JSON to QMK Parser
// https://noroadsleft.github.io/kbf_qmk_converter/