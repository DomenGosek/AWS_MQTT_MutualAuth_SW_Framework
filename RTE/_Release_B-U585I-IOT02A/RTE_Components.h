/*
 * CSOLUTION generated file: DO NOT EDIT!
 * Generated by: csolution version 2.2.0
 *
 * Project: 'Demo.Release+B-U585I-IOT02A' 
 * Target:  'Release+B-U585I-IOT02A' 
 */

#ifndef RTE_COMPONENTS_H
#define RTE_COMPONENTS_H


/*
 * Define the Device Header File: 
 */
#define CMSIS_device_header "stm32u5xx.h"

/* ARM::CMSIS-Compiler:I/O:STDERR&User@1.0.0 */
#define RTE_Compiler_IO_STDERR          /* Compiler I/O: STDERR */
        #define RTE_Compiler_IO_STDERR_User     /* Compiler I/O: STDERR User */
/* ARM::CMSIS-Compiler:I/O:STDIN&User@1.0.0 */
#define RTE_Compiler_IO_STDIN           /* Compiler I/O: STDIN */
        #define RTE_Compiler_IO_STDIN_User      /* Compiler I/O: STDIN User */
/* ARM::CMSIS-Compiler:I/O:STDOUT&User@1.0.0 */
#define RTE_Compiler_IO_STDOUT          /* Compiler I/O: STDOUT */
        #define RTE_Compiler_IO_STDOUT_User     /* Compiler I/O: STDOUT User */
/* ARM::CMSIS-View:Event Recorder&DAP@1.5.2 */
#define RTE_CMSIS_View_EventRecorder
        #define RTE_CMSIS_View_EventRecorder_DAP
/* ARM::CMSIS:RTOS2:FreeRTOS&Cortex-M@10.5.1 */
#define RTE_CMSIS_RTOS2                 /* CMSIS-RTOS2 */
        #define RTE_CMSIS_RTOS2_FreeRTOS        /* CMSIS-RTOS2 FreeRTOS */
/* ARM::RTOS&FreeRTOS:Config&CMSIS RTOS2@10.5.1 */
#define RTE_RTOS_FreeRTOS_CONFIG_RTOS2  /* RTOS FreeRTOS Config for CMSIS RTOS2 API */
/* ARM::RTOS&FreeRTOS:Core&Cortex-M@10.5.1 */
#define RTE_RTOS_FreeRTOS_CORE          /* RTOS FreeRTOS Core */
/* ARM::RTOS&FreeRTOS:Event Groups@10.5.1 */
#define RTE_RTOS_FreeRTOS_EVENTGROUPS   /* RTOS FreeRTOS Event Groups */
/* ARM::RTOS&FreeRTOS:Heap&Heap_5@10.5.1 */
#define RTE_RTOS_FreeRTOS_HEAP_5        /* RTOS FreeRTOS Heap 5 */
/* ARM::RTOS&FreeRTOS:Stream Buffer@10.5.1 */
#define RTE_RTOS_FreeRTOS_STREAM_BUFFER /* RTOS FreeRTOS Stream Buffers */
/* ARM::RTOS&FreeRTOS:Timers@10.5.1 */
#define RTE_RTOS_FreeRTOS_TIMERS        /* RTOS FreeRTOS Timers */
/* ARM::Security:mbed TLS@2.24.0 */
#define RTE_Security_mbedTLS            /* Security mbed TLS */
/* Keil::CMSIS Driver:SPI@1.1.0 */
#define RTE_Drivers_SPI1                /* Driver SPI1 */
        #define RTE_Drivers_SPI2                /* Driver SPI2 */
        #define RTE_Drivers_SPI3                /* Driver SPI3 */
/* Keil::CMSIS Driver:USART@1.2.0 */
#define RTE_Drivers_USART1              /* Driver USART1 */
        #define RTE_Drivers_USART2              /* Driver USART2 */
        #define RTE_Drivers_USART3              /* Driver USART3 */
        #define RTE_Drivers_USART4              /* Driver USART4 */
        #define RTE_Drivers_USART5              /* Driver USART5 */
        #define RTE_Drivers_USART6              /* Driver USART6 */
/* Keil::CMSIS Driver:USB Device:Full-speed@1.0.0 */
#define RTE_Drivers_USBD0               /* Driver USBD0 */
/* Keil::CMSIS Driver:VIO:Board&B-U585I-IOT02A@2.0.0 */
#define RTE_VIO_BOARD
        #define RTE_VIO_B_U585I_IOT02A
/* Keil::CMSIS Driver:WiFi:EMW3080&SPI@1.0.0 */
#define RTE_Drivers_WiFi_EMW3080_SPI_B_U585I_IOT02A
/* Keil::Device:STM32Cube Framework:STM32CubeMX@2.0.0 */
#define RTE_DEVICE_FRAMEWORK_CUBE_MX
/* Keil::Device:STM32Cube HAL:ADC@1.2.0 */
#define RTE_DEVICE_HAL_ADC
/* Keil::Device:STM32Cube HAL:Common@1.2.0 */
#define RTE_DEVICE_HAL_COMMON
/* Keil::Device:STM32Cube HAL:Cortex@1.2.0 */
#define RTE_DEVICE_HAL_CORTEX
/* Keil::Device:STM32Cube HAL:DMA@1.2.0 */
#define RTE_DEVICE_HAL_DMA
/* Keil::Device:STM32Cube HAL:EXTI@1.2.0 */
#define RTE_DEVICE_HAL_EXTI
/* Keil::Device:STM32Cube HAL:Flash@1.2.0 */
#define RTE_DEVICE_HAL_FLASH
/* Keil::Device:STM32Cube HAL:GPIO@1.2.0 */
#define RTE_DEVICE_HAL_GPIO
/* Keil::Device:STM32Cube HAL:HCD@1.2.0 */
#define RTE_DEVICE_HAL_HCD
/* Keil::Device:STM32Cube HAL:I2C@1.2.0 */
#define RTE_DEVICE_HAL_I2C
/* Keil::Device:STM32Cube HAL:ICACHE@1.2.0 */
#define RTE_DEVICE_HAL_ICACHE
/* Keil::Device:STM32Cube HAL:IRDA@1.2.0 */
#define RTE_DEVICE_HAL_IRDA
/* Keil::Device:STM32Cube HAL:MDF@1.2.0 */
#define RTE_DEVICE_HAL_MDF
/* Keil::Device:STM32Cube HAL:OSPI@1.2.0 */
#define RTE_DEVICE_HAL_OSPI
/* Keil::Device:STM32Cube HAL:PCD@1.2.0 */
#define RTE_DEVICE_HAL_PCD
/* Keil::Device:STM32Cube HAL:PWR@1.2.0 */
#define RTE_DEVICE_HAL_PWR
/* Keil::Device:STM32Cube HAL:RCC@1.2.0 */
#define RTE_DEVICE_HAL_RCC
/* Keil::Device:STM32Cube HAL:RNG@1.2.0 */
#define RTE_DEVICE_HAL_RNG
/* Keil::Device:STM32Cube HAL:RTC@1.2.0 */
#define RTE_DEVICE_HAL_RTC
/* Keil::Device:STM32Cube HAL:SAI@1.2.0 */
#define RTE_DEVICE_HAL_SAI
/* Keil::Device:STM32Cube HAL:SPI@1.2.0 */
#define RTE_DEVICE_HAL_SPI
/* Keil::Device:STM32Cube HAL:Smartcard@1.2.0 */
#define RTE_DEVICE_HAL_SMARTCARD
/* Keil::Device:STM32Cube HAL:UART@1.2.0 */
#define RTE_DEVICE_HAL_UART
/* Keil::Device:STM32Cube HAL:USART@1.2.0 */
#define RTE_DEVICE_HAL_USART
/* Keil::Device:STM32Cube LL:Common@1.2.0 */
#define RTE_DEVICE_LL_COMMON
/* Keil::Device:STM32Cube LL:DLYB@1.2.0 */
#define RTE_DEVICE_LL_DLYB
/* Keil::Device:STM32Cube LL:GPIO@1.2.0 */
#define RTE_DEVICE_LL_GPIO
/* Keil::Device:STM32Cube LL:PWR@1.2.0 */
#define RTE_DEVICE_LL_PWR
/* Keil::Device:STM32Cube LL:RCC@1.2.0 */
#define RTE_DEVICE_LL_RCC
/* Keil::Device:STM32Cube LL:UCPD@1.2.0 */
#define RTE_DEVICE_LL_UCPD
/* Keil::Device:STM32Cube LL:UTILS@1.2.0 */
#define RTE_DEVICE_LL_UTILS
/* Keil::Device:Startup&Source C@1.0.0 */
#define RTE_DEVICE_STARTUP_STM32U5XX    /* Device Startup for STM32U5 */
/* MDK-Packs::IoT Utility:Socket:WiFi@1.0.0 */
#define RTE_IoT_Socket                  /* IoT Socket */
        #define RTE_IoT_Socket_WiFi             /* IoT Socket: WiFi */


#endif /* RTE_COMPONENTS_H */
