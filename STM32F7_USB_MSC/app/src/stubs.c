/**
 * @file    stubs.c
 * @brief   Newlib stubs necessary for using printf.
 * @date    12 kwi 2014
 * @author  Michal Ksiezopolski
 * 
 * This is the file, which enables redirecting printf
 * to a chosen USART.
 *
 * @verbatim
 * Copyright (c) 2014 Michal Ksiezopolski.
 * All rights reserved. This program and the 
 * accompanying materials are made available 
 * under the terms of the GNU Public License 
 * v3.0 which accompanies this distribution, 
 * and is available at 
 * http://www.gnu.org/licenses/gpl.html
 * @endverbatim
 */


#include <comm.h>

/**
 * @defgroup  STUBS STUBS
 * @brief     Newlib stubs
 */

/**
 * @addtogroup STUBS
 * @{
 */

/*
 * These stubs should be expanded!!!
 * TODO Check params and implement minimal
 */
void _close() {

}

void _isatty() {

}

void _lseek() {

}

void _fstat() {

}
void _sbrk() {

}

/**
 *
 * @param fileHandle
 * @param buf
 * @param len
 * @return
 */
int _read(int fileHandle, char *buf, int len) {

  return 0;
}

/**
 *
 * @param fileHandle
 * @param buf
 * @param len
 * @return
 */
int _write(int fileHandle, char *buf, int len) {

  // send all data to COMM module
  for (int i = 0; i < len; i++) {
    COMM_Putc(buf[i]);
  }

  return len;
}

/**
 * @}
 */
