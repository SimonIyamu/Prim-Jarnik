exec: q8.o findMST.o
	gcc -o exec q8.o findMST.o

findMST.o: findMST.c
	gcc -c findMST.c

q8.o : q8.c
	gcc -c q8.c

clean:
	rm -f q8.o exec findMST.o
