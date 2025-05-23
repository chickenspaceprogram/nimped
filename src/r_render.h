// SPDX-License-Identifier: GPL-3.0-or-later

typedef struct r_attr_t
{
	u8 fg, bg;
} r_attr_t;

i32 r_init(void);
void r_quit(bool clearscr);
void r_fillch(e_char_t ch, u32 x, u32 y, u32 w, u32 h);
void r_fillattr(r_attr_t a, u32 x, u32 y, u32 w, u32 h);
void r_fill(e_char_t ch, r_attr_t a, u32 x, u32 y, u32 w, u32 h);
void r_putch(e_char_t ch, u32 x, u32 y);
void r_putattr(r_attr_t a, u32 x, u32 y);
void r_put(e_char_t ch, r_attr_t a, u32 x, u32 y);
e_char_t r_getch(u32 x, u32 y);
r_attr_t r_getattr(u32 x, u32 y);
void r_get(OUT e_char_t *ch, OUT r_attr_t *a, u32 x, u32 y);
void r_present(void);
void r_winsize(OUT u32 *w, OUT u32 *h);
void r_setbar(e_char_t const *s, usize n);
void r_setbarstr(char const *s);
