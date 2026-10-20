all: 3/copy 5/dbcreate 6/dbquery 7/dbupdate 4/dup 1/fopen 2/fsize

3/copy : 3/copy.c
	gcc -o 3/copy 3/copy.c

5/dbcreate : 5/dbcreate.c
	gcc -o 5/dbcreate 5/dbcreate.c

6/dbquery : 6/dbquery.c
	gcc -o 6/dbquery 6/dbquery.c

7/dbupdate : 7/dbupdate.c
	gcc -o 7/dbupdate 7/dbupdate.c

4/dup : 4/dup.c
	gcc -o 4/dup 4/dup.c

1/fopen : 1/fopen.c
	gcc -o 1/fopen 1/fopen.c

2/fsize : 2/fsize.c
	gcc -o 2/fsize 2/fsize.c

clean:
	rm -f 3/copy 5/dbcreate 6/dbquery 7/dbupdate 4/dup 1/fopen 2/fsize