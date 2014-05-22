nrf51-uart-bitbanged
==================

This project uses the nRF51x22 to create a bit banged UART implementation.
Peripheral used:
* TIMER1

The library can be used with or without a SoftDevice.

KNOWN LIMITATIONS:
- TXD operation only supported
- 115k200 baud is maximum

Requirements
------------
- nRF51 SDK version 5 or newer
- nRF51822 Development kit or Evaluation kit

The project may need modifications to work with later versions or other boards. 

To compile it, clone the repository in the nrf51822/Board/nrf6310/ folder.

About this project
------------------
This application is one of several applications that has been built by the support team at Nordic Semiconductor, as a demo of some particular feature or use case. It has not necessarily been thoroughly tested, so there might be unknown issues. It is hence provided as-is, without any warranty. 

However, in the hope that it still may be useful also for others than the ones we initially wrote it for, we've chosen to distribute it here on GitHub. 

The application is built to be used with the official nRF51 SDK, that can be downloaded from www.nordicsemi.no, provided you have a product key for one of our kits.