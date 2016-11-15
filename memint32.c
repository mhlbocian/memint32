/*
memint32 - MEMory of INTeger in 32 bits.
Copyright (C) 2016 Michał Bocian <bocian.michal@outlook.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "types.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, const char** argv){
    if(argc==1){
    	printf("usage: memint32 integer\n");
	exit(1);
    }

    uInt* u = (uInt*) malloc(sizeof(uInt));
    u->i = atoi(argv[1]);
    printf("%08x ", u->i);
    printf("%02x%02x%02x%02x\n",
    	u->b.a&0xff,
	u->b.b&0xff,
	u->b.c&0xff,
	u->b.d&0xff);

    return 0;
}

