/* SPDX-License-Identifier:     GPL-2.0+ */
/*
 * (C) Copyright 2021 Rockchip Electronics Co., Ltd
 */
#ifndef __CRYPTO_FIX_TEST_DATA_H__
#define __CRYPTO_FIX_TEST_DATA_H__

const u8 foo_data[] = {
0xa4, 0xd2, 0xe1, 0x0a, 0x80, 0x17, 0x43, 0x67,
0x05, 0x08, 0x07, 0x3d, 0xe3, 0x46, 0x13, 0x15,
0xef, 0x5e, 0xa3, 0xaf, 0x1d, 0x3b, 0x8d, 0x18,
0xa2, 0x30, 0x68, 0x66, 0x78, 0x68, 0x59, 0x2a,
0xb5, 0x29, 0xc1, 0xef, 0xa3, 0x91, 0xc4, 0x1c,
0x55, 0xa8, 0x58, 0x84, 0xd8, 0x4c, 0x2a, 0x0f,
0x60, 0x3b, 0x4f, 0xfc, 0x56, 0x60, 0x88, 0x28,
0xc1, 0x9a, 0x91, 0xbe, 0xae, 0xf3, 0x37, 0x65,
0xfd, 0x65, 0x1d, 0xa1, 0x71, 0x17, 0x3b, 0xbd,
0x2c, 0x84, 0x3d, 0xcc, 0x2e, 0x7b, 0xff, 0x13,
0x82, 0xed, 0x0e, 0x6b, 0x4e, 0x5b, 0xc8, 0xae,
0x0b, 0xc7, 0xbe, 0xfa, 0xc0, 0xc6, 0xa5, 0xee,
0x99, 0xbf, 0x2e, 0xb0, 0x55, 0x0d, 0xb8, 0xc6,
0x4c, 0x28, 0xb2, 0x1d, 0xd0, 0x58, 0x57, 0xbd,
0x78, 0x21, 0x32, 0xef, 0xf5, 0xaa, 0x8c, 0x41,
0x7c, 0x99, 0x6f, 0xac, 0xc1, 0x37, 0x72, 0x0f,
0x1d, 0xaa, 0xfc, 0x2c, 0xf2, 0xf5, 0x0b, 0x29,
0xd9, 0xe4, 0x0d, 0xc8, 0xda, 0x29, 0x66, 0xac,
0xa9, 0x1a, 0x3a, 0x19, 0xc4, 0x07, 0x46, 0x1d,
0xe3, 0x85, 0x97, 0xee, 0x23, 0xbe, 0xe9, 0xfc,
};

#if CONFIG_IS_ENABLED(ROCKCHIP_CIPHER)

const u8 des_key[] = {
0x7d, 0xe3, 0x2d, 0x3a, 0x32, 0xde, 0xb2, 0xac,
};

const u8 des_iv[] = {
0x6b, 0x43, 0x2d, 0x3f, 0xe3, 0x83, 0x2f, 0x7d,
};

const u8 des_ecb_cipher[] = {
0x4d, 0x33, 0x53, 0x58, 0x4b, 0xbe, 0x74, 0xfa,
0xcf, 0x89, 0xbf, 0x4d, 0x2f, 0x2c, 0x84, 0x26,
0x7f, 0x09, 0xe4, 0x44, 0xf5, 0x22, 0x69, 0x94,
0x0a, 0x58, 0xa3, 0xe9, 0x9d, 0xb5, 0xf5, 0x30,
0x27, 0xff, 0xee, 0xb6, 0x1a, 0xe6, 0x8e, 0xde,
0x3e, 0x02, 0x2b, 0xf1, 0xfa, 0xab, 0x91, 0x13,
0x0e, 0xac, 0x02, 0xd8, 0x01, 0x16, 0xb2, 0x61,
0x6a, 0x57, 0xe7, 0xbb, 0xf5, 0x9a, 0x77, 0x81,
0x3a, 0x22, 0xdb, 0x47, 0xd2, 0xe7, 0x3a, 0xe2,
0x64, 0x6f, 0x76, 0xa0, 0x79, 0xe9, 0x03, 0x04,
0xd9, 0xd4, 0x71, 0x7f, 0xb5, 0x52, 0x55, 0x6a,
0xcf, 0xe5, 0x84, 0xc3, 0x13, 0x3e, 0x41, 0xaa,
0xbb, 0x6b, 0xfa, 0x0f, 0xfd, 0x1f, 0xdf, 0x0d,
0xe8, 0x79, 0xa4, 0x48, 0x89, 0x07, 0x84, 0x50,
0x21, 0x7e, 0x40, 0x3b, 0xdd, 0x9e, 0xe4, 0x34,
0xef, 0xea, 0x6c, 0x7d, 0x91, 0xc3, 0x7a, 0xd8,
0x9a, 0x52, 0xfa, 0x51, 0xe8, 0xd6, 0x3b, 0x52,
0x07, 0xb0, 0x7a, 0xc6, 0x18, 0x90, 0x53, 0x6b,
0x2d, 0x89, 0x3c, 0x27, 0x98, 0x27, 0x6b, 0x51,
0x94, 0x4f, 0xaa, 0x02, 0xa2, 0xb7, 0x54, 0x67,
};

const u8 des_cbc_cipher[] = {
0xf0, 0x59, 0x44, 0x2d, 0xca, 0xd1, 0x0c, 0xb6,
0x83, 0x15, 0xfa, 0x05, 0x2f, 0x4e, 0x22, 0xb0,
0xbf, 0x79, 0x86, 0x5a, 0x13, 0xa1, 0xe6, 0xcd,
0xdf, 0xdf, 0x77, 0xa4, 0xec, 0xdd, 0x13, 0x04,
0xdf, 0x55, 0x59, 0xaa, 0x19, 0x70, 0x39, 0xe7,
0xc1, 0xd6, 0xe0, 0x58, 0xb4, 0x62, 0xf3, 0xbe,
0xf1, 0xbc, 0xa0, 0x10, 0x17, 0x7d, 0x4b, 0x75,
0x61, 0xb1, 0x06, 0x0f, 0x3d, 0x1a, 0x35, 0x2d,
0x18, 0x87, 0x1c, 0xe1, 0x21, 0x2d, 0x72, 0x65,
0x49, 0x31, 0x70, 0x93, 0xbe, 0x1f, 0x2f, 0xcc,
0xa8, 0xf0, 0x58, 0x91, 0x38, 0x1a, 0x03, 0x88,
0x7b, 0xbd, 0x4c, 0xf8, 0xa6, 0xbe, 0x5e, 0xf6,
0x98, 0x7a, 0xd3, 0xbd, 0x1e, 0x1a, 0x74, 0xf5,
0x26, 0x29, 0xe1, 0xe2, 0xdc, 0x88, 0xcc, 0xb0,
0x86, 0x64, 0x7a, 0x48, 0x8c, 0x80, 0xd3, 0xdb,
0x75, 0x7b, 0xdb, 0x18, 0xa3, 0xbd, 0x70, 0x4c,
0xf7, 0xb4, 0x44, 0x03, 0x88, 0x7e, 0xb5, 0x8c,
0xcb, 0x8b, 0x0c, 0x2c, 0xe4, 0xb9, 0xbb, 0x5d,
0x67, 0x69, 0x4f, 0x6a, 0x92, 0xfd, 0xb8, 0xc0,
0x1b, 0x27, 0x11, 0xdf, 0x37, 0xf1, 0x43, 0x49,
};

const u8 des_cfb_cipher[] = {
0x07, 0x63, 0xdc, 0xf5, 0x99, 0x4d, 0x69, 0x12,
0xd5, 0x1a, 0x6e, 0x9f, 0xba, 0x29, 0x44, 0x49,
0x64, 0x6e, 0xf5, 0x04, 0x10, 0xd5, 0x3c, 0x0b,
0xd1, 0x01, 0x14, 0xe5, 0xe6, 0xd2, 0xef, 0xa2,
0xe6, 0x73, 0xff, 0x0a, 0xff, 0x73, 0xa4, 0x48,
0x9d, 0x3e, 0x15, 0xbc, 0xfd, 0x76, 0xd7, 0x1c,
0x54, 0x8e, 0xde, 0xb3, 0x5c, 0xd8, 0xee, 0x3b,
0x7e, 0x7e, 0xa3, 0x4f, 0x2d, 0xe9, 0x4d, 0xcc,
0x25, 0x12, 0xa0, 0xc6, 0x56, 0x3d, 0x98, 0x44,
0x0b, 0xcf, 0x12, 0x88, 0xa2, 0x7a, 0x7f, 0x28,
0xb0, 0x3a, 0x5d, 0x3b, 0xc4, 0xcf, 0x07, 0x0c,
0x30, 0xa2, 0x1b, 0x3a, 0x69, 0x43, 0xee, 0x31,
0x2b, 0xf4, 0x15, 0x95, 0x66, 0x3b, 0x38, 0x1f,
0xc1, 0xed, 0xc3, 0xb8, 0x3d, 0xd3, 0xef, 0x4b,
0x93, 0x44, 0x05, 0xcc, 0xb6, 0x19, 0x59, 0x55,
0x65, 0x72, 0x6d, 0x77, 0x7b, 0x18, 0xe8, 0xb7,
0x2d, 0x24, 0x1e, 0xde, 0x16, 0xe2, 0xa4, 0xfe,
0x11, 0x3b, 0xf3, 0x93, 0xa4, 0xbb, 0xcc, 0xbc,
0x58, 0x8a, 0x31, 0x20, 0x7c, 0xcc, 0x15, 0xdc,
0xa3, 0x53, 0x43, 0x22, 0xb9, 0xce, 0xa7, 0x35,
};

const u8 des_ofb_cipher[] = {
0x07, 0x63, 0xdc, 0xf5, 0x99, 0x4d, 0x69, 0x12,
0x01, 0xa2, 0xbf, 0x0d, 0x29, 0xb1, 0x06, 0x40,
0xb2, 0x90, 0xe0, 0xa3, 0x73, 0x58, 0xc9, 0x4a,
0x2e, 0x9b, 0x80, 0xc7, 0xe3, 0x87, 0xc2, 0x68,
0x4f, 0x2d, 0x18, 0x21, 0x33, 0x4e, 0xf3, 0xd9,
0x88, 0xb9, 0x5c, 0x07, 0xf0, 0x16, 0x7b, 0x7e,
0xf8, 0x0c, 0x01, 0xfc, 0xaf, 0x27, 0x52, 0x63,
0xcb, 0x28, 0x93, 0x4c, 0xe1, 0x92, 0x36, 0x1c,
0x0d, 0x4f, 0xdf, 0x2e, 0x11, 0x7b, 0x89, 0xce,
0xcf, 0x05, 0x05, 0x9d, 0x93, 0x13, 0xbc, 0xde,
0x22, 0xde, 0xd9, 0x77, 0x75, 0x79, 0x22, 0x90,
0x6e, 0x91, 0x78, 0xf2, 0x86, 0xb3, 0x2f, 0xc2,
0x00, 0x30, 0x14, 0xc9, 0xbb, 0x92, 0xe8, 0x0a,
0xd6, 0x84, 0x26, 0xec, 0x75, 0x4e, 0x77, 0x3e,
0x68, 0xbe, 0xca, 0xbd, 0xcb, 0x0b, 0xeb, 0x56,
0x17, 0x95, 0xab, 0xea, 0x47, 0xf2, 0x5a, 0x3e,
0x2e, 0xaa, 0xb6, 0xd3, 0x7a, 0x5f, 0x58, 0xcc,
0xb4, 0x4f, 0x7f, 0x9a, 0xad, 0x30, 0xcb, 0xe7,
0x17, 0x16, 0x1b, 0x96, 0x89, 0xe9, 0x51, 0xde,
0xa6, 0xa0, 0x79, 0x2f, 0xc3, 0xe3, 0x53, 0x8f,
};

const u8 tdes_key[] = {
0x33, 0x1f, 0xc4, 0x23, 0xb4, 0xc5, 0xb5, 0xc4,
0xa1, 0x66, 0x90, 0x19, 0x63, 0x9b, 0xaf, 0xc3,
0xae, 0xb3, 0x71, 0x84, 0x69, 0x17, 0x50, 0x02,
};

const u8 tdes_iv[] = {
0x24, 0xbc, 0x96, 0x9d, 0x3e, 0x35, 0x81, 0x33,
};

const u8 tdes_ecb_cipher[] = {
0xc8, 0xf9, 0xff, 0x99, 0x16, 0xbd, 0xe1, 0x6a,
0xfb, 0xa3, 0xce, 0x26, 0x71, 0x1a, 0xef, 0x9b,
0x99, 0x16, 0x17, 0xc2, 0x36, 0xe7, 0x80, 0xda,
0x8d, 0xdb, 0x6a, 0xb1, 0x0b, 0xae, 0x95, 0x03,
0x23, 0x8f, 0xde, 0xe8, 0x0d, 0xfa, 0x0d, 0xd3,
0x6b, 0x1c, 0xf0, 0x05, 0x38, 0x37, 0xd7, 0xb9,
0x49, 0x96, 0x3c, 0x53, 0x3b, 0xe8, 0x87, 0x53,
0xae, 0xc5, 0x17, 0x76, 0xde, 0xbe, 0x21, 0x94,
0xc1, 0xfd, 0x87, 0xf0, 0x08, 0x1f, 0xf3, 0x1e,
0x00, 0x88, 0x8a, 0xfe, 0x33, 0xf5, 0x2a, 0x5d,
0x12, 0xed, 0xf4, 0xa8, 0x42, 0x30, 0x45, 0x68,
0x60, 0x3c, 0xb6, 0xdd, 0xab, 0xd9, 0x6a, 0xc9,
0x35, 0x7f, 0xdc, 0x6b, 0xab, 0xbc, 0x09, 0x9f,
0xfb, 0xc7, 0xd1, 0xec, 0xcd, 0xa3, 0x2a, 0xa3,
0x2d, 0xa0, 0xb7, 0x19, 0xda, 0x28, 0x38, 0xc3,
0xed, 0x56, 0x9b, 0xbf, 0xd8, 0x07, 0x14, 0x3b,
0x95, 0x47, 0x65, 0x66, 0x17, 0x1a, 0xfd, 0x5f,
0x0f, 0x8d, 0xe9, 0x4e, 0x48, 0x24, 0x9d, 0xae,
0x85, 0xc8, 0xd4, 0xa7, 0x09, 0xf5, 0x08, 0x2d,
0x44, 0x25, 0x75, 0x96, 0x7e, 0x7b, 0xfb, 0xca,
};

const u8 tdes_cbc_cipher[] = {
0x60, 0x77, 0x36, 0xdb, 0xcc, 0x60, 0xe3, 0xcc,
0x62, 0x43, 0x74, 0x78, 0xb1, 0x85, 0xb4, 0x08,
0x4f, 0x37, 0x25, 0x2e, 0xd9, 0x85, 0x48, 0x15,
0x34, 0x42, 0x07, 0x46, 0x4d, 0xbb, 0xc3, 0xed,
0xd5, 0x9d, 0xef, 0x43, 0x33, 0x43, 0x58, 0xd7,
0x10, 0x52, 0x0b, 0x15, 0xae, 0xe4, 0xba, 0xf6,
0xdf, 0xe6, 0xc6, 0x5b, 0x7c, 0x7a, 0x49, 0xc0,
0xab, 0xa6, 0x2a, 0x05, 0xed, 0x31, 0x94, 0x43,
0x50, 0x03, 0x1a, 0x75, 0x92, 0x67, 0x93, 0x1b,
0xb0, 0xa5, 0xcd, 0xb6, 0xe8, 0x74, 0xcf, 0xa4,
0xe0, 0x02, 0x12, 0xe0, 0xe7, 0x66, 0x45, 0xac,
0x7d, 0x43, 0xdb, 0x83, 0xcc, 0x97, 0xa7, 0x77,
0x0d, 0x38, 0x76, 0x9f, 0x27, 0x8e, 0xaf, 0x4a,
0x08, 0xc3, 0x90, 0x4a, 0x8b, 0xa5, 0x7e, 0xe2,
0xae, 0xb2, 0x25, 0xa4, 0xcb, 0xc4, 0xe9, 0xf1,
0xfd, 0x8b, 0xcc, 0xc2, 0xb2, 0x79, 0xec, 0xca,
0x3e, 0x1a, 0xd8, 0x92, 0x8f, 0x7e, 0x31, 0x79,
0x9d, 0x3b, 0xb7, 0xaf, 0xb6, 0x44, 0x67, 0xdc,
0xe4, 0xea, 0xbb, 0x3f, 0xfa, 0x30, 0x21, 0x93,
0x4d, 0x46, 0xe8, 0xd5, 0xf6, 0x9d, 0x19, 0x14,
};

const u8 tdes_cfb_cipher[] = {
0x9b, 0x0e, 0x80, 0x04, 0x7e, 0x40, 0xf5, 0x4b,
0xe0, 0x7b, 0x36, 0x7d, 0x70, 0x6e, 0xfe, 0x2e,
0x35, 0xd6, 0x37, 0xe4, 0x6b, 0x70, 0x43, 0x8f,
0x51, 0xe2, 0x6b, 0x33, 0x0c, 0x3b, 0x71, 0xd8,
0x66, 0xe2, 0x41, 0x18, 0x1a, 0x8d, 0x5e, 0xf0,
0x9a, 0xc2, 0x7e, 0x9b, 0x83, 0xa5, 0x8e, 0x84,
0x09, 0x9e, 0xe4, 0xf5, 0xe4, 0x46, 0x44, 0x03,
0x74, 0xb6, 0xbe, 0x6b, 0xda, 0x2b, 0x89, 0xce,
0x85, 0xc6, 0xce, 0x22, 0x30, 0xa2, 0xf8, 0x5e,
0x8c, 0x7d, 0x8c, 0xcd, 0xb6, 0xef, 0x0e, 0xec,
0x76, 0x2e, 0xbe, 0x90, 0x08, 0x30, 0x34, 0x71,
0xf3, 0xa7, 0x76, 0x4b, 0xdf, 0x0f, 0x74, 0x21,
0x21, 0xc1, 0xa4, 0x9b, 0x9c, 0xc2, 0x1d, 0x78,
0x04, 0x31, 0xed, 0xc8, 0x88, 0x64, 0x31, 0x81,
0x2c, 0x5d, 0x07, 0x01, 0x56, 0xfe, 0x64, 0x65,
0x19, 0xa6, 0x9a, 0xf3, 0x21, 0xe7, 0xd6, 0x53,
0x46, 0x2a, 0x33, 0x19, 0x29, 0x9a, 0x9e, 0x4b,
0xfc, 0xd1, 0xfe, 0xca, 0xa3, 0xfa, 0x28, 0x8c,
0x9c, 0x5d, 0xbe, 0xaa, 0x20, 0xeb, 0x85, 0xc1,
0xb7, 0xed, 0xfd, 0x05, 0xda, 0x0d, 0x2c, 0x36,
};

const u8 tdes_ofb_cipher[] = {
0x9b, 0x0e, 0x80, 0x04, 0x7e, 0x40, 0xf5, 0x4b,
0x9a, 0x31, 0xa5, 0xca, 0xd5, 0xac, 0xf9, 0x16,
0x4c, 0x63, 0x07, 0xff, 0x49, 0x43, 0x97, 0x5b,
0xe6, 0x2d, 0xae, 0xbf, 0x7d, 0x86, 0x85, 0x6d,
0xac, 0x5f, 0xd0, 0x9e, 0xb0, 0xf6, 0x43, 0x66,
0x81, 0xb5, 0x80, 0xc4, 0xa1, 0x52, 0x00, 0xe7,
0x48, 0xb4, 0xb1, 0xea, 0x0b, 0x80, 0x84, 0xc2,
0xcd, 0x06, 0x53, 0x04, 0x76, 0x0f, 0xd7, 0x88,
0x43, 0x69, 0x72, 0xf2, 0x8d, 0xb5, 0xb1, 0xc5,
0x74, 0x2f, 0x35, 0x53, 0xcc, 0x87, 0xfa, 0xa4,
0xb2, 0xe7, 0x58, 0x21, 0xc9, 0xd9, 0x57, 0x34,
0x5f, 0x5f, 0x24, 0xe4, 0x05, 0xc6, 0xbd, 0x63,
0xfd, 0xcf, 0x91, 0xd0, 0xcd, 0x56, 0x43, 0x54,
0xd6, 0x5c, 0x6d, 0xac, 0xcb, 0xe5, 0x59, 0x35,
0x21, 0xf8, 0x57, 0x15, 0x34, 0x46, 0x4e, 0x85,
0xdb, 0x9d, 0x00, 0xb9, 0xca, 0xee, 0x46, 0x32,
0x7c, 0x46, 0xe2, 0xb1, 0x3d, 0x8d, 0xef, 0xe0,
0x6a, 0xf0, 0x73, 0x7c, 0xaf, 0x28, 0x39, 0xa1,
0xed, 0x4f, 0xa8, 0xee, 0x18, 0x10, 0x40, 0x69,
0x36, 0x1f, 0x40, 0xc4, 0x22, 0xfc, 0x40, 0x73,
};

const u8 aes_key[] = {
0xb2, 0xc2, 0x1c, 0xf5, 0xcc, 0xe2, 0xb3, 0xda,
0x3c, 0xd6, 0xaf, 0x73, 0x15, 0x45, 0x7f, 0x49,
0x32, 0xe9, 0x42, 0x4f, 0x6b, 0x43, 0x7d, 0x77,
0x38, 0x8c, 0x19, 0xf8, 0x36, 0x63, 0x9a, 0xfd,
};

const u8 aes_twk_key[] = {
0x93, 0x73, 0xbe, 0xab, 0x15, 0xe6, 0xa5, 0xd7,
0xc0, 0x0a, 0xbb, 0xad, 0x9b, 0x29, 0x0c, 0x34,
0x48, 0x5c, 0x38, 0x45, 0x26, 0xa8, 0x72, 0xd7,
0x49, 0x54, 0xbf, 0x41, 0x24, 0xe8, 0x97, 0xab,
};

const u8 aes_iv[] = {
0x80, 0xb8, 0x3f, 0x22, 0x2f, 0x7d, 0x1f, 0x1a,
0xc6, 0xc1, 0x19, 0x92, 0x02, 0xcc, 0x7a, 0x12,
};

const u8 aes_ecb_cipher[] = {
0x5c, 0xd6, 0xbb, 0xc3, 0x49, 0x36, 0x47, 0x2d,
0x58, 0xfc, 0xd9, 0x3f, 0x7d, 0xc1, 0x58, 0xc0,
0x6e, 0x09, 0x40, 0xb1, 0x5a, 0x3a, 0x1a, 0x27,
0x3a, 0x22, 0xbb, 0xf5, 0x51, 0xed, 0x05, 0x0b,
0x7f, 0x57, 0xa6, 0xf8, 0x92, 0xe5, 0xc5, 0xfc,
0xff, 0x1b, 0x92, 0x07, 0x24, 0xbe, 0x93, 0xed,
0x64, 0x2e, 0x31, 0xb2, 0x8a, 0x3c, 0xd5, 0xaa,
0xf5, 0xd9, 0xb6, 0x3e, 0x7d, 0xce, 0xae, 0xd1,
0xeb, 0xfa, 0x1c, 0xf3, 0x8f, 0x4b, 0xc3, 0xc7,
0xc8, 0x7b, 0x84, 0x70, 0x51, 0xd6, 0xaf, 0xa8,
0x94, 0x02, 0x39, 0x26, 0x17, 0xd9, 0x2d, 0x27,
0x7b, 0xa9, 0x4b, 0x9b, 0xc2, 0x58, 0xa5, 0x48,
0x7f, 0xd1, 0x82, 0xf7, 0x34, 0x06, 0xf6, 0x88,
0xb1, 0xc9, 0x9c, 0xbe, 0x40, 0xf1, 0x69, 0xd0,
0xd1, 0x23, 0x1c, 0x1b, 0x94, 0x31, 0x64, 0x6b,
0xdc, 0x28, 0xab, 0x00, 0xaf, 0x2a, 0xeb, 0xb3,
0x28, 0xb4, 0x59, 0x8a, 0x57, 0x98, 0xdb, 0xdb,
0xcf, 0x41, 0x85, 0x7f, 0x00, 0xd0, 0xea, 0x67,
0x47, 0x8f, 0x19, 0xc6, 0x6e, 0x5b, 0x58, 0x02,
0x7d, 0xb0, 0xd9, 0x4c, 0xb5, 0x4b, 0xed, 0xb8,
};

const u8 aes_cbc_cipher[] = {
0x52, 0x3e, 0x1b, 0x92, 0xd3, 0x3c, 0x9c, 0xbe,
0x07, 0xdb, 0x4b, 0xb0, 0x80, 0xd0, 0x76, 0x2f,
0xc7, 0x0a, 0x51, 0x9e, 0xe5, 0x64, 0x74, 0x07,
0x05, 0x3c, 0x2d, 0x12, 0x8c, 0x5c, 0x12, 0x78,
0xf1, 0x0b, 0x2c, 0xed, 0x9c, 0x4b, 0xbd, 0x96,
0x3a, 0x0b, 0x6a, 0x76, 0x98, 0x72, 0x7a, 0x2e,
0x15, 0x6d, 0x9d, 0xb8, 0xaa, 0x32, 0xc0, 0xfb,
0x65, 0x2a, 0x5a, 0x3c, 0xa7, 0xff, 0xfd, 0x33,
0x5c, 0x98, 0xcf, 0x86, 0x22, 0x2e, 0xdb, 0x52,
0x93, 0xd5, 0x0b, 0xa6, 0xf2, 0x4b, 0x80, 0x24,
0x6b, 0x3f, 0x54, 0xc4, 0x7e, 0xf8, 0x90, 0x22,
0xc2, 0xf7, 0x7f, 0xcf, 0xf2, 0x5d, 0x4e, 0x50,
0xf1, 0x5b, 0x8c, 0x79, 0x49, 0xbc, 0x26, 0xa9,
0x1f, 0xea, 0x76, 0x7f, 0xd5, 0x14, 0x2b, 0xab,
0x2b, 0x3a, 0xc7, 0x45, 0xaf, 0x39, 0x3d, 0xc4,
0x13, 0x9f, 0x2f, 0x34, 0x8e, 0xa9, 0xec, 0xa5,
0x95, 0xaf, 0x2c, 0xd4, 0x73, 0x9d, 0x2a, 0x89,
0xb4, 0x55, 0x39, 0x6d, 0x89, 0x3c, 0xdf, 0xae,
0x01, 0xab, 0x62, 0x3c, 0x98, 0x88, 0x07, 0x9e,
0x1d, 0x81, 0x17, 0x08, 0xf7, 0xdd, 0x70, 0x57,
};

const u8 aes_cfb_cipher[] = {
0x7e, 0x58, 0x16, 0xfa, 0xae, 0xf2, 0xd6, 0xd9,
0xe8, 0x72, 0x0b, 0x60, 0x2e, 0x07, 0xe7, 0xe1,
0x63, 0xbd, 0x24, 0xf2, 0xee, 0x2b, 0x6c, 0xcf,
0xf2, 0x56, 0x27, 0xe2, 0x5c, 0x28, 0xcb, 0xc0,
0xfa, 0xf9, 0x11, 0x16, 0xf8, 0xa1, 0x62, 0xd9,
0x72, 0xe5, 0x41, 0x28, 0xfa, 0x4a, 0xc0, 0xa0,
0x26, 0x3e, 0x24, 0x27, 0x25, 0xd3, 0x5e, 0x40,
0xde, 0x4c, 0xd7, 0x36, 0xac, 0xa9, 0x65, 0x78,
0x4e, 0x1e, 0x5f, 0xb3, 0x14, 0x85, 0x00, 0x68,
0xdc, 0x3c, 0xa7, 0x88, 0xe1, 0x1a, 0x61, 0xa7,
0xae, 0xa6, 0xdd, 0xb2, 0xd6, 0x93, 0x76, 0xe3,
0xe5, 0x32, 0xbe, 0xc6, 0x21, 0x50, 0xda, 0xae,
0xa1, 0xde, 0x21, 0x1c, 0xca, 0x7e, 0xeb, 0x65,
0x22, 0xd3, 0x7d, 0x01, 0x39, 0xf4, 0x6b, 0xfe,
0x84, 0x96, 0x41, 0x4b, 0x35, 0x51, 0x05, 0xe4,
0xc1, 0x9a, 0xaa, 0xa7, 0x49, 0xc7, 0xfa, 0xca,
0xfc, 0x35, 0xe2, 0xf3, 0xae, 0x5b, 0x80, 0xae,
0x42, 0x7c, 0x07, 0x3a, 0xed, 0x67, 0x81, 0x1f,
0x9a, 0x43, 0xc7, 0xc7, 0x91, 0xbf, 0xdf, 0x8c,
0x6c, 0xe2, 0xb6, 0x5b, 0xa5, 0x93, 0x69, 0x08,
};

const u8 aes_ofb_cipher[] = {
0x7e, 0x58, 0x16, 0xfa, 0xae, 0xf2, 0xd6, 0xd9,
0xe8, 0x72, 0x0b, 0x60, 0x2e, 0x07, 0xe7, 0xe1,
0x7c, 0xaa, 0xb3, 0x1b, 0x1c, 0x20, 0xc6, 0xea,
0x02, 0x49, 0xe1, 0xe3, 0x77, 0xa0, 0xde, 0x76,
0x83, 0x63, 0x73, 0x92, 0x0d, 0x2d, 0x41, 0xe7,
0x3b, 0x00, 0x6b, 0x91, 0xf2, 0x05, 0x63, 0xbe,
0xe6, 0xd5, 0x46, 0xe9, 0x8b, 0xeb, 0x8d, 0x77,
0x8e, 0xf2, 0x14, 0x95, 0xfb, 0x99, 0x7e, 0xf0,
0xb1, 0x80, 0xd0, 0x00, 0x00, 0x92, 0x8f, 0xe2,
0x62, 0xa5, 0x21, 0x39, 0x04, 0x02, 0x16, 0x22,
0x2f, 0xbb, 0x40, 0xdd, 0xfa, 0xfd, 0xb1, 0xb4,
0x5b, 0x3c, 0x5a, 0xba, 0x9e, 0xd1, 0xc7, 0x60,
0xb5, 0xc3, 0x54, 0x7b, 0x9f, 0xaa, 0x31, 0x4b,
0x91, 0x0a, 0xf5, 0x0c, 0x39, 0x25, 0x2b, 0x77,
0x61, 0xf6, 0x88, 0xf8, 0xa9, 0x18, 0x54, 0x47,
0xe9, 0x21, 0x3b, 0x69, 0xe0, 0x11, 0x21, 0x43,
0x0e, 0xe4, 0x9f, 0xc2, 0x83, 0x0a, 0x33, 0x80,
0xb8, 0x07, 0x98, 0xba, 0xd5, 0xee, 0x63, 0x16,
0x31, 0x2c, 0x1b, 0xdc, 0xd0, 0xb8, 0xcf, 0x0c,
0xc5, 0x3f, 0x5b, 0x4a, 0x1f, 0x1b, 0x01, 0x39,
};

const u8 aes_ctr_cipher[] = {
0x7e, 0x58, 0x16, 0xfa, 0xae, 0xf2, 0xd6, 0xd9,
0xe8, 0x72, 0x0b, 0x60, 0x2e, 0x07, 0xe7, 0xe1,
0x6d, 0xd2, 0xc5, 0x3c, 0x6b, 0x01, 0x48, 0x0b,
0x63, 0x4c, 0x00, 0x3f, 0x9a, 0xc5, 0x67, 0xaf,
0x7f, 0x00, 0x93, 0xd6, 0x48, 0xcf, 0xba, 0x2e,
0x2f, 0xa6, 0x1f, 0x1c, 0x73, 0xb8, 0x6a, 0x42,
0x7f, 0x0d, 0x83, 0x16, 0x60, 0xdb, 0x82, 0x36,
0xa1, 0x4f, 0xe2, 0x08, 0x4c, 0xd9, 0x2e, 0xdf,
0x12, 0x80, 0x71, 0x3f, 0x12, 0x8a, 0x5e, 0x8c,
0xf5, 0xfc, 0x8b, 0xf3, 0x15, 0x92, 0x76, 0x11,
0x29, 0x26, 0xd8, 0x6f, 0xe0, 0x52, 0xd0, 0x2a,
0x9c, 0x50, 0x08, 0x79, 0x3d, 0x0e, 0x8c, 0x5c,
0x2f, 0xb6, 0xff, 0x24, 0x44, 0x42, 0x53, 0xdd,
0xaa, 0x7f, 0x19, 0x1d, 0xd4, 0x06, 0xda, 0xa8,
0xd2, 0x40, 0x07, 0xf6, 0x0a, 0xb6, 0x3c, 0x21,
0xdf, 0x5d, 0x3c, 0x9c, 0x35, 0x26, 0xea, 0x2c,
0x14, 0x46, 0x76, 0xff, 0xc4, 0xee, 0x26, 0x7a,
0x88, 0xde, 0x29, 0x2a, 0x48, 0x04, 0xb7, 0xaa,
0x52, 0x4c, 0x52, 0xed, 0x64, 0xd4, 0x75, 0xe3,
0xda, 0xa3, 0x42, 0xf4, 0xb8, 0x39, 0x78, 0x3b,
};

const u8 aes_cts_cipher[] = {
0x52, 0x3e, 0x1b, 0x92, 0xd3, 0x3c, 0x9c, 0xbe,
0x07, 0xdb, 0x4b, 0xb0, 0x80, 0xd0, 0x76, 0x2f,
0xc7, 0x0a, 0x51, 0x9e, 0xe5, 0x64, 0x74, 0x07,
0x05, 0x3c, 0x2d, 0x12, 0x8c, 0x5c, 0x12, 0x78,
0xf1, 0x0b, 0x2c, 0xed, 0x9c, 0x4b, 0xbd, 0x96,
0x3a, 0x0b, 0x6a, 0x76, 0x98, 0x72, 0x7a, 0x2e,
0x15, 0x6d, 0x9d, 0xb8, 0xaa, 0x32, 0xc0, 0xfb,
0x65, 0x2a, 0x5a, 0x3c, 0xa7, 0xff, 0xfd, 0x33,
0x5c, 0x98, 0xcf, 0x86, 0x22, 0x2e, 0xdb, 0x52,
0x93, 0xd5, 0x0b, 0xa6, 0xf2, 0x4b, 0x80, 0x24,
0x6b, 0x3f, 0x54, 0xc4, 0x7e, 0xf8, 0x90, 0x22,
0xc2, 0xf7, 0x7f, 0xcf, 0xf2, 0x5d, 0x4e, 0x50,
0xf1, 0x5b, 0x8c, 0x79, 0x49, 0xbc, 0x26, 0xa9,
0x1f, 0xea, 0x76, 0x7f, 0xd5, 0x14, 0x2b, 0xab,
0x2b, 0x3a, 0xc7, 0x45, 0xaf, 0x39, 0x3d, 0xc4,
0x13, 0x9f, 0x2f, 0x34, 0x8e, 0xa9, 0xec, 0xa5,
0x01, 0xab, 0x62, 0x3c, 0x98, 0x88, 0x07, 0x9e,
0x1d, 0x81, 0x17, 0x08, 0xf7, 0xdd, 0x70, 0x57,
0x95, 0xaf, 0x2c, 0xd4, 0x73, 0x9d, 0x2a, 0x89,
0xb4, 0x55, 0x39, 0x6d, 0x89, 0x3c, 0xdf, 0xae,
};

const unsigned char aes_xts_cipher[] = {
0x8f, 0xe6, 0xeb, 0x96, 0xc8, 0x97, 0x63, 0x6f,
0x6d, 0xdb, 0x9e, 0x1a, 0x78, 0xea, 0x69, 0x0a,
0x52, 0x26, 0xe3, 0x63, 0x15, 0xab, 0xe7, 0x11,
0xaf, 0x18, 0x15, 0x57, 0x7a, 0xd1, 0xe2, 0xac,
0x43, 0x89, 0x95, 0x02, 0x19, 0xe0, 0x68, 0xf4,
0x4b, 0x81, 0x3b, 0x5d, 0x9f, 0x68, 0x21, 0x56,
0x30, 0x86, 0x73, 0xc5, 0xc8, 0x05, 0xeb, 0x86,
0xef, 0x18, 0xe9, 0x49, 0xc1, 0xa8, 0x7f, 0x14,
0xbc, 0x57, 0x38, 0x8d, 0x16, 0x85, 0x26, 0x1f,
0x89, 0xab, 0xb8, 0xa9, 0xbd, 0x87, 0x9c, 0xd7,
0xa1, 0x0d, 0x44, 0x6a, 0x09, 0xd9, 0x19, 0xb7,
0x8e, 0x2a, 0xde, 0xbf, 0x53, 0x35, 0x28, 0x26,
0x1e, 0x56, 0x2d, 0x76, 0x55, 0x1a, 0xf9, 0x03,
0xfe, 0x75, 0x5c, 0xd0, 0x70, 0x83, 0x96, 0x6d,
0x28, 0x7d, 0x22, 0x97, 0x04, 0xf9, 0x0c, 0x9f,
0x96, 0x99, 0xa5, 0x6b, 0xae, 0x9d, 0x99, 0x95,
0x16, 0x4b, 0xf9, 0xcb, 0xd7, 0xb0, 0x9f, 0x59,
0xce, 0x87, 0xe2, 0x9d, 0x4d, 0x94, 0x6b, 0x56,
0x44, 0x2a, 0x05, 0x15, 0x31, 0xf5, 0xca, 0xba,
0x6c, 0xe5, 0x9d, 0x29, 0x14, 0x5f, 0x76, 0x90,
};

const u8 sm4_key[] = {
	0x8e, 0x30, 0x09, 0x79, 0xae, 0xb3, 0x75, 0x13,
	0xab, 0x03, 0x4d, 0x11, 0x62, 0xe0, 0xfe, 0x03,
};

const u8 sm4_twk_key[] = {
	0xf3, 0x38, 0x97, 0xb9, 0xeb, 0x95, 0x7a, 0xf5,
	0xed, 0x72, 0xd2, 0x6e, 0xfc, 0xf7, 0xd6, 0xa7,
};

const u8 sm4_iv[] = {
	0x48, 0x5c, 0x38, 0x45, 0x26, 0xa8, 0x72, 0xd7,
	0x49, 0x54, 0xbf, 0x41, 0x24, 0xe8, 0x97, 0xab,
};

const u8 sm4_ecb_cipher[] = {
	0xbb, 0x4f, 0x2c, 0xa0, 0x5b, 0x78, 0x62, 0xc1,
	0xad, 0xcf, 0xb1, 0x2b, 0x64, 0x95, 0xc8, 0xa8,
	0xca, 0xa0, 0x62, 0xc5, 0xf4, 0x38, 0x8f, 0x51,
	0x13, 0x41, 0x59, 0x96, 0xe7, 0x06, 0x71, 0xee,
	0x72, 0xea, 0x87, 0xc3, 0xf7, 0xef, 0x7d, 0x49,
	0xdf, 0xf2, 0xe5, 0x6f, 0x03, 0xeb, 0x4d, 0xca,
	0x25, 0x42, 0x61, 0xee, 0x3f, 0x86, 0x48, 0x9a,
	0xda, 0xc0, 0xcb, 0x88, 0x01, 0x2f, 0xdb, 0xc8,
	0xee, 0x11, 0xa1, 0x98, 0x24, 0x3c, 0xf4, 0x86,
	0x4b, 0x16, 0xf6, 0x5f, 0x91, 0xc6, 0x47, 0x25,
	0xa0, 0x2d, 0x87, 0xb8, 0xbe, 0xdc, 0xd1, 0x55,
	0x92, 0x74, 0x22, 0x5f, 0xbc, 0x97, 0x03, 0x4b,
	0xda, 0x3f, 0x66, 0xd1, 0x22, 0xee, 0x3b, 0xd8,
	0xfc, 0x55, 0x89, 0x80, 0xf7, 0x94, 0xe1, 0x3f,
	0x4c, 0x78, 0xb9, 0x67, 0x35, 0x27, 0xf2, 0x05,
	0x79, 0x59, 0xbd, 0x69, 0xec, 0x03, 0xd4, 0x61,
	0x98, 0xc5, 0x75, 0x77, 0x8d, 0xcd, 0xc9, 0xe4,
	0xa0, 0xe4, 0x2e, 0x9c, 0x55, 0x70, 0xb8, 0x3d,
	0x81, 0xbf, 0x6b, 0xa3, 0x51, 0xb7, 0x41, 0xd3,
	0x3e, 0x51, 0xae, 0xa5, 0x9e, 0x26, 0x71, 0xb1,
};

const u8 sm4_cbc_cipher[] = {
	0x74, 0x79, 0xc4, 0xe5, 0xcc, 0x20, 0x40, 0x8b,
	0x47, 0xdd, 0x90, 0xfb, 0x00, 0x08, 0xbb, 0xce,
	0x6e, 0x18, 0x4b, 0x47, 0x45, 0xab, 0x79, 0x1c,
	0x79, 0x8b, 0xc0, 0xd8, 0xe5, 0x87, 0x97, 0x9f,
	0x2a, 0xa6, 0x77, 0x23, 0xd7, 0x13, 0xb5, 0x9c,
	0x83, 0xd0, 0x6d, 0xb5, 0xa9, 0x2b, 0xa1, 0x27,
	0x68, 0x78, 0xb1, 0x40, 0x82, 0xa1, 0x02, 0xc0,
	0x6f, 0x41, 0xae, 0x74, 0x0f, 0x8f, 0x04, 0xb1,
	0xdc, 0xc3, 0x90, 0x3d, 0x3f, 0x1a, 0x6a, 0xe0,
	0x31, 0x3a, 0x89, 0x74, 0xc3, 0x15, 0x73, 0xb4,
	0x6f, 0xb3, 0x19, 0xab, 0xc1, 0x14, 0x74, 0xb1,
	0x50, 0xdb, 0x70, 0x97, 0x07, 0x80, 0x9c, 0xbb,
	0x2f, 0x2b, 0xaf, 0x92, 0xdf, 0xc1, 0xe6, 0x12,
	0x67, 0x53, 0x74, 0xe5, 0x36, 0x71, 0x88, 0xb6,
	0x5d, 0xf5, 0x88, 0x77, 0xc2, 0x61, 0xab, 0xd4,
	0xd8, 0xa6, 0x1c, 0x08, 0xde, 0x49, 0x0a, 0xe3,
	0xd8, 0x32, 0x21, 0xca, 0xd1, 0xba, 0xfb, 0x9b,
	0x52, 0xde, 0xe7, 0x72, 0x52, 0xd8, 0xa2, 0x7d,
	0x39, 0x7c, 0x71, 0xb3, 0x06, 0x37, 0x3d, 0xb0,
	0xda, 0x51, 0xc2, 0x7e, 0x4e, 0xc5, 0x6e, 0xe1,
};

const u8 sm4_ofb_cipher[] = {
	0x17, 0xb0, 0xac, 0x00, 0x8a, 0x03, 0x6c, 0x7d,
	0x98, 0x0e, 0x09, 0x18, 0x06, 0x85, 0x3e, 0x41,
	0xae, 0x29, 0xbc, 0x78, 0xe2, 0x1b, 0xa9, 0x4b,
	0xa0, 0x9d, 0xc7, 0xaa, 0x8f, 0x00, 0xe7, 0xb1,
	0x1a, 0xff, 0x8a, 0x85, 0xbc, 0xc4, 0xf1, 0xfd,
	0x28, 0xb2, 0xcf, 0xe2, 0x01, 0x4e, 0x52, 0xfd,
	0x2d, 0x1a, 0xdf, 0x5e, 0x37, 0x9e, 0x48, 0x4f,
	0x91, 0xa0, 0x83, 0x8e, 0xcb, 0x74, 0x9b, 0x53,
	0xd1, 0x2b, 0xfe, 0x0a, 0x9d, 0x55, 0x27, 0x59,
	0x98, 0x88, 0xc0, 0x49, 0x68, 0x4e, 0x1b, 0x40,
	0x97, 0x82, 0x62, 0x47, 0x5b, 0x6e, 0x80, 0x52,
	0x18, 0xa6, 0xd3, 0x73, 0x29, 0x53, 0xaa, 0x24,
	0xb0, 0x93, 0xd1, 0x8a, 0xfa, 0x15, 0x46, 0xa7,
	0x37, 0x4a, 0x53, 0x52, 0x1a, 0x6f, 0xc8, 0xb2,
	0x88, 0x4b, 0xa9, 0xf1, 0x6f, 0xdb, 0xb1, 0x80,
	0xf9, 0x32, 0x95, 0xf7, 0x61, 0x3d, 0xf0, 0x1f,
	0xe3, 0x18, 0xb5, 0x03, 0x14, 0x1a, 0x72, 0x4a,
	0xbd, 0xaa, 0x61, 0x30, 0xf0, 0xbd, 0x60, 0xff,
	0x5b, 0x02, 0x0b, 0xe4, 0xfb, 0xae, 0x10, 0x2b,
	0x90, 0x86, 0x74, 0x94, 0x45, 0xf5, 0x3b, 0x4a,
};

const u8 sm4_cfb_cipher[] = {
	0x17, 0xb0, 0xac, 0x00, 0x8a, 0x03, 0x6c, 0x7d,
	0x98, 0x0e, 0x09, 0x18, 0x06, 0x85, 0x3e, 0x41,
	0x6e, 0x04, 0x0d, 0x4d, 0x87, 0x00, 0x36, 0xf3,
	0xb8, 0x96, 0x9f, 0x84, 0x4b, 0x4b, 0x71, 0x21,
	0x3c, 0xf1, 0xad, 0x3f, 0x8c, 0x75, 0xd6, 0xcf,
	0x49, 0xfa, 0xb1, 0xbe, 0x61, 0xa3, 0x46, 0x36,
	0x89, 0x8f, 0x1b, 0x81, 0xd4, 0x04, 0x99, 0x79,
	0x20, 0x29, 0xd6, 0xe2, 0x46, 0x6b, 0x2d, 0xd3,
	0x03, 0xba, 0x52, 0x13, 0xfd, 0x0c, 0x33, 0x15,
	0x4d, 0xa1, 0x36, 0x6a, 0x65, 0xbb, 0xcd, 0x1f,
	0xcc, 0x31, 0xbc, 0x53, 0xff, 0xbc, 0xe4, 0x2c,
	0x5c, 0xc1, 0xbf, 0xcf, 0x7b, 0x17, 0xba, 0x19,
	0xdd, 0x8b, 0x6d, 0x57, 0x4a, 0xbf, 0x9a, 0x4f,
	0xc8, 0x25, 0xee, 0xbb, 0x83, 0x36, 0x3f, 0x41,
	0x7b, 0x01, 0x39, 0xeb, 0x56, 0xfc, 0x0f, 0x4f,
	0xea, 0xe1, 0x7f, 0xc7, 0x9e, 0xa2, 0x11, 0x10,
	0x36, 0x63, 0x51, 0xe9, 0xef, 0x21, 0x65, 0xc6,
	0xd7, 0x67, 0x53, 0xb0, 0xf3, 0x16, 0xa0, 0xe9,
	0xcb, 0x57, 0x2c, 0x85, 0x0c, 0x0e, 0x3b, 0x7c,
	0xc6, 0x01, 0x2e, 0x44, 0xc7, 0x03, 0x07, 0x69,
};

const u8 sm4_cts_cipher[] = {
	0x74, 0x79, 0xc4, 0xe5, 0xcc, 0x20, 0x40, 0x8b,
	0x47, 0xdd, 0x90, 0xfb, 0x00, 0x08, 0xbb, 0xce,
	0x6e, 0x18, 0x4b, 0x47, 0x45, 0xab, 0x79, 0x1c,
	0x79, 0x8b, 0xc0, 0xd8, 0xe5, 0x87, 0x97, 0x9f,
	0x2a, 0xa6, 0x77, 0x23, 0xd7, 0x13, 0xb5, 0x9c,
	0x83, 0xd0, 0x6d, 0xb5, 0xa9, 0x2b, 0xa1, 0x27,
	0x68, 0x78, 0xb1, 0x40, 0x82, 0xa1, 0x02, 0xc0,
	0x6f, 0x41, 0xae, 0x74, 0x0f, 0x8f, 0x04, 0xb1,
	0xdc, 0xc3, 0x90, 0x3d, 0x3f, 0x1a, 0x6a, 0xe0,
	0x31, 0x3a, 0x89, 0x74, 0xc3, 0x15, 0x73, 0xb4,
	0x6f, 0xb3, 0x19, 0xab, 0xc1, 0x14, 0x74, 0xb1,
	0x50, 0xdb, 0x70, 0x97, 0x07, 0x80, 0x9c, 0xbb,
	0x2f, 0x2b, 0xaf, 0x92, 0xdf, 0xc1, 0xe6, 0x12,
	0x67, 0x53, 0x74, 0xe5, 0x36, 0x71, 0x88, 0xb6,
	0x5d, 0xf5, 0x88, 0x77, 0xc2, 0x61, 0xab, 0xd4,
	0xd8, 0xa6, 0x1c, 0x08, 0xde, 0x49, 0x0a, 0xe3,
	0x39, 0x7c, 0x71, 0xb3, 0x06, 0x37, 0x3d, 0xb0,
	0xda, 0x51, 0xc2, 0x7e, 0x4e, 0xc5, 0x6e, 0xe1,
	0xd8, 0x32, 0x21, 0xca, 0xd1, 0xba, 0xfb, 0x9b,
	0x52, 0xde, 0xe7, 0x72, 0x52, 0xd8, 0xa2, 0x7d,
};

const u8 sm4_ctr_cipher[] = {
	0x17, 0xb0, 0xac, 0x00, 0x8a, 0x03, 0x6c, 0x7d,
	0x98, 0x0e, 0x09, 0x18, 0x06, 0x85, 0x3e, 0x41,
	0xdd, 0xc6, 0x89, 0xb2, 0xc3, 0x2b, 0xf0, 0x17,
	0x68, 0x33, 0xaa, 0x4f, 0x13, 0xb8, 0xd4, 0x93,
	0x22, 0x3e, 0x92, 0x3b, 0xe8, 0xd4, 0x0a, 0x01,
	0x8e, 0xfe, 0x3d, 0x8c, 0x65, 0xc3, 0xb5, 0xb1,
	0xb7, 0x3c, 0x1f, 0x1b, 0xc9, 0xa0, 0x06, 0x3f,
	0x01, 0xc8, 0x2c, 0xe2, 0x8c, 0x4f, 0xc4, 0xfa,
	0x71, 0x9a, 0x6d, 0x73, 0x22, 0x22, 0xa3, 0xff,
	0x3b, 0x09, 0xd6, 0x32, 0x01, 0xe8, 0x1c, 0xb6,
	0xe0, 0x81, 0x16, 0xf3, 0x12, 0x32, 0x2b, 0x2e,
	0x17, 0xae, 0x03, 0x80, 0x7d, 0xb9, 0xcc, 0x79,
	0x62, 0xfd, 0x17, 0x2a, 0x93, 0x99, 0x53, 0x8b,
	0x2d, 0xbb, 0x18, 0x8d, 0x44, 0xca, 0xcd, 0x4f,
	0x02, 0x27, 0x5e, 0x18, 0x2d, 0x9e, 0x9a, 0x53,
	0x9f, 0xd6, 0xe4, 0xf1, 0x56, 0x49, 0x61, 0x42,
	0xcc, 0xe3, 0x86, 0x27, 0xf8, 0x83, 0x02, 0x52,
	0x9e, 0xc8, 0x18, 0xf1, 0x61, 0x89, 0x01, 0x51,
	0x5c, 0x81, 0xa8, 0x96, 0x28, 0xd3, 0xcc, 0xfc,
	0x2f, 0x0d, 0xca, 0x45, 0xb6, 0x6f, 0xc4, 0xcf,
};

const u8 sm4_xts_cipher[] = {
	0x00, 0xf3, 0x48, 0x66, 0x7e, 0x6a, 0x81, 0x0b,
	0xf3, 0xd2, 0xcd, 0xd5, 0x29, 0x1b, 0x00, 0x3b,
	0x72, 0xbc, 0x2d, 0xc8, 0xe5, 0x35, 0xc4, 0x58,
	0xc9, 0x0a, 0x9c, 0xc8, 0xed, 0x5f, 0x9e, 0x71,
	0xb1, 0x6b, 0xb5, 0xe1, 0x88, 0x58, 0x96, 0x1f,
	0x22, 0x8d, 0xe6, 0x57, 0x24, 0x6f, 0xfd, 0x7f,
	0xc3, 0x95, 0xf8, 0x67, 0xea, 0xba, 0x12, 0xd1,
	0xb8, 0x72, 0xb0, 0xf8, 0xcc, 0xf8, 0x9d, 0xbf,
	0xac, 0x3d, 0x62, 0xac, 0x95, 0xce, 0x05, 0x0d,
	0x22, 0x66, 0xf0, 0xf8, 0x7f, 0x68, 0x75, 0x4e,
	0xd8, 0x0c, 0x49, 0x04, 0x1b, 0xf6, 0xac, 0xc8,
	0x84, 0x70, 0xdd, 0xf1, 0x2c, 0xe8, 0x21, 0xcf,
	0xce, 0xf3, 0x69, 0x60, 0x20, 0x97, 0x21, 0x42,
	0xf8, 0xf7, 0x3d, 0xa3, 0x6a, 0x3f, 0x37, 0x8c,
	0xa2, 0x99, 0x09, 0x24, 0xfd, 0x7c, 0x31, 0x61,
	0x83, 0x09, 0x6d, 0x35, 0x58, 0x60, 0x3b, 0x65,
	0x2f, 0x5a, 0x11, 0x32, 0x89, 0x99, 0x5e, 0x6e,
	0x66, 0x94, 0x56, 0x33, 0xb0, 0x5a, 0xc6, 0x16,
	0x9b, 0xd3, 0x46, 0xbb, 0x55, 0xc0, 0xa2, 0x4b,
	0x24, 0x73, 0x30, 0x7e, 0x74, 0x5f, 0x67, 0x08,
};
#endif

const u8 hash_md5[] = {
0x01, 0xea, 0x0b, 0xa4, 0xa9, 0x88, 0xa2, 0xea,
0x55, 0x1d, 0x7b, 0xab, 0xdb, 0xa3, 0x96, 0x0f,
};

const u8 hash_sha1[] = {
0xe5, 0xfe, 0x0b, 0x07, 0x06, 0xaf, 0xdb, 0x15,
0x9b, 0x53, 0xf2, 0xf4, 0x42, 0x35, 0xd0, 0x82,
0xcf, 0xce, 0x99, 0xed,
};

const u8 hash_sha256[] = {
0x9b, 0xa8, 0x85, 0x0a, 0xa8, 0x2c, 0x21, 0x6a,
0x36, 0x89, 0xf8, 0x0f, 0x10, 0xa4, 0x0d, 0x01,
0x8b, 0x1c, 0xce, 0x7e, 0xe4, 0xa2, 0xc8, 0xa8,
0xa7, 0xff, 0x4d, 0x4b, 0x14, 0x1a, 0x67, 0xf0,
};

const u8 hash_sha224[] = {
0x21, 0x55, 0x40, 0x7b, 0x94, 0x32, 0x53, 0xd8,
0x6c, 0x12, 0xca, 0x44, 0xf4, 0x5c, 0x98, 0xe3,
0x1a, 0x5c, 0xbf, 0xe7, 0x05, 0x91, 0x0c, 0xd0,
0xd2, 0x54, 0x95, 0x56,
};

const u8 hash_sha512[] = {
0xbb, 0x32, 0xe9, 0x7b, 0x49, 0x5e, 0x1a, 0xe0,
0x3b, 0xb7, 0x20, 0xbd, 0xa8, 0xec, 0x91, 0x7e,
0x3d, 0xfa, 0xd5, 0x60, 0x71, 0x6c, 0x9f, 0xa8,
0xf6, 0x48, 0xea, 0x93, 0x7c, 0x81, 0xe1, 0x59,
0xfb, 0x3e, 0xe3, 0xb8, 0xbd, 0x77, 0x31, 0xf2,
0xa2, 0x64, 0x20, 0x40, 0x8d, 0x6f, 0x11, 0xd3,
0x30, 0xcc, 0x65, 0xd2, 0x56, 0xc9, 0xd8, 0x5e,
0x0d, 0x18, 0xe0, 0xfe, 0x7c, 0x7c, 0x2f, 0x57,
};

const u8 hash_sha384[] = {
0x80, 0x27, 0xc1, 0xb9, 0x84, 0x51, 0xf1, 0x50,
0x9e, 0xa5, 0x26, 0xac, 0xc6, 0x01, 0x20, 0xbb,
0xeb, 0x00, 0x5d, 0x9a, 0x21, 0x2c, 0xde, 0x5a,
0x36, 0x5d, 0x1d, 0xca, 0xfb, 0xf7, 0x8b, 0x78,
0xfb, 0x61, 0x0d, 0x86, 0x9b, 0x3d, 0x7a, 0xf3,
0xfa, 0x8b, 0x80, 0x4a, 0x7f, 0xb7, 0x56, 0xf7,
};

const u8 hash_sha512_224[] = {
0x15, 0x52, 0x59, 0xea, 0xe2, 0x4b, 0xa7, 0xc6,
0x26, 0xd1, 0x27, 0x59, 0x26, 0x3a, 0x78, 0x63,
0x2b, 0xed, 0x33, 0x8f, 0xba, 0x07, 0xee, 0x13,
0x2f, 0xfb, 0x88, 0xab,
};

const u8 hash_sha512_256[] = {
0x99, 0x6d, 0x6f, 0xe2, 0xf8, 0x44, 0x62, 0x68,
0xe5, 0x58, 0x86, 0x6c, 0xab, 0x5b, 0x91, 0x97,
0x63, 0x36, 0x05, 0x0a, 0xa4, 0x77, 0xc9, 0x70,
0x46, 0xcb, 0x06, 0xc6, 0xaf, 0x69, 0x7f, 0xc7,
};

const u8 hash_sm3[] = {
0x23, 0x03, 0xa3, 0xf1, 0xaa, 0x24, 0x8f, 0x13,
0xae, 0xea, 0x16, 0x6d, 0xd0, 0xce, 0xe8, 0x25,
0x34, 0xb3, 0x02, 0x61, 0xce, 0xaa, 0x00, 0xdc,
0xf1, 0x0d, 0x34, 0x92, 0x02, 0x08, 0x49, 0xbb,
};

#if CONFIG_IS_ENABLED(ROCKCHIP_CIPHER)

const u8 hmac_key[] = {
0x12, 0x83, 0x3f, 0x50, 0x37, 0x48, 0xcc, 0x23,
0x6f, 0xe3, 0x49, 0x6d, 0x60, 0xc0, 0x7f, 0x46,
0xd9, 0x7c, 0x4d, 0x88, 0x77, 0x1c, 0x01, 0x6c,
0x99, 0x49, 0x14, 0x1a, 0x7b, 0xb2, 0x6c, 0xf7,
};

const u8 hmac_sha1[] = {
0x83, 0x95, 0xf2, 0x9f, 0x9f, 0x99, 0x94, 0x48,
0x63, 0x72, 0xda, 0xc1, 0xfb, 0x4f, 0xf0, 0xf5,
0x68, 0x4a, 0xf1, 0x24,
};

const u8 hmac_sha256[] = {
0xbf, 0x56, 0x68, 0xc0, 0xa8, 0x0b, 0x87, 0xb4,
0xcf, 0x76, 0xb8, 0x39, 0xec, 0xbc, 0x90, 0xd2,
0x05, 0x04, 0x86, 0x3d, 0x80, 0x5d, 0xbe, 0xe2,
0x1a, 0xcc, 0x8f, 0x9a, 0x06, 0xdb, 0x08, 0x3c,
};

const u8 hmac_sha512[] = {
0xdd, 0xab, 0x41, 0x15, 0x43, 0x02, 0xa7, 0x0f,
0xef, 0x8f, 0x39, 0x20, 0xdf, 0x30, 0xb7, 0xa7,
0x56, 0x12, 0x8c, 0xcc, 0xff, 0x43, 0x9f, 0xc7,
0xad, 0x35, 0x07, 0x82, 0xcd, 0x82, 0x44, 0xa5,
0x4a, 0x66, 0x4e, 0x5b, 0x8a, 0xa9, 0xfd, 0x5d,
0x43, 0x38, 0x65, 0x11, 0x13, 0xd3, 0xc8, 0x2f,
0xa2, 0x38, 0x95, 0x8b, 0x0e, 0xd5, 0x30, 0xc5,
0x9f, 0xd8, 0x76, 0x15, 0x34, 0x69, 0xb5, 0xd5,
};

const u8 hmac_md5[] = {
0x28, 0x6e, 0x5c, 0xf1, 0xac, 0x21, 0x35, 0x92,
0x12, 0xf5, 0x75, 0xff, 0x55, 0xe2, 0x09, 0x5a,
};

const u8 hmac_sm3[] = {
0xad, 0x34, 0xd6, 0xae, 0x03, 0x4a, 0x99, 0x5b,
0x0d, 0x2c, 0x8c, 0x5a, 0xb9, 0x57, 0x93, 0xd1,
0xf0, 0x2c, 0x5b, 0x68, 0x35, 0x0e, 0x3e, 0xae,
0xda, 0x6e, 0xdf, 0xad, 0x2c, 0xfd, 0x61, 0x3d,
};
#endif

#if CONFIG_IS_ENABLED(ROCKCHIP_RSA)

const u8 rsa2048_n[] = {
0x4d, 0xcf, 0xbf, 0x13, 0xf2, 0x45, 0xa6, 0xe4,
0x45, 0x0c, 0x12, 0x51, 0x1e, 0xe3, 0x2f, 0xfa,
0x0d, 0xf0, 0xfb, 0x33, 0x1c, 0x05, 0xf8, 0xd6,
0x61, 0x18, 0x32, 0x4e, 0x92, 0x40, 0xed, 0x0b,
0x96, 0x8f, 0x53, 0xb5, 0xf8, 0xc4, 0x8c, 0x23,
0xbd, 0x09, 0x36, 0xfc, 0x29, 0x5b, 0xef, 0x39,
0x38, 0x8d, 0xf7, 0xd1, 0xe8, 0x67, 0x7e, 0x52,
0x64, 0x9d, 0xc2, 0xb4, 0xbb, 0x13, 0x4a, 0x71,
0x40, 0xd2, 0xca, 0xd4, 0x7e, 0x1a, 0x40, 0x7e,
0x56, 0xa1, 0x47, 0x7d, 0x7f, 0xb1, 0x0c, 0x8d,
0x01, 0xe1, 0xa5, 0xb4, 0xd3, 0x4a, 0x94, 0x7a,
0x95, 0xc8, 0x87, 0x02, 0xcc, 0x98, 0x37, 0x85,
0x58, 0x5f, 0x02, 0x50, 0xa0, 0x46, 0x0c, 0xe5,
0x4e, 0xac, 0x50, 0xce, 0x27, 0x8e, 0x28, 0xdc,
0xfe, 0xb8, 0xc4, 0xd7, 0x52, 0xf1, 0x8f, 0x73,
0x5b, 0xa7, 0xa4, 0x19, 0x64, 0x83, 0xfd, 0x93,
0x10, 0x0d, 0xbe, 0x1a, 0x7b, 0xa5, 0xad, 0xda,
0x2b, 0xfe, 0x87, 0xf0, 0x13, 0x7a, 0x66, 0x42,
0x11, 0x45, 0x9d, 0xc3, 0xbf, 0x91, 0x60, 0x30,
0x32, 0x9d, 0x80, 0x8f, 0x64, 0xd0, 0x13, 0x10,
0x38, 0xb8, 0x10, 0xaf, 0x6f, 0x44, 0x05, 0x81,
0xf2, 0xc1, 0xe4, 0x1f, 0xe4, 0x9d, 0xee, 0x96,
0xfa, 0x4b, 0xff, 0xdb, 0xd3, 0xb0, 0x32, 0x8f,
0x2a, 0x95, 0x13, 0x3d, 0x7f, 0x6d, 0x60, 0x0f,
0xd8, 0xf4, 0xbc, 0xdc, 0x7f, 0xf9, 0xd3, 0x0f,
0x00, 0x4b, 0xdb, 0xd7, 0x69, 0x84, 0xd1, 0x0e,
0xa4, 0x3c, 0x50, 0x14, 0xdb, 0x19, 0xcc, 0x47,
0xb2, 0x9f, 0x4b, 0x3b, 0x1d, 0x90, 0x8e, 0xe6,
0xbc, 0xd3, 0x4e, 0x33, 0xaa, 0x30, 0x63, 0x52,
0xb7, 0x68, 0xe5, 0x46, 0xd0, 0x85, 0xad, 0x09,
0x9c, 0xd8, 0x0a, 0xee, 0x68, 0x51, 0xe5, 0xd3,
0x32, 0x04, 0x1a, 0x8a, 0x0a, 0xd8, 0x1d, 0x61,
};

const u8 rsa2048_e[] = {
0x01, 0x00, 0x01
};

const u8 rsa2048_c[] = {
0x5f, 0x2f, 0xd1, 0xa1, 0x85, 0x3b, 0x07, 0xd3,
0xf2, 0x93, 0x21, 0xcc, 0x28, 0xfb, 0x80, 0x0a,
0xc1, 0x52, 0x83, 0xbf, 0x6d, 0xea, 0x4f, 0x54,
0x74, 0x2f, 0x58, 0xcc, 0xef, 0x37, 0x3b, 0x8c,
0xe3, 0x5a, 0xa4, 0x81, 0x77, 0x9a, 0x0b, 0x72,
0xb5, 0x58, 0x36, 0xf3, 0x17, 0x80, 0x47, 0x90,
0xb3, 0x8c, 0x18, 0xb3, 0x2e, 0x15, 0xd4, 0xf0,
0x71, 0xf2, 0x6f, 0x3e, 0xfd, 0x51, 0xf7, 0xc4,
0xb0, 0x60, 0x06, 0xb8, 0x47, 0x12, 0x89, 0x5f,
0xfd, 0x2b, 0xb5, 0x2c, 0x25, 0x10, 0x5f, 0xac,
0x88, 0x6a, 0xb5, 0xd7, 0x1c, 0x44, 0x53, 0x04,
0x87, 0x88, 0xd0, 0xae, 0x3d, 0xc0, 0x59, 0x1e,
0xc5, 0x99, 0x56, 0x00, 0x2b, 0x5a, 0x9d, 0xce,
0x17, 0xa1, 0x85, 0xd6, 0xff, 0x07, 0x91, 0x2d,
0x7b, 0xe3, 0x6e, 0xc5, 0x21, 0xb0, 0xd0, 0x5e,
0xa8, 0x3c, 0xee, 0xa9, 0xbd, 0x43, 0x50, 0xde,
0xe2, 0xa4, 0x94, 0xb1, 0x10, 0x20, 0x55, 0x81,
0xa8, 0xcf, 0x24, 0x10, 0x65, 0xe2, 0x80, 0xd6,
0x08, 0xf4, 0xf9, 0xeb, 0xae, 0xde, 0xbb, 0xcb,
0xa2, 0x2f, 0x04, 0x15, 0x0b, 0xed, 0xcd, 0x4d,
0xca, 0xf8, 0x61, 0x46, 0xf5, 0xd6, 0xcb, 0x60,
0x86, 0x4c, 0x16, 0x7e, 0x7c, 0x1f, 0x53, 0xb7,
0x92, 0xff, 0xd2, 0x35, 0xcf, 0xa6, 0xf5, 0xfc,
0x75, 0xf5, 0x1e, 0x1a, 0xd4, 0x68, 0xa6, 0x58,
0x4d, 0x63, 0xf5, 0xbf, 0x05, 0xdc, 0x67, 0xd1,
0xdc, 0xed, 0x08, 0x9d, 0x75, 0xe3, 0xb5, 0x2f,
0xad, 0x32, 0xd5, 0xce, 0xb7, 0x03, 0xfb, 0xfd,
0xb9, 0x49, 0xec, 0x40, 0xe5, 0x76, 0x01, 0xc5,
0xcf, 0xc6, 0x07, 0xc3, 0x03, 0xee, 0xbc, 0x92,
0xf8, 0xdc, 0x76, 0xd8, 0x99, 0x11, 0xd5, 0x1e,
0x02, 0x7a, 0xca, 0x0e, 0x60, 0x58, 0x4e, 0xc1,
0x0e, 0x35, 0x27, 0xec, 0xaa, 0x31, 0x97, 0x19,
};

const u8 rsa2048_d[] = {
0x21, 0x36, 0x36, 0x52, 0x38, 0x04, 0x00, 0xbd,
0xae, 0xb8, 0x5b, 0x13, 0xcc, 0xb6, 0xbb, 0x48,
0x25, 0x65, 0x54, 0x27, 0x6c, 0x2b, 0x0b, 0x0a,
0x2d, 0xcf, 0xdb, 0x60, 0x35, 0xac, 0xe9, 0x7b,
0xe8, 0xe5, 0xb7, 0x77, 0x37, 0xcd, 0x16, 0xf2,
0xf4, 0x4b, 0x22, 0x0f, 0xe2, 0x38, 0x76, 0x7d,
0xe8, 0x39, 0x74, 0x8a, 0x50, 0x36, 0x6e, 0xbf,
0xb9, 0xb9, 0x5f, 0xb4, 0x0a, 0x39, 0x0f, 0xb7,
0xc9, 0x61, 0x26, 0x4c, 0xd7, 0x0b, 0x45, 0xd3,
0x9a, 0xbb, 0xca, 0xbe, 0xaa, 0x7e, 0xc1, 0x6e,
0x63, 0x1b, 0xe9, 0xa5, 0x21, 0x45, 0xb9, 0x92,
0x3d, 0xd6, 0xd2, 0xaa, 0x4f, 0x02, 0x26, 0x02,
0x52, 0xfe, 0x68, 0xc6, 0x91, 0x86, 0x30, 0xcb,
0x33, 0xe0, 0xb8, 0xd8, 0xda, 0x44, 0x5a, 0x41,
0x1c, 0x99, 0x30, 0x41, 0x26, 0xaf, 0x85, 0xae,
0xbf, 0xbe, 0x6b, 0x83, 0xf7, 0xef, 0x3a, 0x66,
0x21, 0x77, 0xc4, 0xf4, 0x27, 0x3d, 0xaf, 0x31,
0x6b, 0xbe, 0xb4, 0xd5, 0x3a, 0xff, 0x3f, 0xdd,
0x10, 0xd0, 0xb7, 0xd4, 0x75, 0xf9, 0x79, 0xd6,
0xc3, 0x22, 0x62, 0xfe, 0x3f, 0x49, 0xc5, 0x9e,
0xc9, 0xec, 0xcd, 0x1e, 0x9a, 0x3d, 0xaf, 0x10,
0xd8, 0x2b, 0x89, 0xa3, 0x20, 0x5a, 0x00, 0xaa,
0x08, 0xca, 0x33, 0x6b, 0x49, 0x72, 0x87, 0x6c,
0xf7, 0x00, 0x74, 0x76, 0xcd, 0x19, 0xc6, 0x92,
0x52, 0xa3, 0xe6, 0x67, 0x11, 0xea, 0x20, 0x87,
0x20, 0x1d, 0x16, 0x5d, 0x1d, 0x5b, 0x3c, 0xa2,
0xe0, 0x6e, 0x78, 0xa7, 0xf1, 0xae, 0x31, 0x42,
0x29, 0xc7, 0x2b, 0xd5, 0xed, 0x75, 0xc9, 0xac,
0x78, 0xc5, 0xa0, 0x5d, 0x69, 0x1c, 0x67, 0x4f,
0xcb, 0x3f, 0x40, 0x7e, 0x2f, 0x68, 0x22, 0x77,
0x84, 0x6e, 0xd5, 0x8c, 0x8d, 0x48, 0xf9, 0x02,
0x36, 0x22, 0x90, 0x19, 0x0a, 0xf2, 0x54, 0x51,
};

const u8 rsa2048_sign_in[] = {
0x21, 0x5b, 0x61, 0xed, 0xff, 0xe7, 0xc1, 0x8c,
0x80, 0xa7, 0xad, 0xd7, 0x1b, 0xa1, 0x20, 0xc6,
0x0d, 0xad, 0x01, 0x2d, 0x3c, 0x4c, 0x5f, 0x3d,
0x16, 0xde, 0x24, 0x6e, 0xc8, 0xfc, 0x9e, 0x9a,
0x19, 0x02, 0x0e, 0x8f, 0x6d, 0x39, 0x45, 0x5d,
0xc7, 0xdc, 0x7d, 0x2a, 0x53, 0x61, 0xed, 0xf9,
0x28, 0x83, 0x48, 0xe6, 0x39, 0xb2, 0x84, 0x6d,
0xd2, 0xa5, 0xa5, 0x27, 0x60, 0x07, 0x92, 0xa9,
0xf5, 0x50, 0x00, 0xb5, 0x93, 0x77, 0x74, 0xd7,
0x67, 0x88, 0x43, 0xf0, 0x2f, 0xbb, 0x7b, 0x14,
0x59, 0xdf, 0x98, 0x96, 0xa3, 0x31, 0x7c, 0x29,
0x9a, 0x20, 0x4b, 0x1a, 0x8e, 0xc9, 0xf8, 0xde,
0x31, 0x51, 0x84, 0x3f, 0x5a, 0xbb, 0xcc, 0xc2,
0xfe, 0x09, 0x10, 0xb4, 0x94, 0x8a, 0x8a, 0x74,
0x8c, 0xec, 0x3b, 0x07, 0x03, 0x35, 0x18, 0x8a,
0x75, 0xce, 0x15, 0x48, 0xeb, 0x66, 0x93, 0xd3,
0x33, 0x20, 0x7e, 0xe0, 0xd9, 0x8f, 0x1f, 0x9b,
0xaf, 0x85, 0x50, 0x2b, 0xf6, 0x83, 0x84, 0xf2,
0xed, 0x4c, 0x78, 0xd6, 0x2c, 0x66, 0x11, 0xf9,
0xe7, 0xc0, 0x87, 0xa7, 0xe1, 0xa3, 0x35, 0xf2,
0xd9, 0xe2, 0xf5, 0xbb, 0x01, 0x55, 0x3a, 0x02,
0xcf, 0x39, 0x85, 0x08, 0x7b, 0xb0, 0x29, 0xfc,
0x83, 0xaf, 0x4b, 0xb9, 0x44, 0xa7, 0xe5, 0xfa,
0xc4, 0xaa, 0xb3, 0xcb, 0xb8, 0xff, 0x24, 0x16,
0x46, 0x24, 0x13, 0x3a, 0x6a, 0x51, 0x37, 0x32,
0xbd, 0xb6, 0xe2, 0x81, 0xbe, 0x4a, 0x20, 0xb2,
0x18, 0xc7, 0x52, 0xf0, 0x21, 0xe8, 0xb8, 0x0c,
0xbf, 0xed, 0x28, 0x1b, 0x65, 0x94, 0x26, 0xb2,
0xc2, 0xa9, 0x97, 0x4e, 0xd6, 0xc7, 0x97, 0xf1,
0x2d, 0x17, 0x16, 0xf0, 0xc2, 0x07, 0x72, 0x78,
0xff, 0xd8, 0xf2, 0x46, 0x23, 0x4f, 0x23, 0x54,
0x6f, 0x51, 0x59, 0x92, 0xa5, 0xaf, 0x1c, 0x35,
};

const u8 rsa2048_sign_out[] = {
0x8a, 0x31, 0xf2, 0x91, 0xe3, 0x62, 0x5a, 0xa2,
0x73, 0xaa, 0xc2, 0x17, 0x1f, 0xec, 0x13, 0xc5,
0xcf, 0x62, 0xef, 0x52, 0x73, 0x5c, 0x14, 0x74,
0xf8, 0xdd, 0xda, 0x75, 0xa4, 0x07, 0x42, 0x98,
0x97, 0x59, 0xa6, 0x02, 0xcf, 0xbe, 0x8c, 0xe5,
0x0b, 0x48, 0x5c, 0xec, 0xb8, 0x0c, 0xaf, 0xcb,
0xa5, 0x65, 0xc9, 0x2c, 0xb4, 0x05, 0x9f, 0x33,
0xd8, 0x97, 0x48, 0xa4, 0x06, 0xda, 0xf1, 0xbf,
0x29, 0x33, 0xc4, 0xb4, 0xf8, 0x86, 0x58, 0xfc,
0x38, 0x45, 0x40, 0xcd, 0xf0, 0x89, 0x69, 0xa1,
0x2a, 0x4e, 0x19, 0x82, 0xf1, 0xfc, 0x1f, 0x4a,
0xc5, 0xa9, 0xac, 0xd9, 0xf9, 0x56, 0xf3, 0x3f,
0x5d, 0xf3, 0x05, 0xfa, 0xec, 0x0c, 0x8b, 0xc2,
0x69, 0x7e, 0xe0, 0x12, 0x52, 0xb8, 0x5f, 0x43,
0xb9, 0xea, 0x0e, 0xe8, 0x67, 0xb2, 0xf2, 0xac,
0xeb, 0x2a, 0x66, 0xc6, 0xd5, 0x9a, 0x5e, 0x7c,
0x9e, 0x11, 0x82, 0xa1, 0xc2, 0x59, 0xfe, 0xd3,
0xfd, 0x67, 0x56, 0x6e, 0x60, 0x86, 0xe9, 0xcc,
0x36, 0x76, 0x68, 0x62, 0xda, 0x71, 0xf2, 0xea,
0x4a, 0xbb, 0x2d, 0xb4, 0xf7, 0xf3, 0x74, 0xf8,
0x6e, 0xa5, 0xeb, 0x26, 0x91, 0xe4, 0xa7, 0x25,
0x76, 0x28, 0xd1, 0x3f, 0x0a, 0x63, 0x7a, 0xfa,
0x4f, 0x05, 0x03, 0xf6, 0xd8, 0xce, 0x4f, 0x06,
0xea, 0x0c, 0xde, 0x08, 0xed, 0xda, 0x07, 0xac,
0x8a, 0x5e, 0xa6, 0xfc, 0x03, 0x12, 0x02, 0x86,
0xc0, 0x3a, 0x37, 0x9e, 0xf5, 0x59, 0xd7, 0x64,
0xca, 0x39, 0x31, 0xf5, 0xf2, 0x59, 0x0b, 0xc9,
0xa8, 0xae, 0x06, 0x65, 0xd6, 0x4a, 0xed, 0x36,
0x12, 0xe8, 0x0a, 0x8f, 0x08, 0x92, 0xf3, 0x78,
0x4e, 0xe6, 0xf0, 0x96, 0x2d, 0xcd, 0x2b, 0xaa,
0xe7, 0xb2, 0x7f, 0xd4, 0x59, 0x4c, 0xf9, 0x1a,
0x22, 0xff, 0x60, 0x1a, 0xa5, 0x71, 0x0c, 0x00,
};

#endif

#endif