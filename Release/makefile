################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
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
Miganie-led.lss \

FLASH_IMAGE += \
Miganie-led.hex \

EEPROM_IMAGE += \
Miganie-led.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: Miganie-led.elf secondary-outputs

# Tool invocations
Miganie-led.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Miganie-led.map -mmcu=atmega8 -o "Miganie-led.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Miganie-led.lss: Miganie-led.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Miganie-led.elf  >"Miganie-led.lss"
	@echo 'Finished building: $@'
	@echo ' '

Miganie-led.hex: Miganie-led.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Miganie-led.elf  "Miganie-led.hex"
	@echo 'Finished building: $@'
	@echo ' '

Miganie-led.eep: Miganie-led.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex Miganie-led.elf  "Miganie-led.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Miganie-led.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega8 Miganie-led.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Miganie-led.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
