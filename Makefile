#let's construct a makefile for compiling files\
1. bubblesort.c\
2. Insertionsort.c\
3. mergesort.c\
4. quicksort.c\
5. selectionsort.c\
6. main.c

#for denoting the compiler used
CC = gcc
FLAGS = -lm
#SOURCEFILES variable now contains all .c files
SOURCEFILES := $(wildcard *.c)

#take all the .c files , which are dependent by target SOURCEFILES and convert them to .o files 
BINARY := $(SOURCEFILES:%.c=%.o)

#the ${BINARY} causes to replace BINS with defination defined above
all: $(BINARY) 
	$(CC) -o result *.o 

#%: %*.o\
	@echo "shobhit"\
	${CC} ${FLAGS} $< -o $@
 

%.o: %.c
	@echo "creating"
	$(CC) -c $< 

clean:
	@echo "cleaning"
	rm -rf *.o




  
