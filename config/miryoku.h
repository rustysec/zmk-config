#define             _BASE    0
#define             _NAV     1
#define             _MEDIA   2
#define             _NUM     3
#define             _SYM     4
#define             _FUN     5

#define VOL_U       &kp C_VOL_UP
#define VOL_D       &kp C_VOL_DN

#define BT0         &bt BT_SEL 0
#define BT1         &bt BT_SEL 1
#define BT2         &bt BT_SEL 2
#define BT3         &bt BT_SEL 3

#define SPC_SYM     &lt _SYM   SPC
#define ESC_MED     &lt _MEDIA ESC
#define BSPC_NAV    &lt _NAV   BSPC
#define RET_NUM     &lt _NUM   RET

#define A_GUI       &hm LGUI  A
#define R_ALT       &hm LALT  R
#define S_CTRL      &hm LCTRL S
#define T_SHFT      &hm LSHFT T

#define N_SHFT      &hm RSHFT N
#define E_CTRL      &hm RCTRL E
#define I_ALT       &hm RALT  I
#define O_GUI       &hm RGUI  O

#define MIRYOKU_BASE_TOP      ( &kp Q       &kp W       &kp F       &kp P       &kp G 				    &kp J       &kp L       &kp U       &kp Y       &kp SEMI )
#define MIRYOKU_BASE_MIDDLE   ( A_GUI       R_ALT       S_CTRL      T_SHFT      D_LOW 			        H_RSE       N_SHFT      E_CTRL      I_ALT       O_GUI )
#define MIRYOKU_BASE_BOTTOM   ( &kp Z       &kp X       &kp C       &kp V       &kp B                   &kp K       M_LOW       &kp COMMA   &kp DOT     &kp SLASH )
#define MIRYOKU_BASE_THUMBS   (                                     ESC_MED     BSPC_NAV  				SPC_SYM     RET_NUM )

#define MIRYOKU_NAV_TOP       ( &none       &none       &none       &none       &none 				    &none       &none       &none       &none       &none )
#define MIRYOKU_NAV_MIDDLE    ( &kp LGUI    &kp LALT    &kp LCTRL   &kp LSHFT   &none                   &kp LEFT    &kp DOWN    &kp UP      &kp RIGHT   &kp CAPS )
#define MIRYOKU_NAV_BOTTOM    ( &none       &none       &none       &none       &none                   &kp HOME    &kp PGDN    &kp PGUP    &kp END     &kp INSERT )
#define MIRYOKU_NAV_THUMBS    (                                     &none       &trans                  &kp RET     &kp BSPC )

#define MIRYOKU_MEDIA_TOP     ( &none       &none       &none       &none       &none 				    &none       &none       &none       &none       &none )
#define MIRYOKU_MEDIA_MIDDLE  ( &kp LGUI    &kp LALT    &kp LCTRL   &kp LSHFT   &none                   &none       &kp C_PREV  VOL_D       VOL_U       &kp C_NEXT )
#define MIRYOKU_MEDIA_BOTTOM  ( &none       &none       &none       &none       &none                   &none       BT0         BT1         BT2         BT3 )
#define MIRYOKU_MEDIA_THUMBS  (                                     &trans      &none                   &kp C_STOP  &kp C_PP )

#define MIRYOKU_NUM_TOP       ( &kp LBKT    &kp N7      &kp N8      &kp N9      &kp RBKT 				&none       &none       &none       &none       &none )
#define MIRYOKU_NUM_MIDDLE    ( &kp SEMI    &kp N4      &kp N5      &kp N6      &kp EQUAL               &none       &kp RSHFT   &kp RCTRL   &kp RALT    &kp RGUI )
#define MIRYOKU_NUM_BOTTOM    ( &kp GRAVE   &kp N1      &kp N2      &kp N3      &kp BSLH                &none       &none       &none       &none       &none )
#define MIRYOKU_NUM_THUMBS    (                                     &kp N0      &kp MINUS  				&none       &trans )

#define MIRYOKU_SYM_TOP       ( &kp LBRC    &kp AMPS    &kp STAR    &kp LPAR    &kp RBRC 				&none       &none       &none       &none       &none )
#define MIRYOKU_SYM_MIDDLE    ( &kp COLON   &kp DLLR    &kp PERCENT &kp CARET   &kp PLUS                &none       &kp RSHFT   &kp RCTRL   &kp RALT    &kp RGUI )
#define MIRYOKU_SYM_BOTTOM    ( &kp TILDE   &kp EXCL    &kp AT      &kp HASH    &kp PIPE                &none       &none       &none       &none       &none )
#define MIRYOKU_SYM_THUMBS    (                                     &kp RPAR    &kp UNDER               &trans      &none )

#define MIRYOKU_FUN_TOP       ( &kp F12     &kp F7      &kp F8      &kp F9      &kp PSCRN 				&none       &none       &none       &none       &none )
#define MIRYOKU_FUN_MIDDLE    ( &kp F11     &kp F4      &kp F5      &kp F6      &kp SLCK                &none       &kp RSHFT   &kp RCTRL   &kp RALT    &kp RGUI )
#define MIRYOKU_FUN_BOTTOM    ( &kp F10     &kp F1      &kp F2      &kp F3      &kp PAUSE_BREAK         &none       &none       &none       &none       &none )
#define MIRYOKU_FUN_THUMBS    (                                     &kp SPC     &kp TAB                 &trans      &trans )
