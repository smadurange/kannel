/* ==================================================================== 
 * The Kannel Software License, Version 1.0 
 * 
 * Copyright (c) 2001-2013 Kannel Group  
 * Copyright (c) 1998-2001 WapIT Ltd.   
 * All rights reserved. 
 * 
 * Redistribution and use in source and binary forms, with or without 
 * modification, are permitted provided that the following conditions 
 * are met: 
 * 
 * 1. Redistributions of source code must retain the above copyright 
 *    notice, this list of conditions and the following disclaimer. 
 * 
 * 2. Redistributions in binary form must reproduce the above copyright 
 *    notice, this list of conditions and the following disclaimer in 
 *    the documentation and/or other materials provided with the 
 *    distribution. 
 * 
 * 3. The end-user documentation included with the redistribution, 
 *    if any, must include the following acknowledgment: 
 *       "This product includes software developed by the 
 *        Kannel Group (http://www.kannel.org/)." 
 *    Alternately, this acknowledgment may appear in the software itself, 
 *    if and wherever such third-party acknowledgments normally appear. 
 * 
 * 4. The names "Kannel" and "Kannel Group" must not be used to 
 *    endorse or promote products derived from this software without 
 *    prior written permission. For written permission, please  
 *    contact org@kannel.org. 
 * 
 * 5. Products derived from this software may not be called "Kannel", 
 *    nor may "Kannel" appear in their name, without prior written 
 *    permission of the Kannel Group. 
 * 
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED 
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES 
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE 
 * DISCLAIMED.  IN NO EVENT SHALL THE KANNEL GROUP OR ITS CONTRIBUTORS 
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY,  
 * OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT  
 * OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR  
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,  
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE  
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,  
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 * ==================================================================== 
 * 
 * This software consists of voluntary contributions made by many 
 * individuals on behalf of the Kannel Group.  For more information on  
 * the Kannel Group, please see <http://www.kannel.org/>. 
 * 
 * Portions of this software are based upon software originally written at  
 * WapIT Ltd., Helsinki, Finland for the Kannel project.  
 */ 

/* 0x00 */ {NULL, 	0},
/* 0x01 */ {"jump_fw", 	2},
/* 0x02 */ {"jump_fw_w", 	3},
/* 0x03 */ {"jump_bw", 	2},
/* 0x04 */ {"jump_bw_w", 	3},
/* 0x05 */ {"tjump_fw", 	2},
/* 0x06 */ {"tjump_fw_w", 	3},
/* 0x07 */ {"tjump_bw", 	2},
/* 0x08 */ {"tjump_bw_w", 	3},
/* 0x09 */ {"call", 	2},
/* 0x0a */ {"call_lib", 	3},
/* 0x0b */ {"call_lib_w", 	4},
/* 0x0c */ {"call_url", 	4},
/* 0x0d */ {"call_url_w", 	6},
/* 0x0e */ {"load_var", 	2},
/* 0x0f */ {"store_var", 	2},
/* 0x10 */ {"incr_var", 	2},
/* 0x11 */ {"decr_var", 	2},
/* 0x12 */ {"load_const", 	2},
/* 0x13 */ {"load_const_w", 	3},
/* 0x14 */ {"const_0", 	1},
/* 0x15 */ {"const_1", 	1},
/* 0x16 */ {"const_m1", 	1},
/* 0x17 */ {"const_es", 	1},
/* 0x18 */ {"const_invalid", 	1},
/* 0x19 */ {"const_true", 	1},
/* 0x1a */ {"const_false", 	1},
/* 0x1b */ {"incr", 	1},
/* 0x1c */ {"decr", 	1},
/* 0x1d */ {"add_asg", 	2},
/* 0x1e */ {"sub_asg", 	2},
/* 0x1f */ {"uminus", 	1},
/* 0x20 */ {"add", 	1},
/* 0x21 */ {"sub", 	1},
/* 0x22 */ {"mul", 	1},
/* 0x23 */ {"div", 	1},
/* 0x24 */ {"idiv", 	1},
/* 0x25 */ {"rem", 	1},
/* 0x26 */ {"b_and", 	1},
/* 0x27 */ {"b_or", 	1},
/* 0x28 */ {"b_xor", 	1},
/* 0x29 */ {"b_not", 	1},
/* 0x2a */ {"b_lshift", 	1},
/* 0x2b */ {"b_rsshift", 	1},
/* 0x2c */ {"b_rszshift", 	1},
/* 0x2d */ {"eq", 	1},
/* 0x2e */ {"le", 	1},
/* 0x2f */ {"lt", 	1},
/* 0x30 */ {"ge", 	1},
/* 0x31 */ {"gt", 	1},
/* 0x32 */ {"ne", 	1},
/* 0x33 */ {"not", 	1},
/* 0x34 */ {"scand", 	1},
/* 0x35 */ {"scor", 	1},
/* 0x36 */ {"tobool", 	1},
/* 0x37 */ {"pop", 	1},
/* 0x38 */ {"typeof", 	1},
/* 0x39 */ {"isvalid", 	1},
/* 0x3a */ {"return", 	1},
/* 0x3b */ {"return_es", 	1},
/* 0x3c */ {"debug", 	1},
/* 0x3d */ {NULL, 	0},
/* 0x3e */ {NULL, 	0},
/* 0x3f */ {NULL, 	0},
/* 0x40 */ {"store_var_s", 	1},
/* 0x41 */ {NULL, 	0},
/* 0x42 */ {NULL, 	0},
/* 0x43 */ {NULL, 	0},
/* 0x44 */ {NULL, 	0},
/* 0x45 */ {NULL, 	0},
/* 0x46 */ {NULL, 	0},
/* 0x47 */ {NULL, 	0},
/* 0x48 */ {NULL, 	0},
/* 0x49 */ {NULL, 	0},
/* 0x4a */ {NULL, 	0},
/* 0x4b */ {NULL, 	0},
/* 0x4c */ {NULL, 	0},
/* 0x4d */ {NULL, 	0},
/* 0x4e */ {NULL, 	0},
/* 0x4f */ {NULL, 	0},
/* 0x50 */ {"load_const_s", 	1},
/* 0x51 */ {NULL, 	0},
/* 0x52 */ {NULL, 	0},
/* 0x53 */ {NULL, 	0},
/* 0x54 */ {NULL, 	0},
/* 0x55 */ {NULL, 	0},
/* 0x56 */ {NULL, 	0},
/* 0x57 */ {NULL, 	0},
/* 0x58 */ {NULL, 	0},
/* 0x59 */ {NULL, 	0},
/* 0x5a */ {NULL, 	0},
/* 0x5b */ {NULL, 	0},
/* 0x5c */ {NULL, 	0},
/* 0x5d */ {NULL, 	0},
/* 0x5e */ {NULL, 	0},
/* 0x5f */ {NULL, 	0},
/* 0x60 */ {"call_s", 	1},
/* 0x61 */ {NULL, 	0},
/* 0x62 */ {NULL, 	0},
/* 0x63 */ {NULL, 	0},
/* 0x64 */ {NULL, 	0},
/* 0x65 */ {NULL, 	0},
/* 0x66 */ {NULL, 	0},
/* 0x67 */ {NULL, 	0},
/* 0x68 */ {"call_lib_s", 	2},
/* 0x69 */ {NULL, 	0},
/* 0x6a */ {NULL, 	0},
/* 0x6b */ {NULL, 	0},
/* 0x6c */ {NULL, 	0},
/* 0x6d */ {NULL, 	0},
/* 0x6e */ {NULL, 	0},
/* 0x6f */ {NULL, 	0},
/* 0x70 */ {"incr_var_s", 	1},
/* 0x71 */ {NULL, 	0},
/* 0x72 */ {NULL, 	0},
/* 0x73 */ {NULL, 	0},
/* 0x74 */ {NULL, 	0},
/* 0x75 */ {NULL, 	0},
/* 0x76 */ {NULL, 	0},
/* 0x77 */ {NULL, 	0},
/* 0x78 */ {NULL, 	0},
/* 0x79 */ {NULL, 	0},
/* 0x7a */ {NULL, 	0},
/* 0x7b */ {NULL, 	0},
/* 0x7c */ {NULL, 	0},
/* 0x7d */ {NULL, 	0},
/* 0x7e */ {NULL, 	0},
/* 0x7f */ {NULL, 	0},
/* 0x80 */ {"jump_fw_s", 	1},
/* 0x81 */ {NULL, 	0},
/* 0x82 */ {NULL, 	0},
/* 0x83 */ {NULL, 	0},
/* 0x84 */ {NULL, 	0},
/* 0x85 */ {NULL, 	0},
/* 0x86 */ {NULL, 	0},
/* 0x87 */ {NULL, 	0},
/* 0x88 */ {NULL, 	0},
/* 0x89 */ {NULL, 	0},
/* 0x8a */ {NULL, 	0},
/* 0x8b */ {NULL, 	0},
/* 0x8c */ {NULL, 	0},
/* 0x8d */ {NULL, 	0},
/* 0x8e */ {NULL, 	0},
/* 0x8f */ {NULL, 	0},
/* 0x90 */ {NULL, 	0},
/* 0x91 */ {NULL, 	0},
/* 0x92 */ {NULL, 	0},
/* 0x93 */ {NULL, 	0},
/* 0x94 */ {NULL, 	0},
/* 0x95 */ {NULL, 	0},
/* 0x96 */ {NULL, 	0},
/* 0x97 */ {NULL, 	0},
/* 0x98 */ {NULL, 	0},
/* 0x99 */ {NULL, 	0},
/* 0x9a */ {NULL, 	0},
/* 0x9b */ {NULL, 	0},
/* 0x9c */ {NULL, 	0},
/* 0x9d */ {NULL, 	0},
/* 0x9e */ {NULL, 	0},
/* 0x9f */ {NULL, 	0},
/* 0xa0 */ {"jump_bw_s", 	1},
/* 0xa1 */ {NULL, 	0},
/* 0xa2 */ {NULL, 	0},
/* 0xa3 */ {NULL, 	0},
/* 0xa4 */ {NULL, 	0},
/* 0xa5 */ {NULL, 	0},
/* 0xa6 */ {NULL, 	0},
/* 0xa7 */ {NULL, 	0},
/* 0xa8 */ {NULL, 	0},
/* 0xa9 */ {NULL, 	0},
/* 0xaa */ {NULL, 	0},
/* 0xab */ {NULL, 	0},
/* 0xac */ {NULL, 	0},
/* 0xad */ {NULL, 	0},
/* 0xae */ {NULL, 	0},
/* 0xaf */ {NULL, 	0},
/* 0xb0 */ {NULL, 	0},
/* 0xb1 */ {NULL, 	0},
/* 0xb2 */ {NULL, 	0},
/* 0xb3 */ {NULL, 	0},
/* 0xb4 */ {NULL, 	0},
/* 0xb5 */ {NULL, 	0},
/* 0xb6 */ {NULL, 	0},
/* 0xb7 */ {NULL, 	0},
/* 0xb8 */ {NULL, 	0},
/* 0xb9 */ {NULL, 	0},
/* 0xba */ {NULL, 	0},
/* 0xbb */ {NULL, 	0},
/* 0xbc */ {NULL, 	0},
/* 0xbd */ {NULL, 	0},
/* 0xbe */ {NULL, 	0},
/* 0xbf */ {NULL, 	0},
/* 0xc0 */ {"tjump_fw_s", 	1},
/* 0xc1 */ {NULL, 	0},
/* 0xc2 */ {NULL, 	0},
/* 0xc3 */ {NULL, 	0},
/* 0xc4 */ {NULL, 	0},
/* 0xc5 */ {NULL, 	0},
/* 0xc6 */ {NULL, 	0},
/* 0xc7 */ {NULL, 	0},
/* 0xc8 */ {NULL, 	0},
/* 0xc9 */ {NULL, 	0},
/* 0xca */ {NULL, 	0},
/* 0xcb */ {NULL, 	0},
/* 0xcc */ {NULL, 	0},
/* 0xcd */ {NULL, 	0},
/* 0xce */ {NULL, 	0},
/* 0xcf */ {NULL, 	0},
/* 0xd0 */ {NULL, 	0},
/* 0xd1 */ {NULL, 	0},
/* 0xd2 */ {NULL, 	0},
/* 0xd3 */ {NULL, 	0},
/* 0xd4 */ {NULL, 	0},
/* 0xd5 */ {NULL, 	0},
/* 0xd6 */ {NULL, 	0},
/* 0xd7 */ {NULL, 	0},
/* 0xd8 */ {NULL, 	0},
/* 0xd9 */ {NULL, 	0},
/* 0xda */ {NULL, 	0},
/* 0xdb */ {NULL, 	0},
/* 0xdc */ {NULL, 	0},
/* 0xdd */ {NULL, 	0},
/* 0xde */ {NULL, 	0},
/* 0xdf */ {NULL, 	0},
/* 0xe0 */ {"load_var_s", 	1},
/* 0xe1 */ {NULL, 	0},
/* 0xe2 */ {NULL, 	0},
/* 0xe3 */ {NULL, 	0},
/* 0xe4 */ {NULL, 	0},
/* 0xe5 */ {NULL, 	0},
/* 0xe6 */ {NULL, 	0},
/* 0xe7 */ {NULL, 	0},
/* 0xe8 */ {NULL, 	0},
/* 0xe9 */ {NULL, 	0},
/* 0xea */ {NULL, 	0},
/* 0xeb */ {NULL, 	0},
/* 0xec */ {NULL, 	0},
/* 0xed */ {NULL, 	0},
/* 0xee */ {NULL, 	0},
/* 0xef */ {NULL, 	0},
/* 0xf0 */ {NULL, 	0},
/* 0xf1 */ {NULL, 	0},
/* 0xf2 */ {NULL, 	0},
/* 0xf3 */ {NULL, 	0},
/* 0xf4 */ {NULL, 	0},
/* 0xf5 */ {NULL, 	0},
/* 0xf6 */ {NULL, 	0},
/* 0xf7 */ {NULL, 	0},
/* 0xf8 */ {NULL, 	0},
/* 0xf9 */ {NULL, 	0},
/* 0xfa */ {NULL, 	0},
/* 0xfb */ {NULL, 	0},
/* 0xfc */ {NULL, 	0},
/* 0xfd */ {NULL, 	0},
/* 0xfe */ {NULL, 	0},
/* 0xff */ {NULL, 	0},
