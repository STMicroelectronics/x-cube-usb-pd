---
pagetitle: Release Notes for STM32 USB-C Power Delivery F0 Device Driver
lang: en
---

::: {.row}
::: {.col-sm-12 .col-lg-4}

::: {.card .fluid}
::: {.sectione .dark}
<center>
# <small>Release Notes for</small> STM32 USB-C Power Delivery F0 Device Driver
Copyright &copy; 2018 STMicroelectronics\
    
[![ST logo](_htmresc/st_logo.png)](https://www.st.com){.logo}
</center>
:::
:::

# License

This software component is licensed by ST under Ultimate Liberty license
SLA0044, the \"License\"; You may not use this component except in
compliance with the License. You may obtain a copy of the License at:

[http://www.st.com/SLA0044](http://www.st.com/SLA0044)

# Purpose

The USB-PD device driver provides a set of functions to manage the physical layer (i.e. low level of the type C state machine and low level of message transport). This includes :

- Type C state machine: SRC, SNK or DRP

- Physical layer : message handling SOP, SOP', SOP'', HARDRESET, ...

- Timer server to handle GOODCRC, PRL repetition timing

The USB-PD library is developed following the Universal Serial Bus Power Delivery Specification Revision 3.0, V1.2 (June 06, 2018) and Universal Serial Bus type-C Cable 
and Connector Specification, Revision 1.3 (July 14, 2017). It has passed successfully the official certification.
:::

::: {.col-sm-12 .col-lg-8}
# Update History

::: {.collapse}
<input type="checkbox" id="collapse-section8" checked aria-hidden="true">
<label for="collapse-section8" aria-hidden="true">v3.0.0 / 13-Jan-2020</label>
<div>

## Main Changes

### Maintenance release

  Headline
  ----------------------------------------------------------
  Update release note
  Update release note
  Issue to report VBUS during PRS from SRC to SNK (detach on VBUS even if VBUS is well present)
  Change return value from uint32_t to uint16_t for HW_IF_PWR_GetVoltage (compatibility with F0)
  correction link with renaming toogle toggle
  Add switch for VBUS ON/OFF functions
  update for MISRA in PHY
  Add delay under NRTOS
  Enable & Disable RX reception to avoid system issue (Lecroy pb 2.2.6 detected with NRTOS on F0)
  [Ticket 50039] Update state machine to allow Rp Resistor update
  Move hw version in BSP
  PHY port state not correctly reinitialized. Issue to transmit new SRC capa after detach.
  Complete HAL->LL optimisations under clear flag (USE_HAL_ADC added, USE_HAL_SPI used in replacement of HAL_MODULE_SPI_ENABLED)


## Known Limitations

  Outstanding bugs list : None

  Requirements not met or planned in a forthcoming release : None

## Development Toolchains and Compilers


- IAR Embedded Workbench for ARM (EWARM) toolchain V8.20.2
- RealView Microcontroller Development Kit (MDK-ARM) toolchain V5.25
- System Workbench STM32 (SW4STM32) toolchain V2.7.2

## Supported Devices and boards

  All STM32F0xx devices embedding USBPD IP

## Backward compatibility

  No compatibility break with previous version

## Dependencies

 This software release is compatible with USB-C Power Delivery Core Stack Library v2.6.0

</div>
:::



::: {.collapse}
<input type="checkbox" id="collapse-section7"  aria-hidden="true">
<label for="collapse-section7" aria-hidden="true">V2.1.0 / 14-May-2018</label>
<div>

## Main Changes

### Maintenance release

  Headline
  ----------------------------------------------------------
  STM32F0 Device Driver version delivery for X-CUBE-USBPD V2.1.0 (used in context of P-Nucleo-USB001 kit with AFE MB1257 board).
  Implementation of code optimizations (RAM/ROM constraints), based on use of LL APIs.
  Update of CAD_Init() function (no more parameter related to wap ongoing management).
  Update in functions related to PWR management (parameters added in HW_IF_PWR_Enable(), new name of HW_IF_PWR_VBUSIsEnabled(), HW_IF_PWR_DisableDischPath() function added for Discharge path management).
  Addition of new API to handle Device dependent characteristics (Retry timer value, FRS signalling, supported SOP types, ...)
  Handling of PD3.0 extended messages : msg size type updated in USBPD_PHY_SendMessage().

  : Fixed bugs list

## Known limitations

  Outstanding bugs list : None

  Requirements not met or planned in a forthcoming release : None

## Development Toolchains and Compilers

- IAR Embedded Workbench for ARM (EWARM) toolchain V8.20.2
- RealView Microcontroller Development Kit (MDK-ARM) toolchain V5.25
- System Workbench STM32 (SW4STM32) toolchain V2.7.2

## Supported Devices and boards

  All STM32G0xx devices embedding USBPD IP

## Backward compatibility

  This version introduces a compatibility break compared to previous version (HW IF PWR interface update)

## Dependencies

 This software release is compatible with USB-C Power Delivery Core Stack Library v2.6.0 

</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section6" aria-hidden="true">
<label for="collapse-section6" aria-hidden="true">V2.0.0 / 12-Jan-2018</label>
<div>			

## Main Changes

### Maintenance release

  Headline
  ----------------------------------------------------------
  STM32F0 Device Driver version delivery for X-CUBE-USBPD V2.0.0.
  Code clean-up and code comments review. Code documentation added (Doxygen).
  Check of specific transitions for ongoing PR Swap now handled in Device side (no more in Core Stack).
  Move BMC task under Device driver scope (open in source code). previously handled in USBPD Core stack component.
  Corrections of issues found during USB PD certification workshop #106.
  Fix regressions on Ellisys (TD.PD.PC.E2 PS_RDY Sent Timely).
  Update HW_IF_PWR_GetCurrent to return automatically positive value for IBUS.
  
  : Fixed bugs list

</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section5" aria-hidden="true">
<label for="collapse-section5" aria-hidden="true">V2.4.0 / 15-Nov-2018</label>
<div>			

## Main Changes

### Maintenance release

  Headline
  ----------------------------------------------------------
  Update for cubemx integration
  Remove BSP reference, now managed trough the header file usbpd_devices_conf.h
  Remove reference to disco board
  Update for error recovery management

  
  : Fixed bugs list

</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section4" aria-hidden="true">
<label for="collapse-section4" aria-hidden="true">V1.4.0 / 27-Jul-2017</label>
<div>			

## Main Changes

### Maintenance release

  Headline
  ----------------------------------------------------------
  STM32F0 Device Driver is now delivered as source code.
  fix issue with ADC source clock when system clock is set to 8MHz.
  Update CAD Threshold for TD.4.5.4 issue.
  Addition of Error Recovery API.
  
  : Fixed bugs list

</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section3" aria-hidden="true">
<label for="collapse-section3" aria-hidden="true">V1.3.0 / 27-Apr-2017</label>
<div>			

## Main Changes

### Maintenance release

  Headline
  ----------------------------------------------------------
  second official version for STM32F0xx devices. This item only refers to F0 device part.
  Main Changes compared  to USB-C Power Delivery Library delivered in previous versions
  Power role swap improvements.
  Improved management of second port of MB1257  

  : Fixed bugs list

</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section2" aria-hidden="true">
<label for="collapse-section2" aria-hidden="true">V2.1.1 / 15-Jun-2018</label>
<div>			

## Main Changes

### Maintenance release

  Headline
  --------
  Main change add a file usbpd_devices_conf.h to configure the device
  
  : Fixed bugs list

</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section1" aria-hidden="true">
<label for="collapse-section1" aria-hidden="true">V1.2.0 / 16-Jan-2017</label>
<div>			

## Main Changes

### Initial release

  Headline
  ----------------------------------------------------------
  First official version for STM32F0xx devices after USBPD library split into Core and Device parts. This item only refers to F0 device part.

  Main Changes compared  to USB-C Power Delivery Library delivered in previous versions

  Addition of automatic mechanism for board identification (MB1257 RevB/RevC) and auto configuration
  Various corrections in regards with test updates and test additions in USBPD Conformance test tools
  Rp/Rd management improvement during transmission
  Timerserver feature moved inside Device

</div>
:::

:::
:::

<footer class="sticky">
For complete documentation on **STM32 32-bit Arm Cortex MCUs**,
visit: [http://www.st.com/STM32](http://www.st.com/STM32)

This release note uses up to date web standards and, for this reason, should not
be opened with Internet Explorer but preferably with popular browsers such as
Google Chrome, Mozilla Firefox, Opera or Microsoft Edge.
</footer>
