1-1a:
	@ gcc -o 1-1a.o 1-1a.c -lm
	@ ./1-1a.o
1-1b:
	@ gcc -o 1-1b.o 1-1b.c -lm
	@ ./1-1b.o
clean:
	rm ./*.o
