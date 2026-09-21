VIA_ENABLE = yes
VIAL_ENABLE = yes
MOUSEKEY_ENABLE = no
EXTRAKEY_ENABLE = yes
COMBO_ENABLE = yes
GRAVE_ESC_ENABLE = no
MAGIC_ENABLE = no

COMMAND_ENABLE = no
CONSOLE_ENABLE = no

LTO_ENABLE = yes

KEY_OVERRIDE_ENABLE = yes

TAP_DANCE_ENABLE = yes
QMK_SETTINGS = yes

LAYER_LOCK_ENABLE = yes
REPEAT_KEY_ENABLE = yes

# Custom master/slave OLED content (current layer, lock keys, OS mode, RGB status)
ifeq ($(strip $(OLED_ENABLE)), yes)
    SRC += oled_display.c
endif
