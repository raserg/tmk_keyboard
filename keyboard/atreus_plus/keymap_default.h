// Phantom ANSI

static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* 0: qwerty */
    KEYMAP(\
        ESC,     1,    2,    3,      4,   5,     6,    7,    8,    9,    0, BSPC, \
        TAB,     Q,    W,    E,      R,   T,     Y,    U,    I,    O,    P, BSLS, \
	FN0,     A,    S,    D,      F,   G,     H,    J,    K,    L, SCLN, MINS, \
	LSFT,    Z,    X,    C,      V,   B,     N,    M, COMM,  DOT,   UP, SLSH, \
	LCTL, LGUI, LALT,  INS,    EQL, GRV,  LBRC, RBRC, QUOT, LEFT, DOWN, RGHT, \
    	                                       ENT, SPC),
    
    /* 1: fn keys */
    KEYMAP(\
	TRNS,   F1,   F2,         F3,    F4,   F5,    F6,   F7,   F8,    F9,  F10, DELETE, \
	TRNS, TRNS, TRNS,       TRNS,  TRNS, TRNS,  TRNS, TRNS, TRNS,  TRNS, TRNS, TRNS, \
	TRNS, TRNS, VOLU,       VOLD,  MUTE, TRNS,  TRNS, TRNS, TRNS,  TRNS, TRNS, TRNS, \
	TRNS, TRNS, TRNS,       TRNS,  TRNS, TRNS,  TRNS, TRNS, TRNS,  TRNS, PGUP, TRNS, \
	TRNS, TRNS, TRNS,       TRNS,  TRNS, TRNS,  TRNS, TRNS, TRNS,  HOME, PGDN, END, \
		                       TRNS,  TRNS)
};

static const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1)
};
