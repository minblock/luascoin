// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2015 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef LUA_SUPPORT_CLEANSE_H
#define LUA_SUPPORT_CLEANSE_H

#include <stdlib.h>

void memory_cleanse(void *ptr, size_t len);

#endif // LUA_SUPPORT_CLEANSE_H
