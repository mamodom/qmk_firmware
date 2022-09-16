// Copyright 2022 mamodom (@mamodom)
// SPDX-License-Identifier: GPL-2.0-or-later

#define LAYOUT_fullsize_ansi( \
    kc_esc,           kc_f1,   kc_f2,   kc_f3,   kc_f4,   kc_f5,   kc_f6,   kc_f7,   kc_f8,   kc_f9,   kc_f10,  kc_f11,  kc_f12,     kc_pscr, kc_scrl, kc_paus, \
\
    kc_grv,  kc_1,    kc_2,    kc_3,    kc_4,    kc_5,    kc_6,    kc_7,    kc_8,    kc_9,    kc_0,    kc_mins, kc_eql,  kc_bspc,    kc_ins,  kc_home, kc_pgup,    kc_num,  kc_psls, kc_past, kc_pmns, \
    kc_tab,  kc_q,    kc_w,    kc_e,    kc_r,    kc_t,    kc_y,    kc_u,    kc_i,    kc_o,    kc_p,    kc_lbrc, kc_rbrc, kc_bsls,    kc_del,  kc_end,  kc_pgdn,    kc_p7,   kc_p8,   kc_p9,   kc_ppls, \
    kc_caps, kc_a,    kc_s,    kc_d,    kc_f,    kc_g,    kc_h,    kc_j,    kc_k,    kc_l,    kc_scln, kc_quot,          kc_ent,                                   kc_p4,   kc_p5,   kc_p6, \
    kc_lsft,          kc_z,    kc_x,    kc_c,    kc_v,    kc_b,    kc_n,    kc_m,    kc_comm, kc_dot,  kc_slsh,          kc_rsft,             kc_up,               kc_p1,   kc_p2,   kc_p3,   kc_pent, \
    kc_lctl, kc_lgui, kc_lalt,                            kc_spc,                             kc_ralt, kc_rgui, kc_app,  kc_rctl,    kc_left, kc_down, kc_rght,    kc_p0,            kc_pdot \
) { \
    {      kc_pdot,      kc_p0,        kc_spc,       KC_NO,        kc_h,  kc_f11,       kc_f6,        kc_quot,      kc_up,        KC_NO,        KC_NO,        kc_g,  KC_NO,        KC_NO,        kc_f4, kc_lalt,      KC_NO,        kc_esc,       KC_NO  }, \
    {      kc_p3,        kc_p2,        kc_p1,        kc_rsft,      kc_j,  kc_bsls,      kc_k,         kc_scln,      kc_pent,      kc_l,         kc_rgui,      kc_f,  KC_NO,        KC_NO,        kc_d,  KC_NO,        kc_s,         kc_a,         KC_NO  }, \
    {      kc_p6,        kc_p5,        kc_p4,        kc_lsft,      kc_y,  kc_bspc,      kc_rbrc,      kc_lbrc,      KC_NO,        kc_f7,        KC_NO,        kc_t,  kc_lgui,      KC_NO,        kc_f3, kc_app,       kc_caps,      kc_tab,       KC_NO  }, \
    {      kc_pgdn,      KC_NO,        KC_NO,        KC_NO,        kc_7,  kc_f10,       kc_8,         kc_0,         kc_end,       kc_9,         KC_NO,        kc_4,  KC_NO,        kc_f5,        kc_3,  kc_pscr,      kc_2,         kc_1,         KC_NO  }, \
    {      kc_p9,        kc_p8,        kc_p7,        KC_NO,        kc_u,  KC_NO,        kc_i,         kc_p,         kc_ppls,      kc_o,         KC_NO,        kc_r,  KC_NO,        kc_paus,      kc_e,  kc_scrl,      kc_w,         kc_q,         KC_NO  }, \
    {      kc_pmns,      kc_rght,      kc_down,      KC_NO,        kc_n,  kc_f12,       KC_NO,        kc_slsh,      kc_left,      KC_NO,        KC_NO,        kc_b,  KC_NO,        KC_NO,        KC_NO, kc_ralt,      KC_NO,        KC_NO,        KC_NO  }, \
    {      kc_pgup,      kc_ins,       kc_del,       KC_NO,        kc_6,  kc_f9,        kc_eql,       kc_mins,      kc_home,      kc_f8,        KC_NO,        kc_5,  KC_NO,        kc_lctl,      kc_f2, KC_NO,        kc_f1,        kc_grv,       KC_NO  }, \
    {      kc_past,      kc_psls,      kc_num,       KC_NO,        kc_m,  kc_ent,       kc_comm,      KC_NO,        KC_NO,        kc_dot,       KC_NO,        kc_v,  KC_NO,        kc_rctl,      kc_c,  KC_NO,        kc_x,         kc_z,         KC_NO  }, \
}
