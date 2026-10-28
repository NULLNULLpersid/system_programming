all: args environ exit myenv pid uid

args: args.c
	gcc -o args args.c

environ: environ.c
	gcc -o environ environ.c

exit: exit.c
	gcc -o exit exit.c

myenv: myenv.c
	gcc -o myenv myenv.c

pid: pid.c
	gcc -o pid pid.c

uid: uid.c
	gcc -o uid uid.c

clean: 
	rm -r args environ exit myenv pid uid