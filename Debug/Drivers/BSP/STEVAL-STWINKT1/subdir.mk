################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/BSP/STEVAL-STWINKT1/steval_stwinkt1_bus.c 

OBJS += \
./Drivers/BSP/STEVAL-STWINKT1/steval_stwinkt1_bus.o 

C_DEPS += \
./Drivers/BSP/STEVAL-STWINKT1/steval_stwinkt1_bus.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/STEVAL-STWINKT1/steval_stwinkt1_bus.o: ../Drivers/BSP/STEVAL-STWINKT1/steval_stwinkt1_bus.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32L4R9xx -DUSE_HAL_DRIVER -DDEBUG -c -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I../X-CUBE-MEMS1/Target -I../Drivers/BSP/STEVAL-STWINKT1 -I../Drivers/BSP/Components/iis2mdc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/BSP/STEVAL-STWINKT1/steval_stwinkt1_bus.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

