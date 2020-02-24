---
pagetitle: OnSemi FUSB307 Component Driver
lang: en
---

::: {.row}
::: {.col-sm-12 .col-lg-4}

::: {.card .fluid}
::: {.sectione .dark}
<center>
# <small>Release Notes for</small> OnSemi FUSB307 Component Driver
Copyright &copy; 2018 STMicroelectronics\
    
[![ST logo](_htmresc/st_logo.png)](https://www.st.com){.logo}
</center>
:::
:::

# License

This software component is licensed by ST under BSD 3-Clause license, the "License"; 
You may not use this component except in compliance with the License. You may obtain a copy of the License at:

[http://www.opensource.org/licenses/BSD-3-Clause](http://www.opensource.org/licenses/BSD-3-Clause)

# Purpose

This driver is used in a STM32 USB-PD TCPM application. It allows to communicate with OnSemi FUSB307 TCPC component

This application has been tested on ON-FUSB3-STM32 board available here:

[https://www.st.com/en/evaluation-tools/on-fusb3-stm32.html](https://www.st.com/en/evaluation-tools/on-fusb3-stm32.html)

:::

::: {.col-sm-12 .col-lg-8}
# Update History

::: {.collapse}
<input type="checkbox" id="collapse-section2" checked aria-hidden="true">
<label for="collapse-section2" aria-hidden="true">V2.0.0 / 21-Feb.-2020</label>
<div>

## Main Changes

### Maintenance release


## Contents

  Headline
  --------
  Release (BSP Components OnSemi FUSB307 driver version delivered within X-CUBE USB-PD Expansion package v3.0.0).
  Change vSafe0V from 800mV to 700mV
  Fix hard issue detected on MQP linked to detach during hard reset procedure
  Update Vendor defines
  Need to enable VCONN quicker
  Disable RX during hard reset sequence failed with FUSB307
  Add VBUS debouce in component instead of stack
  Add Specification in Msg_Header API
  Add 2 interfaces for enable and disable RX
  Change fusb305_tcpc_set_rx_state interface

  : Fixed bugs list

## Known Limitations

  Outstanding bugs list : None

  Requirements not met or planned in a forthcoming release : None

## Development Toolchains and Compilers

- IAR Embedded Workbench for ARM (EWARM) toolchain V8.32.3
- RealView Microcontroller Development Kit (MDK-ARM) toolchain V5.27.1.0
- STM32CubeIDE toolchain V1.2.1

## Supported Devices and boards

  ON-FUSB3-STM32 board

## Backward compatibility

  No compatibility break with previous version

## Dependencies

</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section1" aria-hidden="true">
<label for="collapse-section1" aria-hidden="true">V1.0.0 / 05-April-2018</label>
<div>

## Main Changes

### Maintenance release


## Contents

  Headline
  --------
  First official release (BSP Components OnSemi FUSB307 driver version delivered within X-CUBE USB-PD Expansion package v2.1.0).

  : Fixed bugs list

## Known Limitations

  Outstanding bugs list : None

  Requirements not met or planned in a forthcoming release : None

## Development Toolchains and Compilers

- IAR Embedded Workbench for ARM (EWARM) toolchain V8.20.2
- RealView Microcontroller Development Kit (MDK-ARM) toolchain V5.25
- System Workbench STM32 (SW4STM32) toolchain V2.7.2

## Supported Devices and boards

  All STM32xx devices implementing a USBPD application able to communicate with CubeMonitor_UCPD

## Backward compatibility

  No compatibility break with previous version

## Dependencies

</div>
:::

:::
:::

<footer class="sticky">
For complete documentation on STM32,visit: [[www.st.com/stm32](http://www.st.com)]

This release note uses up to date web standards and, for this reason, should not be opened with Internet Explorer
but preferably with popular browsers such as Google Chrome, Mozilla Firefox, Opera or Microsoft Edge.
</footer>
