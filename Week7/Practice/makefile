all : 1/rdlock 1/wrlock

1/rdlock : 1/rdlock.c
	gcc -o 1/rdlock 1/rdlock.c

1/wrlock : 1/wrlock.c
	gcc -o 1/wrlock 1/wrlock.c

2/wrlock : 2/wrlock.c
	gcc -o 2/wrlock 2/wrlock.c

clean :
	rm -f 1/rdlock 1/wrlock