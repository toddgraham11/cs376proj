prog: main.o readLine.o execCmds.o figueira.o
	gcc -o prog main.o readLine.o execCmds.o figueira.o

main.o: main.c readLine.h execCmds.h
	gcc -c main.c

figueira.o: figueira.c figueira.h
	gcc -c figueira.c

readLine.o: readLine.c readLine.h
	gcc -c readLine.c

execCmds.o: execCmds.c execCmds.h
	gcc -c execCmds.c

clean:
	rm -f *.o prog
