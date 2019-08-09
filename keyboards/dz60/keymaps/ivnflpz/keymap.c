#include "keymap.h"

  /* Layout
   * ,-----------------------------------------------------------------------------------------.
   * |     |     |     |     |     |     |     |     |     |     |    |     |     |            |
   * |-----------------------------------------------------------------------------------------+
   * |        |     |     |     |     |     |     |     |     |     |     |      |      |      |
   * |-----------------------------------------------------------------------------------------+
   * |         |     |     |     |     |     |     |     |     |     |     |     |             |
   * |-----------------------------------------------------------------------------------------+
   * |           |     |     |     |     |     |     |     |     |     |     |     |     |     |
   * |-----------------------------------------------------------------------------------------+
   * |      |       |       |                                         |      |     |     |     |
   * `-----------------------------------------------------------------------------------------'
   */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   /* Windows QWERTY
   * ,-----------------------------------------------------------------------------------------.
   * | ` ~ |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |   Bkspc   |
   * |-----------------------------------------------------------------------------------------+
   * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \   |
   * |-----------------------------------------------------------------------------------------+
   * |   FN    |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
   * |-----------------------------------------------------------------------------------------+
   * | Shift     |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  | DEL |Shift|PSCRN|
   * |-----------------------------------------------------------------------------------------+
   * | Ctrl |  GUI  |  Alt  |      Space   | Mouse   | Space    | CAPS |  RGB  |  APP  | RCtrl |
   * `-----------------------------------------------------------------------------------------'
   */
  [_WINDOWS] = LAYOUT_60_ansi_split_space_split_rshift(
    KC_GESC,  KC_1,     KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,
    KC_TAB,   KC_Q,     KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
    MO(_FN),  KC_A,     KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,     KC_L,     KC_SCLN,  KC_QUOT,      KC_ENT,
    KC_LSPO,  KC_Z,     KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,  KC_DOT,   KC_SLSH,  KC_DEL,   KC_RSFT,     KC_PSCR,
    KC_LCTL,  KC_LGUI,  KC_LALT,        KC_SPC, MO(_MOUSE), KC_SPC                         ,MO(_NAV),  MO(_RGB), KC_APP,   KC_RCTL
  ),

  /* MAC QWERTY
   * ,-----------------------------------------------------------------------------------------.
   * | ` ~ |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |   Bkspc   |
   * |-----------------------------------------------------------------------------------------+
   * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \   |
   * |-----------------------------------------------------------------------------------------+
   * |   FN    |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
   * |-----------------------------------------------------------------------------------------+
   * | Shift     |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  | DEL |Shift|PSCRN|
   * |-----------------------------------------------------------------------------------------+
   * | CMD |  Alt |  LCtrl  |      Space   | Mouse   | Space    | CAPS |  RGB  |  APP  | RCtrl |
   * `-----------------------------------------------------------------------------------------'
   */
  [_MAC] = LAYOUT_60_ansi_split_space_split_rshift(
    KC_GESC,  KC_1,     KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,
    KC_TAB,   KC_Q,     KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
    MO(_FN),  KC_A,     KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,     KC_L,     KC_SCLN,  KC_QUOT,      KC_ENT,
    KC_LSPO,  KC_Z,     KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,  KC_DOT,   KC_SLSH,  KC_DEL,   KC_RSFT,     KC_PSCR,
    KC_LCMD,  KC_LALT,  KC_LCTL,        KC_SPC, MO(_MOUSE), KC_SPC                         ,MO(_NAV),  MO(_RGB), KC_APP,   KC_RCTL
  ),

  /* FN Layer
   * ,-----------------------------------------------------------------------------------------.
   * | Esc |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 | F10 | F11 | F12 |    DEL    |
   * |-----------------------------------------------------------------------------------------+
   * | Tab    | DEL |     |HL_WD|HL_NWD|     |     |     |HOME |     |     |      |      |RESET|
   * |-----------------------------------------------------------------------------------------+
   * | Caps   |VS_TGL|     |DL_LN|PGDN |     |LEFT |DOWN | UP  |RIGHT| INS |     |             |
   * |-----------------------------------------------------------------------------------------+
   * | Shift    |VS_CMD|CT_LN|CP_LN|PT_LN|PGUP |END  |     |     |     |     |          |
   * |-----------------------------------------------------------------------------------------+
   * | Ctrl |  Cmd  |  Alt  |                                         |      |     |     |     |
   * `-----------------------------------------------------------------------------------------'
   */
  [_FN] = LAYOUT_60_ansi_split_space_split_rshift(
    KC_GRV,  KC_F1,  KC_F2,  KC_F3,  KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,  KC_DEL,
    KC_TRNS, ______, ______, HL_WD,  HL_NWD,   ______,   ______,   ______,   KC_HOME,  ______,   ______,  ______,   ______,  RESET,
    KC_TRNS, VS_TGL, ______, DLT_LN, KC_PGDN,  ______,   KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_INS,   ______,      ______,
    KC_TRNS, VS_CMD, CT_LN,  CP_LN,  PT_LN,    KC_PGUP,  KC_END,   ______,   ______,   ______,   ______,  ______,______,______,
    KC_TRNS, KC_TRNS, KC_TRNS,                           ______, KC_TRNS,  ______                     ,WINDOWS_LY,   MAC_LY , ______,   KC_TRNS
  ),

  /* MOUSE Layer
   * ,-----------------------------------------------------------------------------------------.
   * | Esc |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 | F10 | F11 | F12 |    DEL    |
   * |-----------------------------------------------------------------------------------------+
   * | Tab    |     |     |     |RESET|     |     |     |HOME |     |     |      |      |      |
   * |-----------------------------------------------------------------------------------------+
   * | Caps    |     |     |     |PGDN |     |LEFT |DOWN | UP  |RIGHT| INS |     |             |
   * |-----------------------------------------------------------------------------------------+
   * | Shift     |     |     |     |     |PGUP |END  |     |     |     |     |     |     |     |
   * |-----------------------------------------------------------------------------------------+
   * | Ctrl |  Cmd  |  Alt  |                                         |      |     |     |     |
   * `-----------------------------------------------------------------------------------------'
   */
  [_MOUSE] = LAYOUT_60_ansi_split_space_split_rshift(
    KC_PWR,   KC_ACL0,  KC_ACL1,  KC_ACL2,  ______,  ______,  ______,  ______,  ______,  ______,  ______,   ______,   ______,  KC_SLEP,
    KC_TRNS,  ______,   KC_MS_U,  ______,   ______,  ______,  ______,  ______,  ______,  ______,  ______,   ______,   ______,  ______,
    KC_TRNS,  KC_MS_L,  KC_MS_D,  KC_MS_R,  ______,  ______,  ______,  ______,  ______,  ______,  ______,   ______,      KC_WAKE,
    KC_TRNS,  ______,   ______,   ______,   ______,   ______,  ______,  ______,  KC_BTN1, KC_BTN3, KC_BTN2,  ______,______,______,
    KC_TRNS,  KC_TRNS,  KC_TRNS,             ______, KC_TRNS,  ______                                 ,______,   ______ , ______,   KC_TRNS
  ),

  /* Layout
   * ,-----------------------------------------------------------------------------------------.
   * |     |     |     |     |     |     |     |     |     |     |    |     |     |   Close    |
   * |-----------------------------------------------------------------------------------------+
   * |        |     |     |     |     |     |     |     |     |     |     |      |      |      |
   * |-----------------------------------------------------------------------------------------+
   * |         |     |     |     |     |     |     |     |     |     |     |     |             |
   * |-----------------------------------------------------------------------------------------+
   * |           |     |     |     |     |     |     |     |     |     |     |     |W_UP |     |
   * |-----------------------------------------------------------------------------------------+
   * |      |       |       |                                     |       |W_LFT |W_DWN |W_RGT |
   * `-----------------------------------------------------------------------------------------'
   */
  [_NAV] = LAYOUT_60_ansi_split_space_split_rshift(
    TSK_MGR,   ______,  ______,  ______,  ______,  ______,  ______,  ______,  ______,  ______,  ______,   ______,   ______,  W_CLOSE,
    KC_TRNS,  ______,   ______,  ______,   ______,  ______,  ______,  ______,  ______,  ______,  ______,   ______,   ______,  ______,
    KC_TRNS,  ______,  ______,  ______,  ______,  ______,  ______,  ______,  ______,  ______,  ______,   ______,      ______,
    KC_TRNS,  ______,   ______,   ______,   ______,   ______,  ______,  ______,  ______, ______, ______,  ______, W_UP, ______,
    KC_TRNS,  KC_TRNS,  KC_TRNS,             ______, KC_TRNS,  ______                                 ,KC_TRNS,   W_LEFT , W_DOWN,   W_RIGHT
  ),

  /* RGB Layer
   * ,-----------------------------------------------------------------------------------------.
   * | Esc |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 | F10 | F11 | F12 |    DEL    |
   * |-----------------------------------------------------------------------------------------+
   * | Tab    |     |     |     |RESET|     |     |     |HOME |     |     |      |      |      |
   * |-----------------------------------------------------------------------------------------+
   * | Caps    |     |     |     |PGDN |     |LEFT |DOWN | UP  |RIGHT| INS |     |             |
   * |-----------------------------------------------------------------------------------------+
   * | Shift     |     |     |     |     |PGUP |END  |     |     |     |     |     |     |     |
   * |-----------------------------------------------------------------------------------------+
   * | Ctrl |  Cmd  |  Alt  |                                         |      |     |     |     |
   * `-----------------------------------------------------------------------------------------'
   */
  [_RGB] = LAYOUT_60_ansi_split_space_split_rshift(
    ______,   ______,  ______,  ______,  ______,  ______,  ______,  ______,  ______,  ______,  ______,   ______,   ______,  ______,
    KC_TRNS,  RGB_TOG,   RGB_MOD,  RGB_RMOD,   RGB_HUI,  RGB_HUD,  RGB_VAI,  RGB_VAD,  ______,  ______,  ______,   ______,   ______,  ______,
    KC_TRNS,  ______,  ______,  ______,  ______,  ______,  ______,  ______,  ______,  ______,  ______,   ______,      ______,
    KC_TRNS,  ______,   ______,   ______,   ______,   ______,  ______,  ______,  ______, ______, ______,  ______,______,______,
    KC_TRNS,  KC_TRNS,  KC_TRNS,             ______, KC_TRNS,  ______                                 ,______,   ______ , ______,   KC_TRNS
  )
};

void highlight_line(bool includeWhitespace) {
  SEND_STRING(SS_TAP(X_END) SS_DOWN(X_LSHIFT) SS_TAP(X_HOME));
  if (includeWhitespace) {
    SEND_STRING(SS_TAP(X_HOME));
  }
  SEND_STRING(SS_UP(X_LSHIFT));
}

void window_nav(const char* dir) {
    if (biton32(default_layer_state) == _WINDOWS) {
        SEND_STRING(SS_DOWN(X_LGUI));
        send_string_P(dir);
        SEND_STRING(SS_UP(X_LGUI));
    } else if (biton32(default_layer_state) == _MAC) {
        SEND_STRING(SS_DOWN(X_LGUI) SS_DOWN(X_LALT));
        send_string_P(dir);
        SEND_STRING(SS_UP(X_LGUI) SS_UP(X_LALT));
    }
}

void process_os_cmd(const char* windows_cmd, const char* mac_cmd) {
    if (biton32(default_layer_state) == _WINDOWS) {
        send_string_P(windows_cmd);
    } else if (biton32(default_layer_state) == _MAC) {
        send_string_P(mac_cmd);
    }
}

void close_window() {
    PROCESS_OS_CMD(SS_LALT(SS_TAP(X_F4)), SS_LCMD(SS_TAP(X_W)));
}

void open_task_manager() {
    PROCESS_OS_CMD(SS_LCTRL(SS_LSFT(SS_TAP(X_ESCAPE))), SS_LCMD(SS_LALT(SS_TAP(X_ESCAPE))));
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    switch (keycode) {
        case DLT_LN:
            highlight_line(true);
            SEND_STRING(SS_TAP(X_BSPACE) SS_TAP(X_BSPACE));
            return false;
        case VS_CMD:
            SEND_STRING(SS_DOWN(X_LSHIFT) SS_LCTRL("`") SS_UP(X_LSHIFT));
            return false;
        case HL_WD:
            SEND_STRING(SS_LCTRL(SS_TAP(X_LEFT)));
            SEND_STRING(SS_DOWN(X_LSHIFT) SS_LCTRL(SS_TAP(X_RIGHT)) SS_UP(X_LSHIFT));
            return false;
        case HL_NWD:
            SEND_STRING(SS_DOWN(X_LSHIFT) SS_LCTRL(SS_TAP(X_RIGHT)) SS_UP(X_LSHIFT));
            return false;
        case CP_LN:
            highlight_line(false);
            SEND_STRING(SS_LCTRL("c") SS_TAP(X_END));
            return false;
        case CT_LN:
            highlight_line(false);
            SEND_STRING(SS_LCTRL("x"));
            return false;
        case PT_LN:
            SEND_STRING(SS_LCTRL("v"));
            return false;
        case WINDOWS_LY:
            set_single_persistent_default_layer(_WINDOWS);
            RGB_STATIC_MODE;
            RGB_BL_LIGHT;
            return false;
        case MAC_LY:
            set_single_persistent_default_layer(_MAC);
            RGB_STATIC_MODE;
            RGB_FL_LIGHT;
            return false;
        case W_LEFT:
            WINDOW_NAV(X_LEFT);
            return false;
        case W_RIGHT:
            WINDOW_NAV(X_RIGHT);
            return false;
        case W_UP:
            WINDOW_NAV(X_UP);
            return false;
        case W_DOWN:
            WINDOW_NAV(X_DOWN);
            return false;
        case W_CLOSE:
            close_window();
            return false;
        case TSK_MGR:
            open_task_manager();
            return false;
    }
  }
  return true;
};
