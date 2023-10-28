# CMSIS Build CMakeLists generated on 2023-10-28T05:00:19

cmake_minimum_required(VERSION 3.22)

# Target options

set(TARGET The_Udder_Project)
set(CPU Cortex-M4)
set(PRJ_DIR "f:/DeLaval/DeLaval HK Project 2023 - General/Electronics/Code/The-Udder-Project/MDK-ARM")
set(OUT_DIR "F:/DeLaval/DeLaval HK Project 2023 - General/Electronics/Code/The-Udder-Project/MDK-ARM/out/The_Udder_Project/TheUdderProject")
set(INT_DIR "F:/DeLaval/DeLaval HK Project 2023 - General/Electronics/Code/The-Udder-Project/MDK-ARM/tmp/The_Udder_Project/TheUdderProject")
set(FPU SP_FPU)
set(DSP DSP)
set(SECURE Non-secure)
set(BYTE_ORDER Little-endian)
set(OPTIMIZE none)
set(DEBUG on)
set(AS_FLAGS_GLOBAL "-masm=auto")
set(CC_FLAGS_GLOBAL "-std=c99 -fno-rtti -funsigned-char -fshort-enums -fshort-wchar -ffunction-sections -Wno-packed -Wno-missing-variable-declarations -Wno-missing-prototypes -Wno-missing-noreturn -Wno-sign-conversion -Wno-nonportable-include-path -Wno-reserved-id-macro -Wno-unused-macros -Wno-documentation-unknown-command -Wno-documentation -Wno-license-management -Wno-parentheses-equality")
set(CXX_FLAGS_GLOBAL "-xc++ -std=c++03 -fno-rtti -funsigned-char -fshort-enums -fshort-wchar -ffunction-sections -Wno-packed -Wno-missing-variable-declarations -Wno-missing-prototypes -Wno-missing-noreturn -Wno-sign-conversion -Wno-nonportable-include-path -Wno-reserved-id-macro -Wno-unused-macros -Wno-documentation-unknown-command -Wno-documentation -Wno-license-management -Wno-parentheses-equality")
set(LD_FLAGS_GLOBAL "--map --load_addr_map_info --xref --callgraph --symbols --info sizes --info totals --info unused --info veneers --list --strict --summary_stderr --info summarysizes")
set(LD_SCRIPT "f:/DeLaval/DeLaval HK Project 2023 - General/Electronics/Code/The-Udder-Project/MDK-ARM/The_Udder_Project_TheUdderProject.sct")

set(DEFINES
  STM32L476xx
  _RTE_
  USE_HAL_DRIVER
)

set(INC_PATHS
  "f:/DeLaval/DeLaval HK Project 2023 - General/Electronics/Code/The-Udder-Project/Core/Inc"
  "f:/DeLaval/DeLaval HK Project 2023 - General/Electronics/Code/The-Udder-Project/Drivers/STM32L4xx_HAL_Driver/Inc"
  "f:/DeLaval/DeLaval HK Project 2023 - General/Electronics/Code/The-Udder-Project/Drivers/STM32L4xx_HAL_Driver/Inc/Legacy"
  "f:/DeLaval/DeLaval HK Project 2023 - General/Electronics/Code/The-Udder-Project/Drivers/CMSIS/Device/ST/STM32L4xx/Include"
  "f:/DeLaval/DeLaval HK Project 2023 - General/Electronics/Code/The-Udder-Project/Drivers/CMSIS/Include"
  "f:/DeLaval/DeLaval HK Project 2023 - General/Electronics/Code/The-Udder-Project/MDK-ARM/RTE/_TheUdderProject"
  "C:/Users/XJTan/AppData/Local/arm/packs/ARM/CMSIS/5.9.0/CMSIS/Core/Include"
  "C:/Users/XJTan/AppData/Local/arm/packs/Keil/STM32L4xx_DFP/2.6.2/Drivers/CMSIS/Device/ST/STM32L4xx/Include"
)

set(AS_ARM_SRC_FILES
  "f:/DeLaval/DeLaval HK Project 2023 - General/Electronics/Code/The-Udder-Project/MDK-ARM/startup_stm32l476xx.s"
)

set(CC_SRC_FILES
  "f:/DeLaval/DeLaval HK Project 2023 - General/Electronics/Code/The-Udder-Project/Core/Src/gpio.c"
  "f:/DeLaval/DeLaval HK Project 2023 - General/Electronics/Code/The-Udder-Project/Core/Src/main.c"
  "f:/DeLaval/DeLaval HK Project 2023 - General/Electronics/Code/The-Udder-Project/Core/Src/stm32l4xx_hal_msp.c"
  "f:/DeLaval/DeLaval HK Project 2023 - General/Electronics/Code/The-Udder-Project/Core/Src/stm32l4xx_it.c"
  "f:/DeLaval/DeLaval HK Project 2023 - General/Electronics/Code/The-Udder-Project/Core/Src/system_stm32l4xx.c"
  "f:/DeLaval/DeLaval HK Project 2023 - General/Electronics/Code/The-Udder-Project/Drivers/STM32L4xx_HAL_Driver/Src/stm32l4xx_hal.c"
  "f:/DeLaval/DeLaval HK Project 2023 - General/Electronics/Code/The-Udder-Project/Drivers/STM32L4xx_HAL_Driver/Src/stm32l4xx_hal_cortex.c"
  "f:/DeLaval/DeLaval HK Project 2023 - General/Electronics/Code/The-Udder-Project/Drivers/STM32L4xx_HAL_Driver/Src/stm32l4xx_hal_dma.c"
  "f:/DeLaval/DeLaval HK Project 2023 - General/Electronics/Code/The-Udder-Project/Drivers/STM32L4xx_HAL_Driver/Src/stm32l4xx_hal_dma_ex.c"
  "f:/DeLaval/DeLaval HK Project 2023 - General/Electronics/Code/The-Udder-Project/Drivers/STM32L4xx_HAL_Driver/Src/stm32l4xx_hal_exti.c"
  "f:/DeLaval/DeLaval HK Project 2023 - General/Electronics/Code/The-Udder-Project/Drivers/STM32L4xx_HAL_Driver/Src/stm32l4xx_hal_flash.c"
  "f:/DeLaval/DeLaval HK Project 2023 - General/Electronics/Code/The-Udder-Project/Drivers/STM32L4xx_HAL_Driver/Src/stm32l4xx_hal_flash_ex.c"
  "f:/DeLaval/DeLaval HK Project 2023 - General/Electronics/Code/The-Udder-Project/Drivers/STM32L4xx_HAL_Driver/Src/stm32l4xx_hal_flash_ramfunc.c"
  "f:/DeLaval/DeLaval HK Project 2023 - General/Electronics/Code/The-Udder-Project/Drivers/STM32L4xx_HAL_Driver/Src/stm32l4xx_hal_gpio.c"
  "f:/DeLaval/DeLaval HK Project 2023 - General/Electronics/Code/The-Udder-Project/Drivers/STM32L4xx_HAL_Driver/Src/stm32l4xx_hal_pwr.c"
  "f:/DeLaval/DeLaval HK Project 2023 - General/Electronics/Code/The-Udder-Project/Drivers/STM32L4xx_HAL_Driver/Src/stm32l4xx_hal_pwr_ex.c"
  "f:/DeLaval/DeLaval HK Project 2023 - General/Electronics/Code/The-Udder-Project/Drivers/STM32L4xx_HAL_Driver/Src/stm32l4xx_hal_rcc.c"
  "f:/DeLaval/DeLaval HK Project 2023 - General/Electronics/Code/The-Udder-Project/Drivers/STM32L4xx_HAL_Driver/Src/stm32l4xx_hal_rcc_ex.c"
  "f:/DeLaval/DeLaval HK Project 2023 - General/Electronics/Code/The-Udder-Project/Drivers/STM32L4xx_HAL_Driver/Src/stm32l4xx_hal_tim.c"
  "f:/DeLaval/DeLaval HK Project 2023 - General/Electronics/Code/The-Udder-Project/Drivers/STM32L4xx_HAL_Driver/Src/stm32l4xx_hal_tim_ex.c"
)

# Toolchain config map

set(REGISTERED_TOOLCHAIN_ROOT "c:/Users/XJTan/.vcpkg/artifacts/vcpkg-artifacts-arm/compilers.arm.armclang/6.20.0/bin")
set(REGISTERED_TOOLCHAIN_VERSION "6.20.0")
set(TOOLCHAIN_VERSION_MIN "6.20.0")
include ("C:/Users/XJTan/.vcpkg/artifacts/vcpkg-artifacts-arm/tools.open.cmsis.pack.cmsis.toolbox/2.1.0/etc/AC6.6.18.0.cmake")
include ("C:/Users/XJTan/.vcpkg/artifacts/vcpkg-artifacts-arm/tools.open.cmsis.pack.cmsis.toolbox/2.1.0/etc/CMSIS-Build-Utils.cmake")

# Setup project

project(${TARGET} LANGUAGES AS_ARM C)

cbuild_get_running_toolchain(TOOLCHAIN_ROOT TOOLCHAIN_VERSION C)

# Global Flags

set(CMAKE_AS_ARM_FLAGS "${AS_ARM_CPU} ${AS_ARM_BYTE_ORDER} ${AS_ARM_DEFINES} ${AS_ARM_OPTIONS_FLAGS} ${AS_ARM_FLAGS} ${AS_FLAGS_GLOBAL}")
cbuild_get_system_includes(CC_SYS_INC_PATHS_LIST CC_SYS_INC_PATHS)
set(CMAKE_C_FLAGS "${CC_CPU} ${CC_BYTE_ORDER} ${CC_DEFINES} ${CC_SECURE} ${CC_OPTIONS_FLAGS} ${CC_FLAGS} ${CC_FLAGS_GLOBAL} ${CC_SYS_INC_PATHS}")
set(CMAKE_C_LINK_FLAGS "${LD_CPU} ${_LS}\"${LD_SCRIPT}\" ${LD_SECURE} ${LD_FLAGS_GLOBAL} ${LD_OPTIONS_FLAGS} ${LD_FLAGS}")

# Local Flags

foreach(SRC ${AS_ARM_SRC_FILES})
  set_source_files_properties(${SRC} PROPERTIES LANGUAGE AS_ARM)
endforeach()

# Compilation Database

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_custom_target(database COMMAND ${CMAKE_COMMAND} -E copy_if_different "${INT_DIR}/compile_commands.json" "${OUT_DIR}")

# Setup Target

add_executable(${TARGET} ${AS_ARM_SRC_FILES} ${CC_SRC_FILES})
set_target_properties(${TARGET} PROPERTIES PREFIX "" SUFFIX ".axf" OUTPUT_NAME "The_Udder_Project")
set_target_properties(${TARGET} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${OUT_DIR} LINK_DEPENDS ${LD_SCRIPT})
target_include_directories(${TARGET} PUBLIC ${INC_PATHS})
