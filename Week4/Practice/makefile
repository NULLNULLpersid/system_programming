all : 1/cat 2/copy 3/line 4/fprint 5/fscan 6/stcreate1 stprint stcreate2 stquery stupdate buffer

1/cat : 1/cat.c
	gcc -o 1/cat 1/cat.c
	
2/copy : 2/copy.c
	gcc -o 2/copy 2/copy.c

3/line : 3/line.c
	gcc -o 3/line 3/line.c

4/fprint : 4/fprint.c
	gcc -o 4/fprint 4/fprint.c

5/fscan : 5/fscan.c
	gcc -o 5/fscan 5/fscan.c

6/stcreate1 : 6/stcreate1.c
	gcc -o 6/stcreate1 6/stcreate1.c

stprint : stprint.c
	gcc -o stprint stprint.c

stcreate2 : stcreate2.c
	gcc -o stcreate2 stcreate2.c

stquery : stquery.c
	gcc -o stquery stquery.c

stupdate : stupdate.c
	gcc -o stupdate stupdate.c

buffer : buffer.c
	gcc -o buffer buffer.c

clean : 
	rm -f 1/cat 2/copy 3/line 4/fprint 5/fscan 6/stcreate1 stprint stcreate2 stquery stupdate buffer