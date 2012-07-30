all: david.o aorta.o
	gcc -o david david.o aorta.o

%.o: %.c
	gcc -c -o $@ $<
