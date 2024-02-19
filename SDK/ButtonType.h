//
// Created by koelion on 05.02.24.
//

#ifndef APEX_BUTTONTYPE_H
#define APEX_BUTTONTYPE_H

namespace SDK
{
    enum class ButtonType : int
    {

        KB_FIRST = 0,

        KB_NONE = KB_FIRST,
        KB_0,
        KB_1,
        KB_2,
        KB_3,
        KB_4,
        KB_5,
        KB_6,
        KB_7,
        KB_8,
        KB_9,
        KB_A,
        KB_B,
        KB_C,
        KB_D,
        KB_E,
        KB_F,
        KB_G,
        KB_H,
        KB_I,
        KB_J,
        KB_K,
        KB_L,
        KB_M,
        KB_N,
        KB_O,
        KB_P,
        KB_Q,
        KB_R,
        KB_S,
        KB_T,
        KB_U,
        KB_V,
        KB_W,
        KB_X,
        KB_Y,
        KB_Z,
        KB_PAD_0,
        KB_PAD_1,
        KB_PAD_2,
        KB_PAD_3,
        KB_PAD_4,
        KB_PAD_5,
        KB_PAD_6,
        KB_PAD_7,
        KB_PAD_8,
        KB_PAD_9,
        KB_PAD_DIVIDE,
        KB_PAD_MULTIPLY,
        KB_PAD_MINUS,
        KB_PAD_PLUS,
        KB_PAD_ENTER,
        KB_PAD_DECIMAL,
        KB_LBRACKET,
        KB_RBRACKET,
        KB_SEMICOLON,
        KB_APOSTROPHE,
        KB_BACKQUOTE,
        KB_COMMA,
        KB_PERIOD,
        KB_SLASH,
        KB_BACKSLASH,
        KB_MINUS,
        KB_EQUAL,
        KB_ENTER,
        KB_SPACE,
        KB_BACKSPACE,
        KB_TAB,
        KB_CAPSLOCK,
        KB_NUMLOCK,
        KB_ESCAPE,
        KB_SCROLLLOCK,
        KB_INSERT,
        KB_DELETE,
        KB_HOME,
        KB_END,
        KB_PAGEUP,
        KB_PAGEDOWN,
        KB_BREAKK,
        KB_LSHIFT,
        KB_RSHIFT,
        KB_LALT,
        KB_RALT,
        KB_LCONTROL,
        KB_RCONTROL,
        KB_LWIN,
        KB_RWIN,
        KB_APP,
        KB_UP,
        KB_LEFT,
        KB_DOWN,
        KB_RIGHT,
        KB_F1,
        KB_F2,
        KB_F3,
        KB_F4,
        KB_F5,
        KB_F6,
        KB_F7,
        KB_F8,
        KB_F9,
        KB_F10,
        KB_F11,
        KB_F12,
        KB_CAPSLOCKTOGGLE,
        KB_NUMLOCKTOGGLE,
        KB_SCROLLLOCKTOGGLE,

        KB_LAST = KB_SCROLLLOCKTOGGLE,
        KB_COUNT = KB_LAST - KB_FIRST + 1,

        // Mouse
        MOUSE_FIRST = KB_LAST + 1,

        MOUSE_LEFT = MOUSE_FIRST,
        MOUSE_RIGHT,
        MOUSE_MIDDLE,
        MOUSE_4,
        MOUSE_5,
        MOUSE_WHEEL_UP,		// A fake button which is 'pressed' and 'released' when the wheel is moved up
        MOUSE_WHEEL_DOWN,	// A fake button which is 'pressed' and 'released' when the wheel is moved down

        MOUSE_LAST = MOUSE_WHEEL_DOWN,
        MOUSE_COUNT = MOUSE_LAST - MOUSE_FIRST + 1,
    };

}

#endif //APEX_BUTTONTYPE_H
