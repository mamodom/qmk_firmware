# Linker script to use
# - it should exist either in <chibios>/os/common/startup/ARMCMx/compilers/GCC/ld/
#   or <keyboard_dir>/ld/
MCU_LDSCRIPT = STM32F303xE

# Board: it should exist either in <chibios>/os/hal/boards/,
# <keyboard_dir>/boards/, or drivers/boards/
BOARD = ST_NUCLEO64_F303RE

BOOTLOADER = stm32-dfu

MCU = STM32F303
