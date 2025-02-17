
all: help.exe strcompare.exe strconcat.exe strlength.exe


help.exe: help.c
	gcc help.c -o help.exe
mystrings.o: mystrings.c mystrings.h
	gcc -c mystrings.c -o mystrings.o
strlength.exe: mystrings.o strlength.c
	gcc strlength.c mystrings.o -o strlength.exe
strconcat.exe: mystrings.o strconcat.c
	gcc strconcat.c mystrings.o -o strconcat.exe
strcompare.exe: mystrings.o strconcat.c
	gcc strcompare.c mystrings.o -o strcompare.exe