https://andreasrohner.at/posts/Electronics/How-to-fix-device-permissions-for-the-USBasp-programmer/
https://www.fischl.de/usbasp/

```text
(venv) € lsusb
Bus 004 Device 001: ID 1d6b:0003 Linux Foundation 3.0 root hub
Bus 003 Device 001: ID 1d6b:0002 Linux Foundation 2.0 root hub
Bus 002 Device 002: ID 0bda:0412 Realtek Semiconductor Corp. 4-Port USB 3.0 Hub
Bus 002 Device 001: ID 1d6b:0003 Linux Foundation 3.0 root hub
Bus 001 Device 005: ID 04d9:4545 Holtek Semiconductor, Inc. Keyboard [Diatec Majestouch 2 Tenkeyless]
Bus 001 Device 004: ID 0bda:5412 Realtek Semiconductor Corp. 4-Port USB 2.0 Hub
Bus 001 Device 003: ID 046d:c069 Logitech, Inc. M-U0007 [Corded Mouse M500]
Bus 001 Device 002: ID 1bcf:2701 Sunplus Innovation Technology Inc. Full HD webcam
Bus 001 Device 006: ID 1235:8211 Focusrite-Novation Scarlett Solo (3rd Gen.)
Bus 001 Device 009: ID 16c0:05dc Van Ooijen Technische Informatica shared ID for use with libusb
Bus 001 Device 001: ID 1d6b:0002 Linux Foundation 2.0 root hub
(venv) € sudo chmod 666 /dev/bus/usb/001/009
[sudo] password for user:
Sorry, try again.
[sudo] password for user:
(venv) €
```

https://www.best-microcontroller-projects.com/attiny-ultra-low-power.html

the pullups should be enabled and the pins set to input to ensure that the
buffers on the pins do not switch on them floating, if the MCU has an analog
mode then this might not need to be done as it bypasses the buffer

http://www.learningaboutelectronics.com/Articles/Transistor-buffer-circuit.php

