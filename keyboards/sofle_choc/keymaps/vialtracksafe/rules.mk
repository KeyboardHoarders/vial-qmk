OLED_ENABLE = yes
ENCODER_ENABLE = yes
CONSOLE_ENABLE = no
EXTRAKEY_ENABLE = yes
VIA_ENABLE = yes
VIAL_ENABLE = yes
ENCODER_MAP_ENABLE = yes
LTO_ENABLE = no
BACKLIGHT_ENABLE = no
RGBLIGHT_ENABLE = no
VIALRGB_ENABLE = yes
QMK_SETTINGS = yes
MOUSEKEY_ENABLE = yes
COMBO_ENABLE = yes
KEY_OVERRIDE_ENABLE = yes
RGB_MATRIX_ENABLE = yes

DYNAMIC_MACRO_ENABLE = yes

POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = azoteq_iqs5xx

# Interim trackpad-noise mitigation (see config.h): per-key defer debounce
# instead of the default global-defer. Both are noise-resistant, but a
# per-key timer keeps a glitch on the 'O' key's row from also delaying
# registration of legitimately pressed neighboring keys.
DEBOUNCE_TYPE = sym_defer_pk
