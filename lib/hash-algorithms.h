/*
   +----------------------------------------------------------------------+
   | PHP Version 5                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 StumbleUpon Inc.                                  |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Authors: Derick Rethans <derick@derickrethans.nl>                    |
   +----------------------------------------------------------------------+
 */
#include <stdint.h>
#include <stdlib.h>

#ifndef QH_HASH_ALGORITHMS_H
#define QH_HASH_ALGORITHMS_H

inline uint32_t qha_jenkins1(uint32_t key);
inline uint32_t qha_jenkins2(uint32_t key);
inline uint32_t qha_no_hash(uint32_t key);

inline uint32_t qha_djb2(char *key);
inline uint32_t qha_sdbm(char *key);

#endif
