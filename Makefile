all: main.exe
main.exe: maths.o main.c
	gcc main.c maths.o -o main.exe
	./main.exe
maths.o: maths.c maths.h

	gcc -c maths.c -o maths.o
clean:
	del *.exe
