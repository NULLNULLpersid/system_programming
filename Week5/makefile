all: copy dbcreate dbquery dbupdate dup fopen fsize

copy : copy.c
	gcc -o copy copy.c

dbcreate : dbcreate.c
	gcc -o dbcreate dbcreate.c

dbquery : dbquery.c
	gcc -o dbquery dbquery.c

dbupdate : dbupdate.c
	gcc -o dbupdate dbupdate.c

dup : dup.c
	gcc -o dup dup.c

fopen : fopen.c
	gcc -o fopen fopen.c

fsize : fsize.c
	gcc -o fsize fsize.c

clean:
	rm -f copy dbcreate dbquery dbupdate dup fopen fsize