// Colemak

static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* 0: colemak */
    KEYMAP(\
        ESC,     1,    2,    3,      4,   5,     6,    7,    8,    9,    0, BSPC, \
        TAB,     Q,    W,    F,      P,   G,     J,    L,    U,    Y, SCLN, BSLS, \
	FN0,     A,    R,    S,      T,   D,     H,    N,    E,    I,    O, MINS, \
	LSFT,    Z,    X,    C,      V,   B,     K,    M, COMM,  DOT,   UP, SLSH, \
	LCTL, LGUI, LALT,  INS,    EQL, GRV,  LBRC, RBRC, QUOT, LEFT, DOWN, RGHT, \
    	                                       ENT, SPC),
    
    /* 1: fn keys */
    KEYMAP(\
	TRNS,   F1,   F2,         F3,    F4,   F5,    F6,   F7,   F8,    F9,  F10, DELETE, \
	TRNS, TRNS, TRNS,       TRNS,  TRNS, LBRC,  RBRC, TRNS, TRNS,  TRNS, TRNS, TRNS, \
	TRNS, TRNS, VOLU,       VOLD,  MUTE, QUOT,   GRV, TRNS, TRNS,  TRNS, TRNS, TRNS, \
	TRNS, TRNS, TRNS,       TRNS,  TRNS,  EQL,  MINS, TRNS, TRNS,  TRNS, PGUP, TRNS, \
	TRNS, TRNS, TRNS,       TRNS,  TRNS, TRNS,  TRNS, TRNS, TRNS,  HOME, PGDN,  END, \
		                       TRNS,  TRNS)
};

static const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1)
};
