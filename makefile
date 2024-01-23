test:
	@ gcc -o test.o test.c -lm
	@ ./test.o
1-1:
	@ gcc -o 1-1.o 1-1.c -lm
	@ ./1-1.o
1-1b:
	@ gcc -o 1-1b.o 1-1b.c -lm
	@ ./1-1b.o
clean:
	rm ./*.o
