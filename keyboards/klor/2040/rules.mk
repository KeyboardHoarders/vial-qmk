# MCU/BOOTLOADER are inherited from the parent (atmega32u4 / Pro Micro footprint)
# and swapped to RP2040 by the converter below. Setting MCU = RP2040 here breaks
# the converter ("Converting to '...' not possible!").

# Ignore some warnings during the build, likely to be fixed before RP2040 PR is merged
ALLOW_WARNINGS = yes

# LTO must be disabled for RP2040 builds
LTO_ENABLE = no

# PIO serial/WS2812 drivers must be used on RP2040
SERIAL_DRIVER = vendor
WS2812_DRIVER = vendor

# CONVERTER - if you use a listed MCU comment the first line and uncomment the appropiate line
CONVERT_TO = sparkfun_pm2040
#CONVERT_TO = kb2040
#CONVERT_TO = blok
#CONVERT_TO = elite_pi

# AUDIO 
AUDIO_ENABLE = yes
AUDIO_DRIVER = pwm_hardware
