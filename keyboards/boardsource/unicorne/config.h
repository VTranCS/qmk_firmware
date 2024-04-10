// Copyright 2023 jack (@waffle87)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET

#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP22
#define I2C1_SCL_PIN GP23

#define AUDIO_PIN GP28
#define AUDIO_PWM_DRIVER PWMD6
#define AUDIO_INIT_DELAY
#define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_A
#define STARTUP_SONG SONG(ODE_TO_JOY)

#define ANALOG_JOYSTICK_Y_AXIS_PIN GP26
#define ANALOG_JOYSTICK_X_AXIS_PIN GP27
#define POINTING_DEVICE_INVERT_Y
#define POINTING_DEVICE_INVERT_X
#define POINTING_DEVICE_ROTATION_270
#define ANALOG_JOYSTICK_SPEED_REGULATOR 5
#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT
#define SPLIT_WPM_ENABLE
#define SPLIT_OLED_ENABLE



// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 350

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 0

