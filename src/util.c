#include <stdio.h>  // for getc, printf
#include "util.h"
// Endianness helper functions

uint32_t swap_uint32(uint32_t num)
{
    return ((num >> 24) & 0xff) | ((num << 8) & 0xff0000) | ((num >> 8) & 0xff00) | ((num << 24) & 0xff000000);
}

uint32_t swap_uint16(uint16_t num)
{
    return ((num >> 8) & 0xff) | ((num << 8) & 0xff00);
}

uint32_t read_uint32_t(uint8_t* buf) {
  return (buf[0] << 24) | (buf[1] << 16) | (buf[2] << 8) | buf[3];
}

uint16_t read_uint16_t(uint8_t* buf) {
  return (buf[0] << 8) | buf[1];
}
