################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include 03-HAL/07-Ultrasonic/subdir.mk
-include 03-HAL/06-LM35_Temp_Sensor/subdir.mk
-include 03-HAL/05-LCD/subdir.mk
-include 03-HAL/04-Keypad/subdir.mk
-include 03-HAL/03-EEPROM_External/subdir.mk
-include 03-HAL/02-DC\ Motor/subdir.mk
-include 03-HAL/01-ADC/subdir.mk
-include 02-MCAL/06-ICU/subdir.mk
-include 02-MCAL/05-UART/subdir.mk
-include 02-MCAL/04-TMR0/subdir.mk
-include 02-MCAL/03-I2C/subdir.mk
-include 02-MCAL/02-SPI/subdir.mk
-include 02-MCAL/01-GPIO/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
ATmega16\ _Drivers.lss \

SIZEDUMMY += \
sizedummy \


# All Target
all: ATmega16\ _Drivers.elf secondary-outputs

# Tool invocations
ATmega16\ _Drivers.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,ATmega16 _Drivers.map -mmcu=atmega16 -o "ATmega16 _Drivers.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

ATmega16\ _Drivers.lss: ATmega16\ _Drivers.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S ATmega16 _Drivers.elf  >"ATmega16 _Drivers.lss"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: ATmega16\ _Drivers.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega16 ATmega16 _Drivers.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) "ATmega16 _Drivers.elf"
	-@echo ' '

secondary-outputs: $(LSS) $(SIZEDUMMY)

.PHONY: all clean dependents

-include ../makefile.targets
