CC="gcc"

memint32: memint32.c
	$(CC) -Wall -O2 -o memint32.o memint32.c

install:
	install -m 0755 memint32.o /usr/bin/memint32

clean:
	rm -f *.o
