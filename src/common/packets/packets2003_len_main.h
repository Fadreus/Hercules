/**
 * This file is part of Hercules.
 * http://herc.ws - http://github.com/HerculesWS/Hercules
 *
 * Copyright (C) 2018  Hercules Dev Team
 * Copyright (C) 2018  Andrei Karas (4144)
 *
 * Hercules is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef COMMON_PACKETS2003_LEN_MAIN_H
#define COMMON_PACKETS2003_LEN_MAIN_H

/* This file is autogenerated, please do not commit manual changes */

// Packet: 0x0064
packetLen(0x0064, 55)  // CA_LOGIN

// Packet: 0x0065
packetLen(0x0065, 17)  // CH_ENTER

// Packet: 0x0066
packetLen(0x0066, 3)  // CH_SELECT_CHAR

// Packet: 0x0067
packetLen(0x0067, 37)  // CH_MAKE_CHAR

// Packet: 0x0068
packetLen(0x0068, 46)  // CH_DELETE_CHAR

// Packet: 0x0069
packetLen(0x0069, -1)  // AC_ACCEPT_LOGIN

// Packet: 0x006a
packetLen(0x006a, 23)  // AC_REFUSE_LOGIN

// Packet: 0x006b
packetLen(0x006b, -1)  // HC_ACCEPT_ENTER

// Packet: 0x006c
packetLen(0x006c, 3)  // HC_REFUSE_ENTER

// Packet: 0x006d
packetLen(0x006d, 108)  // HC_ACCEPT_MAKECHAR

// Packet: 0x006e
packetLen(0x006e, 3)  // HC_REFUSE_MAKECHAR

// Packet: 0x006f
packetLen(0x006f, 2)  // HC_ACCEPT_DELETECHAR

// Packet: 0x0070
packetLen(0x0070, 3)  // HC_REFUSE_DELETECHAR

// Packet: 0x0071
packetLen(0x0071, 28)  // HC_NOTIFY_ZONESVR

// Packet: 0x0072
packetLen(0x0072, 19)  // CZ_ENTER

// Packet: 0x0073
packetLen(0x0073, 11)  // ZC_ACCEPT_ENTER

// Packet: 0x0074
packetLen(0x0074, 3)  // ZC_REFUSE_ENTER

// Packet: 0x0075
packetLen(0x0075, -1)  // ZC_NOTIFY_INITCHAR

// Packet: 0x0076
packetLen(0x0076, 9)  // ZC_NOTIFY_UPDATECHAR

// Packet: 0x0077
packetLen(0x0077, 5)  // ZC_NOTIFY_UPDATEPLAYER

// Packet: 0x0078
packetLen(0x0078, 54)  // ZC_NOTIFY_STANDENTRY

// Packet: 0x0079
packetLen(0x0079, 53)  // ZC_NOTIFY_NEWENTRY

// Packet: 0x007a
packetLen(0x007a, 58)  // ZC_NOTIFY_ACTENTRY

// Packet: 0x007b
packetLen(0x007b, 60)  // ZC_NOTIFY_MOVEENTRY

// Packet: 0x007c
packetLen(0x007c, 41)  // ZC_NOTIFY_STANDENTRY_NPC

// Packet: 0x007d
packetLen(0x007d, 2)  // CZ_NOTIFY_ACTORINIT

// Packet: 0x007e
packetLen(0x007e, 6)  // CZ_REQUEST_TIME

// Packet: 0x007f
packetLen(0x007f, 6)  // ZC_NOTIFY_TIME

// Packet: 0x0080
packetLen(0x0080, 7)  // ZC_NOTIFY_VANISH

// Packet: 0x0081
packetLen(0x0081, 3)  // SC_NOTIFY_BAN

// Packet: 0x0082
packetLen(0x0082, 2)  // CZ_REQUEST_QUIT

// Packet: 0x0083
packetLen(0x0083, 2)  // ZC_ACCEPT_QUIT

// Packet: 0x0084
packetLen(0x0084, 2)  // ZC_REFUSE_QUIT

// Packet: 0x0085
packetLen(0x0085, 5)  // CZ_REQUEST_MOVE

// Packet: 0x0086
packetLen(0x0086, 16)  // ZC_NOTIFY_MOVE

// Packet: 0x0087
packetLen(0x0087, 12)  // ZC_NOTIFY_PLAYERMOVE

// Packet: 0x0088
packetLen(0x0088, 10)  // ZC_STOPMOVE

// Packet: 0x0089
packetLen(0x0089, 7)  // CZ_REQUEST_ACT

// Packet: 0x008a
packetLen(0x008a, 29)  // ZC_NOTIFY_ACT

// Packet: 0x008b
packetLen(0x008b, 23)  // ZC_NOTIFY_ACT_POSITION

// Packet: 0x008c
packetLen(0x008c, -1)  // CZ_REQUEST_CHAT

// Packet: 0x008d
packetLen(0x008d, -1)  // ZC_NOTIFY_CHAT

// Packet: 0x008e
packetLen(0x008e, -1)  // ZC_NOTIFY_PLAYERCHAT

// Packet: 0x0090
packetLen(0x0090, 7)  // CZ_CONTACTNPC

// Packet: 0x0091
packetLen(0x0091, 22)  // ZC_NPCACK_MAPMOVE

// Packet: 0x0092
packetLen(0x0092, 28)  // ZC_NPCACK_SERVERMOVE

// Packet: 0x0093
packetLen(0x0093, 2)  // ZC_NPCACK_ENABLE

// Packet: 0x0094
packetLen(0x0094, 6)  // CZ_REQNAME

// Packet: 0x0095
packetLen(0x0095, 30)  // ZC_ACK_REQNAME

// Packet: 0x0096
packetLen(0x0096, -1)  // CZ_WHISPER

// Packet: 0x0097
packetLen(0x0097, -1)  // ZC_WHISPER

// Packet: 0x0098
packetLen(0x0098, 3)  // ZC_ACK_WHISPER

// Packet: 0x0099
packetLen(0x0099, -1)  // CZ_BROADCAST

// Packet: 0x009a
packetLen(0x009a, -1)  // ZC_BROADCAST

// Packet: 0x009b
packetLen(0x009b, 5)  // CZ_CHANGE_DIRECTION

// Packet: 0x009c
packetLen(0x009c, 9)  // ZC_CHANGE_DIRECTION

// Packet: 0x009d
packetLen(0x009d, 17)  // ZC_ITEM_ENTRY

// Packet: 0x009e
packetLen(0x009e, 17)  // ZC_ITEM_FALL_ENTRY

// Packet: 0x009f
packetLen(0x009f, 6)  // CZ_ITEM_PICKUP

// Packet: 0x00a0
packetLen(0x00a0, 23)  // ZC_ITEM_PICKUP_ACK

// Packet: 0x00a1
packetLen(0x00a1, 6)  // ZC_ITEM_DISAPPEAR

// Packet: 0x00a2
packetLen(0x00a2, 6)  // CZ_ITEM_THROW

// Packet: 0x00a3
packetLen(0x00a3, -1)  // ZC_NORMAL_ITEMLIST

// Packet: 0x00a4
packetLen(0x00a4, -1)  // ZC_EQUIPMENT_ITEMLIST

// Packet: 0x00a5
packetLen(0x00a5, -1)  // ZC_STORE_NORMAL_ITEMLIST

// Packet: 0x00a6
packetLen(0x00a6, -1)  // ZC_STORE_EQUIPMENT_ITEMLIST

// Packet: 0x00a7
packetLen(0x00a7, 8)  // CZ_USE_ITEM

// Packet: 0x00a8
packetLen(0x00a8, 7)  // ZC_USE_ITEM_ACK

// Packet: 0x00a9
packetLen(0x00a9, 6)  // CZ_REQ_WEAR_EQUIP

// Packet: 0x00aa
packetLen(0x00aa, 7)  // ZC_REQ_WEAR_EQUIP_ACK

// Packet: 0x00ab
packetLen(0x00ab, 4)  // CZ_REQ_TAKEOFF_EQUIP

// Packet: 0x00ac
packetLen(0x00ac, 7)  // ZC_REQ_TAKEOFF_EQUIP_ACK

// Packet: 0x00ae
packetLen(0x00ae, -1)  // ZC_REQ_ITEM_EXPLANATION_ACK

// Packet: 0x00af
packetLen(0x00af, 6)  // ZC_ITEM_THROW_ACK

// Packet: 0x00b0
packetLen(0x00b0, 8)  // ZC_PAR_CHANGE

// Packet: 0x00b1
packetLen(0x00b1, 8)  // ZC_LONGPAR_CHANGE

// Packet: 0x00b2
packetLen(0x00b2, 3)  // CZ_RESTART

// Packet: 0x00b3
packetLen(0x00b3, 3)  // ZC_RESTART_ACK

// Packet: 0x00b4
packetLen(0x00b4, -1)  // ZC_SAY_DIALOG

// Packet: 0x00b5
packetLen(0x00b5, 6)  // ZC_WAIT_DIALOG

// Packet: 0x00b6
packetLen(0x00b6, 6)  // ZC_CLOSE_DIALOG

// Packet: 0x00b7
packetLen(0x00b7, -1)  // ZC_MENU_LIST

// Packet: 0x00b8
packetLen(0x00b8, 7)  // CZ_CHOOSE_MENU

// Packet: 0x00b9
packetLen(0x00b9, 6)  // CZ_REQ_NEXT_SCRIPT

// Packet: 0x00ba
packetLen(0x00ba, 2)  // CZ_REQ_STATUS

// Packet: 0x00bb
packetLen(0x00bb, 5)  // CZ_STATUS_CHANGE

// Packet: 0x00bc
packetLen(0x00bc, 6)  // ZC_STATUS_CHANGE_ACK

// Packet: 0x00bd
packetLen(0x00bd, 44)  // ZC_STATUS

// Packet: 0x00be
packetLen(0x00be, 5)  // ZC_STATUS_CHANGE

// Packet: 0x00bf
packetLen(0x00bf, 3)  // CZ_REQ_EMOTION

// Packet: 0x00c0
packetLen(0x00c0, 7)  // ZC_EMOTION

// Packet: 0x00c1
packetLen(0x00c1, 2)  // CZ_REQ_USER_COUNT

// Packet: 0x00c2
packetLen(0x00c2, 6)  // ZC_USER_COUNT

// Packet: 0x00c3
packetLen(0x00c3, 8)  // ZC_SPRITE_CHANGE

// Packet: 0x00c4
packetLen(0x00c4, 6)  // ZC_SELECT_DEALTYPE

// Packet: 0x00c5
packetLen(0x00c5, 7)  // CZ_ACK_SELECT_DEALTYPE

// Packet: 0x00c6
packetLen(0x00c6, -1)  // ZC_PC_PURCHASE_ITEMLIST

// Packet: 0x00c7
packetLen(0x00c7, -1)  // ZC_PC_SELL_ITEMLIST

// Packet: 0x00c8
packetLen(0x00c8, -1)  // CZ_PC_PURCHASE_ITEMLIST

// Packet: 0x00c9
packetLen(0x00c9, -1)  // CZ_PC_SELL_ITEMLIST

// Packet: 0x00ca
packetLen(0x00ca, 3)  // ZC_PC_PURCHASE_RESULT

// Packet: 0x00cb
packetLen(0x00cb, 3)  // ZC_PC_SELL_RESULT

// Packet: 0x00cc
packetLen(0x00cc, 6)  // CZ_DISCONNECT_CHARACTER

// Packet: 0x00cd
packetLen(0x00cd, 3)  // ZC_ACK_DISCONNECT_CHARACTER

// Packet: 0x00ce
packetLen(0x00ce, 2)  // CZ_DISCONNECT_ALL_CHARACTER

// Packet: 0x00cf
packetLen(0x00cf, 27)  // CZ_SETTING_WHISPER_PC

// Packet: 0x00d0
packetLen(0x00d0, 3)  // CZ_SETTING_WHISPER_STATE

// Packet: 0x00d1
packetLen(0x00d1, 4)  // ZC_SETTING_WHISPER_PC

// Packet: 0x00d2
packetLen(0x00d2, 4)  // ZC_SETTING_WHISPER_STATE

// Packet: 0x00d3
packetLen(0x00d3, 2)  // CZ_REQ_WHISPER_LIST

// Packet: 0x00d4
packetLen(0x00d4, -1)  // ZC_WHISPER_LIST

// Packet: 0x00d5
packetLen(0x00d5, -1)  // CZ_CREATE_CHATROOM

// Packet: 0x00d6
packetLen(0x00d6, 3)  // ZC_ACK_CREATE_CHATROOM

// Packet: 0x00d7
packetLen(0x00d7, -1)  // ZC_ROOM_NEWENTRY

// Packet: 0x00d8
packetLen(0x00d8, 6)  // ZC_DESTROY_ROOM

// Packet: 0x00d9
packetLen(0x00d9, 14)  // CZ_REQ_ENTER_ROOM

// Packet: 0x00da
packetLen(0x00da, 3)  // ZC_REFUSE_ENTER_ROOM

// Packet: 0x00db
packetLen(0x00db, -1)  // ZC_ENTER_ROOM

// Packet: 0x00dc
packetLen(0x00dc, 28)  // ZC_MEMBER_NEWENTRY

// Packet: 0x00dd
packetLen(0x00dd, 29)  // ZC_MEMBER_EXIT

// Packet: 0x00de
packetLen(0x00de, -1)  // CZ_CHANGE_CHATROOM

// Packet: 0x00df
packetLen(0x00df, -1)  // ZC_CHANGE_CHATROOM

// Packet: 0x00e0
packetLen(0x00e0, 30)  // CZ_REQ_ROLE_CHANGE

// Packet: 0x00e1
packetLen(0x00e1, 30)  // ZC_ROLE_CHANGE

// Packet: 0x00e2
packetLen(0x00e2, 26)  // CZ_REQ_EXPEL_MEMBER

// Packet: 0x00e3
packetLen(0x00e3, 2)  // CZ_EXIT_ROOM

// Packet: 0x00e4
packetLen(0x00e4, 6)  // CZ_REQ_EXCHANGE_ITEM

// Packet: 0x00e5
packetLen(0x00e5, 26)  // ZC_REQ_EXCHANGE_ITEM

// Packet: 0x00e6
packetLen(0x00e6, 3)  // CZ_ACK_EXCHANGE_ITEM

// Packet: 0x00e7
packetLen(0x00e7, 3)  // ZC_ACK_EXCHANGE_ITEM

// Packet: 0x00e8
packetLen(0x00e8, 8)  // CZ_ADD_EXCHANGE_ITEM

// Packet: 0x00e9
packetLen(0x00e9, 19)  // ZC_ADD_EXCHANGE_ITEM

// Packet: 0x00ea
packetLen(0x00ea, 5)  // ZC_ACK_ADD_EXCHANGE_ITEM

// Packet: 0x00eb
packetLen(0x00eb, 2)  // CZ_CONCLUDE_EXCHANGE_ITEM

// Packet: 0x00ec
packetLen(0x00ec, 3)  // ZC_CONCLUDE_EXCHANGE_ITEM

// Packet: 0x00ed
packetLen(0x00ed, 2)  // CZ_CANCEL_EXCHANGE_ITEM

// Packet: 0x00ee
packetLen(0x00ee, 2)  // ZC_CANCEL_EXCHANGE_ITEM

// Packet: 0x00ef
packetLen(0x00ef, 2)  // CZ_EXEC_EXCHANGE_ITEM

// Packet: 0x00f0
packetLen(0x00f0, 3)  // ZC_EXEC_EXCHANGE_ITEM

// Packet: 0x00f1
packetLen(0x00f1, 2)  // ZC_EXCHANGEITEM_UNDO

// Packet: 0x00f2
packetLen(0x00f2, 6)  // ZC_NOTIFY_STOREITEM_COUNTINFO

// Packet: 0x00f3
packetLen(0x00f3, 8)  // CZ_MOVE_ITEM_FROM_BODY_TO_STORE

// Packet: 0x00f4
packetLen(0x00f4, 21)  // ZC_ADD_ITEM_TO_STORE

// Packet: 0x00f5
packetLen(0x00f5, 8)  // CZ_MOVE_ITEM_FROM_STORE_TO_BODY

// Packet: 0x00f6
packetLen(0x00f6, 8)  // ZC_DELETE_ITEM_FROM_STORE

// Packet: 0x00f7
packetLen(0x00f7, 2)  // CZ_CLOSE_STORE

// Packet: 0x00f8
packetLen(0x00f8, 2)  // ZC_CLOSE_STORE

// Packet: 0x00f9
#if PACKETVER >= 20031117
packetLen(0x00f9, 26)  // CZ_MAKE_GROUP
#elif PACKETVER >= 20031110
packetLen(0x00f9, 28)  // CZ_MAKE_GROUP
#elif PACKETVER >= 20031028
packetLen(0x00f9, 26)  // CZ_MAKE_GROUP
#endif

// Packet: 0x00fa
packetLen(0x00fa, 3)  // ZC_ACK_MAKE_GROUP

// Packet: 0x00fb
packetLen(0x00fb, -1)  // ZC_GROUP_LIST

// Packet: 0x00fc
packetLen(0x00fc, 6)  // CZ_REQ_JOIN_GROUP

// Packet: 0x00fd
packetLen(0x00fd, 27)  // ZC_ACK_REQ_JOIN_GROUP

// Packet: 0x00fe
packetLen(0x00fe, 30)  // ZC_REQ_JOIN_GROUP

// Packet: 0x00ff
packetLen(0x00ff, 10)  // CZ_JOIN_GROUP

// Packet: 0x0100
packetLen(0x0100, 2)  // CZ_REQ_LEAVE_GROUP

// Packet: 0x0101
packetLen(0x0101, 6)  // ZC_GROUPINFO_CHANGE

// Packet: 0x0102
packetLen(0x0102, 6)  // CZ_CHANGE_GROUPEXPOPTION

// Packet: 0x0103
packetLen(0x0103, 30)  // CZ_REQ_EXPEL_GROUP_MEMBER

// Packet: 0x0104
#if PACKETVER >= 20031117
packetLen(0x0104, 79)  // ZC_ADD_MEMBER_TO_GROUP
#elif PACKETVER >= 20031110
packetLen(0x0104, 81)  // ZC_ADD_MEMBER_TO_GROUP
#elif PACKETVER >= 20031028
packetLen(0x0104, 79)  // ZC_ADD_MEMBER_TO_GROUP
#endif

// Packet: 0x0105
packetLen(0x0105, 31)  // ZC_DELETE_MEMBER_FROM_GROUP

// Packet: 0x0106
packetLen(0x0106, 10)  // ZC_NOTIFY_HP_TO_GROUPM

// Packet: 0x0107
packetLen(0x0107, 10)  // ZC_NOTIFY_POSITION_TO_GROUPM

// Packet: 0x0108
packetLen(0x0108, -1)  // CZ_REQUEST_CHAT_PARTY

// Packet: 0x0109
packetLen(0x0109, -1)  // ZC_NOTIFY_CHAT_PARTY

// Packet: 0x010a
packetLen(0x010a, 4)  // ZC_MVP_GETTING_ITEM

// Packet: 0x010b
packetLen(0x010b, 6)  // ZC_MVP_GETTING_SPECIAL_EXP

// Packet: 0x010c
packetLen(0x010c, 6)  // ZC_MVP

// Packet: 0x010d
packetLen(0x010d, 2)  // ZC_THROW_MVPITEM

// Packet: 0x010e
packetLen(0x010e, 11)  // ZC_SKILLINFO_UPDATE

// Packet: 0x010f
packetLen(0x010f, -1)  // ZC_SKILLINFO_LIST

// Packet: 0x0110
packetLen(0x0110, 10)  // ZC_ACK_TOUSESKILL

// Packet: 0x0111
packetLen(0x0111, 39)  // ZC_ADD_SKILL

// Packet: 0x0112
packetLen(0x0112, 4)  // CZ_UPGRADE_SKILLLEVEL

// Packet: 0x0113
packetLen(0x0113, 10)  // CZ_USE_SKILL

// Packet: 0x0114
packetLen(0x0114, 31)  // ZC_NOTIFY_SKILL

// Packet: 0x0115
packetLen(0x0115, 35)  // ZC_NOTIFY_SKILL_POSITION

// Packet: 0x0116
packetLen(0x0116, 10)  // CZ_USE_SKILL_TOGROUND

// Packet: 0x0117
packetLen(0x0117, 18)  // ZC_NOTIFY_GROUNDSKILL

// Packet: 0x0118
packetLen(0x0118, 2)  // CZ_CANCEL_LOCKON

// Packet: 0x0119
packetLen(0x0119, 13)  // ZC_STATE_CHANGE

// Packet: 0x011a
packetLen(0x011a, 15)  // ZC_USE_SKILL

// Packet: 0x011b
packetLen(0x011b, 20)  // CZ_SELECT_WARPPOINT

// Packet: 0x011c
packetLen(0x011c, 68)  // ZC_WARPLIST

// Packet: 0x011d
packetLen(0x011d, 2)  // CZ_REMEMBER_WARPPOINT

// Packet: 0x011e
packetLen(0x011e, 3)  // ZC_ACK_REMEMBER_WARPPOINT

// Packet: 0x011f
packetLen(0x011f, 16)  // ZC_SKILL_ENTRY

// Packet: 0x0120
packetLen(0x0120, 6)  // ZC_SKILL_DISAPPEAR

// Packet: 0x0121
packetLen(0x0121, 14)  // ZC_NOTIFY_CARTITEM_COUNTINFO

// Packet: 0x0122
packetLen(0x0122, -1)  // ZC_CART_EQUIPMENT_ITEMLIST

// Packet: 0x0123
packetLen(0x0123, -1)  // ZC_CART_NORMAL_ITEMLIST

// Packet: 0x0124
packetLen(0x0124, 21)  // ZC_ADD_ITEM_TO_CART

// Packet: 0x0125
packetLen(0x0125, 8)  // ZC_DELETE_ITEM_FROM_CART

// Packet: 0x0126
packetLen(0x0126, 8)  // CZ_MOVE_ITEM_FROM_BODY_TO_CART

// Packet: 0x0127
packetLen(0x0127, 8)  // CZ_MOVE_ITEM_FROM_CART_TO_BODY

// Packet: 0x0128
packetLen(0x0128, 8)  // CZ_MOVE_ITEM_FROM_STORE_TO_CART

// Packet: 0x0129
packetLen(0x0129, 8)  // CZ_MOVE_ITEM_FROM_CART_TO_STORE

// Packet: 0x012a
packetLen(0x012a, 2)  // CZ_REQ_CARTOFF

// Packet: 0x012b
packetLen(0x012b, 2)  // ZC_CARTOFF

// Packet: 0x012c
packetLen(0x012c, 3)  // ZC_ACK_ADDITEM_TO_CART

// Packet: 0x012d
packetLen(0x012d, 4)  // ZC_OPENSTORE

// Packet: 0x012e
packetLen(0x012e, 2)  // CZ_REQ_CLOSESTORE

// Packet: 0x012f
packetLen(0x012f, -1)  // CZ_REQ_OPENSTORE

// Packet: 0x0130
packetLen(0x0130, 6)  // CZ_REQ_BUY_FROMMC

// Packet: 0x0131
packetLen(0x0131, 86)  // ZC_STORE_ENTRY

// Packet: 0x0132
packetLen(0x0132, 6)  // ZC_DISAPPEAR_ENTRY

// Packet: 0x0133
packetLen(0x0133, -1)  // ZC_PC_PURCHASE_ITEMLIST_FROMMC

// Packet: 0x0134
packetLen(0x0134, -1)  // CZ_PC_PURCHASE_ITEMLIST_FROMMC

// Packet: 0x0135
packetLen(0x0135, 7)  // ZC_PC_PURCHASE_RESULT_FROMMC

// Packet: 0x0136
packetLen(0x0136, -1)  // ZC_PC_PURCHASE_MYITEMLIST

// Packet: 0x0137
packetLen(0x0137, 6)  // ZC_DELETEITEM_FROM_MCSTORE

// Packet: 0x0138
packetLen(0x0138, 3)  // CZ_PKMODE_CHANGE

// Packet: 0x0139
packetLen(0x0139, 16)  // ZC_ATTACK_FAILURE_FOR_DISTANCE

// Packet: 0x013a
packetLen(0x013a, 4)  // ZC_ATTACK_RANGE

// Packet: 0x013b
packetLen(0x013b, 4)  // ZC_ACTION_FAILURE

// Packet: 0x013c
packetLen(0x013c, 4)  // ZC_EQUIP_ARROW

// Packet: 0x013d
packetLen(0x013d, 6)  // ZC_RECOVERY

// Packet: 0x013e
packetLen(0x013e, 24)  // ZC_USESKILL_ACK

// Packet: 0x013f
packetLen(0x013f, 26)  // CZ_ITEM_CREATE

// Packet: 0x0140
packetLen(0x0140, 22)  // CZ_MOVETO_MAP

// Packet: 0x0141
packetLen(0x0141, 14)  // ZC_COUPLESTATUS

// Packet: 0x0142
packetLen(0x0142, 6)  // ZC_OPEN_EDITDLG

// Packet: 0x0143
packetLen(0x0143, 10)  // CZ_INPUT_EDITDLG

// Packet: 0x0144
packetLen(0x0144, 23)  // ZC_COMPASS

// Packet: 0x0145
packetLen(0x0145, 19)  // ZC_SHOW_IMAGE

// Packet: 0x0146
packetLen(0x0146, 6)  // CZ_CLOSE_DIALOG

// Packet: 0x0147
packetLen(0x0147, 39)  // ZC_AUTORUN_SKILL

// Packet: 0x0148
packetLen(0x0148, 8)  // ZC_RESURRECTION

// Packet: 0x0149
packetLen(0x0149, 9)  // CZ_REQ_GIVE_MANNER_POINT

// Packet: 0x014a
packetLen(0x014a, 6)  // ZC_ACK_GIVE_MANNER_POINT

// Packet: 0x014b
packetLen(0x014b, 27)  // ZC_NOTIFY_MANNER_POINT_GIVEN

// Packet: 0x014c
packetLen(0x014c, -1)  // ZC_MYGUILD_BASIC_INFO

// Packet: 0x014d
packetLen(0x014d, 2)  // CZ_REQ_GUILD_MENUINTERFACE

// Packet: 0x014e
packetLen(0x014e, 6)  // ZC_ACK_GUILD_MENUINTERFACE

// Packet: 0x014f
packetLen(0x014f, 6)  // CZ_REQ_GUILD_MENU

// Packet: 0x0150
packetLen(0x0150, 110)  // ZC_GUILD_INFO

// Packet: 0x0151
packetLen(0x0151, 6)  // CZ_REQ_GUILD_EMBLEM_IMG

// Packet: 0x0152
packetLen(0x0152, -1)  // ZC_GUILD_EMBLEM_IMG

// Packet: 0x0153
packetLen(0x0153, -1)  // CZ_REGISTER_GUILD_EMBLEM_IMG

// Packet: 0x0154
packetLen(0x0154, -1)  // ZC_MEMBERMGR_INFO

// Packet: 0x0155
packetLen(0x0155, -1)  // CZ_REQ_CHANGE_MEMBERPOS

// Packet: 0x0156
packetLen(0x0156, -1)  // ZC_ACK_REQ_CHANGE_MEMBERS

// Packet: 0x0157
packetLen(0x0157, 6)  // CZ_REQ_OPEN_MEMBER_INFO

// Packet: 0x0158
packetLen(0x0158, -1)  // ZC_ACK_OPEN_MEMBER_INFO

// Packet: 0x0159
packetLen(0x0159, 54)  // CZ_REQ_LEAVE_GUILD

// Packet: 0x015a
packetLen(0x015a, 66)  // ZC_ACK_LEAVE_GUILD

// Packet: 0x015b
packetLen(0x015b, 54)  // CZ_REQ_BAN_GUILD

// Packet: 0x015c
packetLen(0x015c, 90)  // ZC_ACK_BAN_GUILD

// Packet: 0x015d
packetLen(0x015d, 42)  // CZ_REQ_DISORGANIZE_GUILD

// Packet: 0x015e
packetLen(0x015e, 6)  // ZC_ACK_DISORGANIZE_GUILD_RESULT

// Packet: 0x015f
packetLen(0x015f, 42)  // ZC_ACK_DISORGANIZE_GUILD

// Packet: 0x0160
packetLen(0x0160, -1)  // ZC_POSITION_INFO

// Packet: 0x0161
packetLen(0x0161, -1)  // CZ_REG_CHANGE_GUILD_POSITIONINFO

// Packet: 0x0162
packetLen(0x0162, -1)  // ZC_GUILD_SKILLINFO

// Packet: 0x0163
packetLen(0x0163, -1)  // ZC_BAN_LIST

// Packet: 0x0164
packetLen(0x0164, -1)  // ZC_OTHER_GUILD_LIST

// Packet: 0x0165
packetLen(0x0165, 30)  // CZ_REQ_MAKE_GUILD

// Packet: 0x0166
packetLen(0x0166, -1)  // ZC_POSITION_ID_NAME_INFO

// Packet: 0x0167
packetLen(0x0167, 3)  // ZC_RESULT_MAKE_GUILD

// Packet: 0x0168
packetLen(0x0168, 14)  // CZ_REQ_JOIN_GUILD

// Packet: 0x0169
packetLen(0x0169, 3)  // ZC_ACK_REQ_JOIN_GUILD

// Packet: 0x016a
packetLen(0x016a, 30)  // ZC_REQ_JOIN_GUILD

// Packet: 0x016b
packetLen(0x016b, 10)  // CZ_JOIN_GUILD

// Packet: 0x016c
packetLen(0x016c, 43)  // ZC_UPDATE_GDID

// Packet: 0x016d
packetLen(0x016d, 14)  // ZC_UPDATE_CHARSTAT

// Packet: 0x016e
packetLen(0x016e, 186)  // CZ_GUILD_NOTICE

// Packet: 0x016f
packetLen(0x016f, 182)  // ZC_GUILD_NOTICE

// Packet: 0x0170
packetLen(0x0170, 14)  // CZ_REQ_ALLY_GUILD

// Packet: 0x0171
packetLen(0x0171, 30)  // ZC_REQ_ALLY_GUILD

// Packet: 0x0172
packetLen(0x0172, 10)  // CZ_ALLY_GUILD

// Packet: 0x0173
packetLen(0x0173, 3)  // ZC_ACK_REQ_ALLY_GUILD

// Packet: 0x0174
packetLen(0x0174, -1)  // ZC_ACK_CHANGE_GUILD_POSITIONINFO

// Packet: 0x0175
packetLen(0x0175, 6)  // CZ_REQ_GUILD_MEMBER_INFO

// Packet: 0x0176
packetLen(0x0176, 106)  // ZC_ACK_GUILD_MEMBER_INFO

// Packet: 0x0177
packetLen(0x0177, -1)  // ZC_ITEMIDENTIFY_LIST

// Packet: 0x0178
packetLen(0x0178, 4)  // CZ_REQ_ITEMIDENTIFY

// Packet: 0x0179
packetLen(0x0179, 5)  // ZC_ACK_ITEMIDENTIFY

// Packet: 0x017a
packetLen(0x017a, 4)  // CZ_REQ_ITEMCOMPOSITION_LIST

// Packet: 0x017b
packetLen(0x017b, -1)  // ZC_ITEMCOMPOSITION_LIST

// Packet: 0x017c
packetLen(0x017c, 6)  // CZ_REQ_ITEMCOMPOSITION

// Packet: 0x017d
packetLen(0x017d, 7)  // ZC_ACK_ITEMCOMPOSITION

// Packet: 0x017e
packetLen(0x017e, -1)  // CZ_GUILD_CHAT

// Packet: 0x017f
packetLen(0x017f, -1)  // ZC_GUILD_CHAT

// Packet: 0x0180
packetLen(0x0180, 6)  // CZ_REQ_HOSTILE_GUILD

// Packet: 0x0181
packetLen(0x0181, 3)  // ZC_ACK_REQ_HOSTILE_GUILD

// Packet: 0x0182
packetLen(0x0182, 106)  // ZC_MEMBER_ADD

// Packet: 0x0183
packetLen(0x0183, 10)  // CZ_REQ_DELETE_RELATED_GUILD

// Packet: 0x0184
packetLen(0x0184, 10)  // ZC_DELETE_RELATED_GUILD

// Packet: 0x0185
packetLen(0x0185, 34)  // ZC_ADD_RELATED_GUILD

// Packet: 0x0187
packetLen(0x0187, 6)  // CH_UNKNOWN_PING

// Packet: 0x0188
packetLen(0x0188, 8)  // ZC_ACK_ITEMREFINING

// Packet: 0x0189
packetLen(0x0189, 4)  // ZC_NOTIFY_MAPINFO

// Packet: 0x018a
packetLen(0x018a, 4)  // CZ_REQ_DISCONNECT

// Packet: 0x018b
packetLen(0x018b, 4)  // ZC_ACK_REQ_DISCONNECT

// Packet: 0x018c
packetLen(0x018c, 29)  // ZC_MONSTER_INFO

// Packet: 0x018d
packetLen(0x018d, -1)  // ZC_MAKABLEITEMLIST

// Packet: 0x018e
packetLen(0x018e, 10)  // CZ_REQMAKINGITEM

// Packet: 0x018f
packetLen(0x018f, 6)  // ZC_ACK_REQMAKINGITEM

// Packet: 0x0190
packetLen(0x0190, 90)  // CZ_USE_SKILL_TOGROUND_WITHTALKBOX

// Packet: 0x0191
packetLen(0x0191, 86)  // ZC_TALKBOX_CHATCONTENTS

// Packet: 0x0192
packetLen(0x0192, 24)  // ZC_UPDATE_MAPINFO

// Packet: 0x0193
packetLen(0x0193, 6)  // CZ_REQNAME_BYGID

// Packet: 0x0194
packetLen(0x0194, 30)  // ZC_ACK_REQNAME_BYGID

// Packet: 0x0195
packetLen(0x0195, 102)  // ZC_ACK_REQNAMEALL

// Packet: 0x0196
packetLen(0x0196, 9)  // ZC_MSG_STATE_CHANGE

// Packet: 0x0197
packetLen(0x0197, 4)  // CZ_RESET

// Packet: 0x0198
packetLen(0x0198, 8)  // CZ_CHANGE_MAPTYPE

// Packet: 0x0199
packetLen(0x0199, 4)  // ZC_NOTIFY_MAPPROPERTY

// Packet: 0x019a
packetLen(0x019a, 14)  // ZC_NOTIFY_RANKING

// Packet: 0x019b
packetLen(0x019b, 10)  // ZC_NOTIFY_EFFECT

// Packet: 0x019c
packetLen(0x019c, 4)  // CZ_LOCALBROADCAST

// Packet: 0x019d
packetLen(0x019d, 6)  // CZ_CHANGE_EFFECTSTATE

// Packet: 0x019e
packetLen(0x019e, 2)  // ZC_START_CAPTURE

// Packet: 0x019f
packetLen(0x019f, 6)  // CZ_TRYCAPTURE_MONSTER

// Packet: 0x01a0
packetLen(0x01a0, 3)  // ZC_TRYCAPTURE_MONSTER

// Packet: 0x01a1
packetLen(0x01a1, 3)  // CZ_COMMAND_PET

// Packet: 0x01a2
packetLen(0x01a2, 35)  // ZC_PROPERTY_PET

// Packet: 0x01a3
packetLen(0x01a3, 5)  // ZC_FEED_PET

// Packet: 0x01a4
packetLen(0x01a4, 11)  // ZC_CHANGESTATE_PET

// Packet: 0x01a5
packetLen(0x01a5, 26)  // CZ_RENAME_PET

// Packet: 0x01a6
packetLen(0x01a6, -1)  // ZC_PETEGG_LIST

// Packet: 0x01a7
packetLen(0x01a7, 4)  // CZ_SELECT_PETEGG

// Packet: 0x01a8
packetLen(0x01a8, 4)  // CZ_PETEGG_INFO

// Packet: 0x01a9
packetLen(0x01a9, 6)  // CZ_PET_ACT

// Packet: 0x01aa
packetLen(0x01aa, 10)  // ZC_PET_ACT

// Packet: 0x01ab
packetLen(0x01ab, 12)  // ZC_PAR_CHANGE_USER

// Packet: 0x01ac
packetLen(0x01ac, 6)  // ZC_SKILL_UPDATE

// Packet: 0x01ad
packetLen(0x01ad, -1)  // ZC_MAKINGARROW_LIST

// Packet: 0x01ae
packetLen(0x01ae, 4)  // CZ_REQ_MAKINGARROW

// Packet: 0x01af
packetLen(0x01af, 4)  // CZ_REQ_CHANGECART

// Packet: 0x01b0
packetLen(0x01b0, 11)  // ZC_NPCSPRITE_CHANGE

// Packet: 0x01b1
packetLen(0x01b1, 7)  // ZC_SHOWDIGIT

// Packet: 0x01b2
packetLen(0x01b2, -1)  // CZ_REQ_OPENSTORE2

// Packet: 0x01b3
packetLen(0x01b3, 67)  // ZC_SHOW_IMAGE2

// Packet: 0x01b4
packetLen(0x01b4, 12)  // ZC_CHANGE_GUILD

// Packet: 0x01b5
packetLen(0x01b5, 18)  // SC_BILLING_INFO

// Packet: 0x01b6
packetLen(0x01b6, 114)  // ZC_GUILD_INFO2

// Packet: 0x01b7
packetLen(0x01b7, 6)  // CZ_GUILD_ZENY

// Packet: 0x01b8
packetLen(0x01b8, 3)  // ZC_GUILD_ZENY_ACK

// Packet: 0x01b9
packetLen(0x01b9, 6)  // ZC_DISPEL

// Packet: 0x01ba
packetLen(0x01ba, 26)  // CZ_REMOVE_AID

// Packet: 0x01bb
packetLen(0x01bb, 26)  // CZ_SHIFT

// Packet: 0x01bc
packetLen(0x01bc, 26)  // CZ_RECALL

// Packet: 0x01bd
packetLen(0x01bd, 26)  // CZ_RECALL_GID

// Packet: 0x01be
packetLen(0x01be, 2)  // AC_ASK_PNGAMEROOM

// Packet: 0x01bf
packetLen(0x01bf, 3)  // CA_REPLY_PNGAMEROOM

// Packet: 0x01c0
packetLen(0x01c0, 2)  // CZ_REQ_REMAINTIME

// Packet: 0x01c1
packetLen(0x01c1, 14)  // ZC_REPLY_REMAINTIME

// Packet: 0x01c2
packetLen(0x01c2, 10)  // ZC_INFO_REMAINTIME

// Packet: 0x01c3
packetLen(0x01c3, -1)  // ZC_BROADCAST2

// Packet: 0x01c4
packetLen(0x01c4, 22)  // ZC_ADD_ITEM_TO_STORE2

// Packet: 0x01c5
packetLen(0x01c5, 22)  // ZC_ADD_ITEM_TO_CART2

// Packet: 0x01c6
packetLen(0x01c6, 4)  // CS_REQ_ENCRYPTION

// Packet: 0x01c7
packetLen(0x01c7, 2)  // SC_ACK_ENCRYPTION

// Packet: 0x01c8
packetLen(0x01c8, 13)  // ZC_USE_ITEM_ACK2

// Packet: 0x01c9
packetLen(0x01c9, 97)  // ZC_SKILL_ENTRY2

// Packet: 0x01cb
packetLen(0x01cb, 9)  // CZ_MONSTER_TALK

// Packet: 0x01cc
packetLen(0x01cc, 9)  // ZC_MONSTER_TALK

// Packet: 0x01cd
packetLen(0x01cd, 30)  // ZC_AUTOSPELLLIST

// Packet: 0x01ce
packetLen(0x01ce, 6)  // CZ_SELECTAUTOSPELL

// Packet: 0x01cf
packetLen(0x01cf, 28)  // ZC_DEVOTIONLIST

// Packet: 0x01d0
packetLen(0x01d0, 8)  // ZC_SPIRITS

// Packet: 0x01d1
packetLen(0x01d1, 14)  // ZC_BLADESTOP

// Packet: 0x01d2
packetLen(0x01d2, 10)  // ZC_COMBODELAY

// Packet: 0x01d3
packetLen(0x01d3, 35)  // ZC_SOUND

// Packet: 0x01d4
packetLen(0x01d4, 6)  // ZC_OPEN_EDITDLGSTR

// Packet: 0x01d5
packetLen(0x01d5, 8)  // CZ_INPUT_EDITDLGSTR

// Packet: 0x01d6
packetLen(0x01d6, 4)  // ZC_NOTIFY_MAPPROPERTY2

// Packet: 0x01d7
packetLen(0x01d7, 11)  // ZC_SPRITE_CHANGE2

// Packet: 0x01d8
packetLen(0x01d8, 54)  // ZC_NOTIFY_STANDENTRY2

// Packet: 0x01d9
packetLen(0x01d9, 53)  // ZC_NOTIFY_NEWENTRY2

// Packet: 0x01da
packetLen(0x01da, 60)  // ZC_NOTIFY_MOVEENTRY2

// Packet: 0x01db
packetLen(0x01db, 2)  // CA_REQ_HASH

// Packet: 0x01dc
packetLen(0x01dc, -1)  // AC_ACK_HASH

// Packet: 0x01dd
packetLen(0x01dd, 47)  // CA_LOGIN2

// Packet: 0x01de
packetLen(0x01de, 33)  // ZC_NOTIFY_SKILL2

// Packet: 0x01df
packetLen(0x01df, 6)  // CZ_REQ_ACCOUNTNAME

// Packet: 0x01e0
packetLen(0x01e0, 30)  // ZC_ACK_ACCOUNTNAME

// Packet: 0x01e1
packetLen(0x01e1, 8)  // ZC_SPIRITS2

// Packet: 0x01e2
packetLen(0x01e2, 34)  // ZC_REQ_COUPLE

// Packet: 0x01e3
packetLen(0x01e3, 14)  // CZ_JOIN_COUPLE

// Packet: 0x01e4
packetLen(0x01e4, 2)  // ZC_START_COUPLE

// Packet: 0x01e5
packetLen(0x01e5, 6)  // CZ_REQ_JOIN_COUPLE

// Packet: 0x01e6
#if PACKETVER >= 20031110
packetLen(0x01e6, 26)  // ZC_COUPLENAME
#elif PACKETVER >= 20031028
packetLen(0x01e6, 28)  // ZC_COUPLENAME
#endif

// Packet: 0x01e7
#if PACKETVER >= 20031110
packetLen(0x01e7, 2)  // CZ_DORIDORI
#elif PACKETVER >= 20031028
packetLen(0x01e7, 81)  // CZ_DORIDORI
#endif

// Packet: 0x01e8
#if PACKETVER >= 20031117
packetLen(0x01e8, 28)  // CZ_MAKE_GROUP2
#elif PACKETVER >= 20031110
// removed
#elif PACKETVER >= 20031028
packetLen(0x01e8, 26)  // CZ_MAKE_GROUP2
#endif

// Packet: 0x01e9
#if PACKETVER >= 20031117
packetLen(0x01e9, 81)  // ZC_ADD_MEMBER_TO_GROUP2
#elif PACKETVER >= 20031110
// removed
#elif PACKETVER >= 20031103
packetLen(0x01e9, 2)  // ZC_ADD_MEMBER_TO_GROUP2
#endif

// Packet: 0x01ea
#if PACKETVER >= 20031117
packetLen(0x01ea, 6)  // ZC_CONGRATULATION
#endif

// Packet: 0x01eb
#if PACKETVER >= 20031124
packetLen(0x01eb, 10)  // ZC_NOTIFY_POSITION_TO_GUILDM
#endif

// Packet: 0x01ec
#if PACKETVER >= 20031124
packetLen(0x01ec, 26)  // ZC_GUILD_MEMBER_MAP_CHANGE
#endif

// Packet: 0x01ed
#if PACKETVER >= 20031124
packetLen(0x01ed, 2)  // CZ_CHOPOKGI
#endif

// Packet: 0x01ee
#if PACKETVER >= 20031208
packetLen(0x01ee, -1)  // ZC_NORMAL_ITEMLIST2
#endif

// Packet: 0x01ef
#if PACKETVER >= 20031218
packetLen(0x01ef, -1)  // ZC_CART_NORMAL_ITEMLIST2
#endif

// Packet: 0x01f0
#if PACKETVER >= 20031218
packetLen(0x01f0, -1)  // ZC_STORE_NORMAL_ITEMLIST2
#endif

// Packet: 0x01f1
#if PACKETVER >= 20031223
packetLen(0x01f1, -1)  // AC_NOTIFY_ERROR
#endif


#endif /* COMMON_PACKETS2003_LEN_MAIN_H */
