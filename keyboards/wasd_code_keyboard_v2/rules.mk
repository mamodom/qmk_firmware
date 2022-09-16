# Linker script to use
# - it should exist either in <chibios>/os/common/startup/ARMCMx/compilers/GCC/ld/
#   or <keyboard_dir>/ld/
MCU_LDSCRIPT = STM32F303xE

BACKLIGHT_ENABLE = yes

BACKLIGHT_DRIVER = pwm
