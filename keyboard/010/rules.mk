# MCU name
MCU = RP2040

# Bootloader selection
BOOTLOADER = rp2040

# Build Options
#   change yes to no to disable
#
# BOOTMAGIC_ENABLE = lite      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = yes        # Console for debug
COMMAND_ENABLE = no        # Commands for debug and configuration
NKRO_ENABLE = no            # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
BLUETOOTH_ENABLE = no       # Enable Bluetooth
AUDIO_ENABLE = no           # Audio output

VIA_ENABLE = yes

WS2812_DRIVER = vendor
SERIAL_DRIVER = vendor

# BOARD = GENERIC_RP_RP2040



# MCU_FAMILY = PICO
# MCU_SERIES = RP2040
# MCU = cortex-m0plus
