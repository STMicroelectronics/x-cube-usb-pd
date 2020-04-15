---
pagetitle: Release Notes for STM32F0xx_Nucleo Board drivers
lang: en
---

::: {.row}
::: {.col-sm-12 .col-lg-4}

::: {.card .fluid}
::: {.sectione .dark}
<center>
# <small>Release Notes for</small> STM32F0xx_Nucleo Board drivers
Copyright &copy; 2017 STMicroelectronics\
    
[![ST logo](_htmresc/st_logo.png)](https://www.st.com){.logo}
</center>
:::
:::

# License

This software component is licensed by ST under BSD 3-Clause license, the "License"; You may not use this component except in compliance with the License. You may obtain a copy of the License at:

[https://opensource.org/licenses/BSD-3-Clause](https://opensource.org/licenses/BSD-3-Clause)

# Purpose

This driver provides a set of functions to manage:

- LED, Button on STM32F0xx_Nucleo Kit from STMicroelectronics

:::

::: {.col-sm-12 .col-lg-8}
# Update History

::: {.collapse}
<input type="checkbox" id="collapse-section10" checked aria-hidden="true">
<label for="collapse-section10" aria-hidden="true">xcube_usbpd_v3.1.0 / 14-Apr.-2020</label>
<div>

## Main Changes

### Maintenance release

Maintenance release of STM32F0xx_Nucleo board drivers for STM32Cube F0 FW package

  Headline
  ----------------------------------------------------------
  Ticket 84145 - [FOSS-Audit] Licenses and header issues
  Implement possibility to change voltage output to 12V

  : Additional features
\

## Development Toolchains and Compilers
- IAR Embedded Workbench for ARM (EWARM) toolchain V8.32.3
- RealView Microcontroller Development Kit (MDK-ARM) toolchain V5.27
- STM32CubeIDE V1.2.0

## Supported Devices and boards
- STM32F072RB devices
- NUCLEO-F072RB (MB1136)

## Backward compatibilities

This software is compatible with previous versions

## Other compatibilities

/

</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section10" aria-hidden="true">
<label for="collapse-section10" aria-hidden="true">xcube_usbpd_v3.0.0 / 04-Feb.-2020</label>
<div>

## Main Changes

### Maintenance release

Maintenance release of STM32F0xx_Nucleo board drivers for STM32Cube F0 FW package

  Headline
  ----------------------------------------------------------
  Add BSP interfaces to retrieve HW Board version and PD Type names (for GUI)
  Remove BSP trace files

  : Additional features
\

## Development Toolchains and Compilers
- IAR Embedded Workbench for ARM (EWARM) toolchain V8.32.3
- RealView Microcontroller Development Kit (MDK-ARM) toolchain V5.27
- STM32CubeIDE V1.2.0

## Supported Devices and boards
- STM32F072RB devices
- NUCLEO-F072RB (MB1136)

## Backward compatibilities

This software is compatible with previous versions

## Other compatibilities

/

</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section9" aria-hidden="true">
<label for="collapse-section9" aria-hidden="true">xcube_usbpd_v2.1.0 / 15-May-2018</label>
<div>

## Main Changes

### First release

## Contents

  Headline
  ----------------------------------------------------------
  Align power interface with G0
  Change prio for alert to allow PE task not to be interrupted
  Change prio for alert to match with nrtos version
  Increase priority of ALERT pins
  Update for FUSB302
  Move GUI functions from trace files

## Development Toolchains and Compilers
/

## Supported Devices and boards
/

## Other compatibilities

/

</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section8" aria-hidden="true">
<label for="collapse-section8" aria-hidden="true">V1.5.0_USBPD / 15-Dec-2017</label>
<div>

## Main Changes

### First release

## Contents

  Headline
  ----------------------------------------------------------
  Integration of USBPD Trace feature through BSP Trace API primitives : addition of new files usbpd_bsp_trace.h/.c.
  Addition of some parameter saving in flash capabilities for GUI purpose.

## Development Toolchains and Compilers
/

## Supported Devices and boards
/

## Other compatibilities

/

</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section7" aria-hidden="true">
<label for="collapse-section7" aria-hidden="true">V1.4.0_USBPD / 22-Sep-2017</label>
<div>

## Main Changes

### First release

## Contents

  Headline
  ----------------------------------------------------------
  Correction for CHM generation.
  Addition of some trace capabilities.

## Development Toolchains and Compilers
/

## Supported Devices and boards
/

## Other compatibilities

/

</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section6" aria-hidden="true">
<label for="collapse-section6" aria-hidden="true">V1.1.3_USBPD / 17-Jan-2017</label>
<div>

## Main Changes

### First release

## Contents

  Headline
  ----------------------------------------------------------
  Allow use of UART for USBPD shield.

## Development Toolchains and Compilers
/

## Supported Devices and boards
/

## Other compatibilities

/

</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section6" aria-hidden="true">
<label for="collapse-section6" aria-hidden="true">V1.1.3 / 29-January-2016</label>
<div>

## Main Changes

### First release

## Contents

  Headline
  ----------------------------------------------------------
  Updated GPIO Output Speed literals naming to ensure HAL full compatibility.
  Added new services for SD management, as required by updated version of Adafruit 1.8 component.
  Modified GPIO_LED configuration to NOPULL (to improve power consumption).
  Modified USER_BUTTON definitions to ensure compatibility between Nucleo boards.

## Development Toolchains and Compilers
/

## Supported Devices and boards
/

## Other compatibilities

/

</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section5" aria-hidden="true">
<label for="collapse-section5" aria-hidden="true">V1.1.2 / 26-June-2015</label>
<div>

## Main Changes

### First release

## Contents

  Headline
  ----------------------------------------------------------
  Update CHM User Manual for BSP/STM32F0xx_Nucleo.
  Complete HAL API alignment (renaming).
  Add missing ADC calibration for JoyStick management.
  Update ADC polling in Nucleo shield Adafruit joystick.
  Implement workaround to cover RCC limitation regarding Peripheral enable delay.

## Development Toolchains and Compilers
/

## Supported Devices and boards
/

## Other compatibilities

/

</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section4" aria-hidden="true">
<label for="collapse-section4" aria-hidden="true">V1.1.1 / 27-November-2014</label>
<div>

## Main Changes

### First release

## Contents

  Headline
  ----------------------------------------------------------
  Case mismatch between #include typo & effective file name generating compiler errors under Linux

## Development Toolchains and Compilers
/

## Supported Devices and boards
/

## Other compatibilities

/

</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section3" aria-hidden="true">
<label for="collapse-section3" aria-hidden="true">V1.1.0 / 01-Aug-2014</label>
<div>

## Main Changes

### First release

## Contents

  Headline
  ----------------------------------------------------------
  Compatibility with LCD Component driver update:
  Change LCD_IO_WriteData to LCD_IO_WriteMultipleData
  LCD IO needs to treat also 1 byte.
  New supported devices are STM32F091RC.

## Development Toolchains and Compilers
/

## Supported Devices and boards
/

## Other compatibilities

/

</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section2" aria-hidden="true">
<label for="collapse-section2" aria-hidden="true">V1.0.0 / 20-May-2014</label>
<div>

## Main Changes

### First release

## Contents

  Headline
  ----------------------------------------------------------
  First official release dedicated to STM32CubeF0 based development. Supported devices are STM32F072RB and STM32F030R8.

## Development Toolchains and Compilers
/

## Supported Devices and boards
/

## Other compatibilities

/

</div>
:::

:::
:::

<footer class="sticky">
For complete documentation on STM32F0xx, visit: [[www.st.com/STM32F0](http://www.st.com/STM32F0)]

*This release note uses up to date web standards and, for this reason, should not be opened with Internet Explorer but preferably with popular browsers such as Google Chrome, Mozilla Firefox, Opera or Microsoft Edge.*
</footer>
