# STM32 Nucleo-F303RE onekey

[Baord info](https://os.mbed.com/platforms/ST-Nucleo-F303RE/)

To trigger keypress, short together pins *A0* and *A1*.

You'll also need to connect:

* `E5V`
* `GND`
* USB `D+` to `PA12`/`CN10 pin 12`
* USB `D-` to `PA11`/`CN10 pin 14`
* Move `JP5` to `E5V`
