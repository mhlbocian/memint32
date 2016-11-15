/*
memint32 - MEMory of INTeger in 32 bits.
Copyright (C) 2016 Michał Bocian <bocian.michal@outlook.com>

For full terms of memint32's license, see top of `memint32.c` file in project's
root directory.
*/
#ifndef TYPES_H
#define TYPES_H
typedef unsigned char byte;

typedef struct sBytes{
    byte a,b,c,d;
} sBytes;

typedef union uInt {
    int i;
    sBytes b;
} uInt;
#endif
