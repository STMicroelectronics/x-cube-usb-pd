# X-CUBE-USB-PD MCU Firmware Package

**X-CUBE-USB-PD** is an STMicroelectronics original initiative. It uses for USB Type-C and Power Delivery software expansion for STM32Cube [UM2073](https://www.st.com/resource/en/user_manual/dm00288897-stm32-usb-pd-power-delivery-software-expansion-for-stm32cube-stmicroelectronics.pdf).

**X-CUBE-USB-PD** is a USB-IF certified Expansion Package and consists of libraries, drivers, sources, APIs and application examples running on STM32F0 Series microcontrollers acting as USB Type-C port managers (TCPMs).

Please note that since this package has been delivered, the USB power delivery PHY block has been integrated in the ST microcontrollers.
So more integrated and cost effective solutions are available in new STM32 references ([STM32G0](https://www.st.com/en/microcontrollers-microprocessors/stm32g0-series.html), [STM32G4](https://www.st.com/en/microcontrollers-microprocessors/stm32g4-series.html), [STM32L5](https://www.st.com/en/microcontrollers-microprocessors/stm32l5-series.html)...).
Check the ST web page : [USB Type-C and Power Delivery](https://www.st.com/en/applications/connectivity/usb-type-c-and-power-delivery.html#overview) for more details.

One DRP example is provided to help to develop applications based on USB-PD.
The "Core" of the stack is delivered in library format while the "Device" part, in open source format, offers high level of flexibility to match the design considerations.
This Expansion Package is demonstrated on one hardware implementation, but can easily be ported to any STM32.
* Ideal solution to upgrade legacy design based-on any STM32F0/F4 with USB-C
* Lowest memory footprint and easy porting within the Cortex™-M series
* USB-PD 2.0/3.0+PPS compliant, multi-port
* Tested with TCPC controller from On-SEMI FUSB307B: STM32F072 MCU Type-Port Manager (TCPM) with ON-SEMI FUSB307B Type-C Port Controller (TCPC) evaluation board (DB3623)

Note: MB1303 projects are now supported under STUSB1602 section: https://www.st.com/en/interfaces-and-transceivers/stusb1602.html#tools-software

## Boards available
  * [ON-FUSB3-STM32](https://www.st.com/content/st_com/en/products/evaluation-tools/product-evaluation-tools/mcu-mpu-eval-tools/stm32-mcu-mpu-eval-tools/stm32-3rd-party-evaluation-tools/on-fusb3-stm32.html)

## Documentation
 * Application Note [AN5225 : USB Type-C™ Power Delivery using STM32xx Series MCUs and STM32xxx
Series MPUs](https://www.st.com/content/ccc/resource/technical/document/application_note/group1/38/94/1d/41/0e/ba/49/21/DM00536349/files/DM00536349.pdf/jcr:content/translations/en.DM00536349.pdf)
 
 * User manual [UM2552 : Managing USB power delivery stack with STM32 microcontrollers](https://www.st.com/content/ccc/resource/technical/document/user_manual/group1/aa/15/14/5d/f5/b8/4a/fc/DM00598101/files/DM00598101.pdf/jcr:content/translations/en.DM00598101.pdf)

## Release note
Details about the content of this release are available in the release note [here](https://htmlpreview.github.io/?https://github.com/STMicroelectronics/x-cube-usb-pd/blob/master/Release_Notes.html).

## Tests result reports
* Ellisys: Find the latest test report done on Ellisys tool [here](https://htmlpreview.github.io/?https://github.com/STMicroelectronics/x-cube-usb-pd/blob/master/Documentation/TestResults/Ellisys/x-cube-usbpd-3.1.0%20-%20USB%20Compliance%20Report.html)

* MQP: Find the latest test reports done on MQP tool [PHY PD2.0](https://htmlpreview.github.io/?https://github.com/STMicroelectronics/x-cube-usb-pd/blob/master/Documentation/TestResults/MQP/MQP_EVAL_FUSB307_DRP_STM32F072RB-Nucleo_EVAL_FUSB307_DRP-iarPHY2_20_2_2020_15_49_2.htm), [POW PD2.0](https://htmlpreview.github.io/?https://github.com/STMicroelectronics/x-cube-usb-pd/blob/master/Documentation/TestResults/MQP/MQP_EVAL_FUSB307_DRP_STM32F072RB-Nucleo_EVAL_FUSB307_DRP-iarPOW2_20_2_2020_15_58_5.htm), [PROT PD2.0](https://htmlpreview.github.io/?https://github.com/STMicroelectronics/x-cube-usb-pd/blob/master/Documentation/TestResults/MQP/MQP_EVAL_FUSB307_DRP_STM32F072RB-Nucleo_EVAL_FUSB307_DRP-iarPRO2_20_2_2020_15_54_9.htm), [PROT PD3.0](https://htmlpreview.github.io/?https://github.com/STMicroelectronics/x-cube-usb-pd/blob/master/Documentation/TestResults/MQP/MQP_EVAL_FUSB307_DRP_STM32F072RB-Nucleo_EVAL_FUSB307_DRP-iarPRO3_20_2_2020_16_0_29.htm) and [POW PD3.0](https://htmlpreview.github.io/?https://github.com/STMicroelectronics/x-cube-usb-pd/blob/master/Documentation/TestResults/MQP/MQP_EVAL_FUSB307_DRP_STM32F072RB-Nucleo_EVAL_FUSB307_DRP-iarPOW3_20_2_2020_16_7_41.htm), 

## FW User manual

There are two user manual available in this release:
* [USBPD CORE UM](https://github.com/STMicroelectronics/x-cube-usb-pd/blob/master/Documentation/USBPD_CORE_RELEASE_User_Manual.chm): User Manual for G0/L5/G4 solutions
* [USBPD TCPM UM](https://github.com/STMicroelectronics/x-cube-usb-pd/blob/master/Documentation/USBPD_CORE_TCPM_RELEASE_User_Manual.chm): User Manual for TCPM solutions

## Troubleshooting

**Caution** : The **Issues** requests are strictly limited to submit problems or suggestions related to the software delivered in this repo 

**For any question** related to this solution, the hardware performance, the hardware characteristics, the tools, the environment, you can submit a topic on the [ST Community/STM32 MCUs forum](https://community.st.com/s/group/0F90X000000AXsASAW/stm32-mcus)
