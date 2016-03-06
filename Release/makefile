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
NAKURWIAM_LEDEM.lss \

FLASH_IMAGE += \
NAKURWIAM_LEDEM.hex \

EEPROM_IMAGE += \
NAKURWIAM_LEDEM.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: NAKURWIAM_LEDEM.elf secondary-outputs

# Tool invocations
NAKURWIAM_LEDEM.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,NAKURWIAM_LEDEM.map -mmcu=atmega8 -o "NAKURWIAM_LEDEM.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

NAKURWIAM_LEDEM.lss: NAKURWIAM_LEDEM.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S NAKURWIAM_LEDEM.elf  >"NAKURWIAM_LEDEM.lss"
	@echo 'Finished building: $@'
	@echo ' '

NAKURWIAM_LEDEM.hex: NAKURWIAM_LEDEM.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex NAKURWIAM_LEDEM.elf  "NAKURWIAM_LEDEM.hex"
	@echo 'Finished building: $@'
	@echo ' '

NAKURWIAM_LEDEM.eep: NAKURWIAM_LEDEM.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex NAKURWIAM_LEDEM.elf  "NAKURWIAM_LEDEM.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: NAKURWIAM_LEDEM.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega8 NAKURWIAM_LEDEM.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) NAKURWIAM_LEDEM.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
