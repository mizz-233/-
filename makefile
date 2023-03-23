app.o:linklist.o main.o
	gcc linklist.o main.o -o app.o
linklist.o:linklist.c
	gcc -c linklist.c -o linklist.o
main.o:main.c
	gcc -c main.c -o main.o
