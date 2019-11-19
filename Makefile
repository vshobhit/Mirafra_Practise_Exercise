# construct a makefile for compiling files\
1. bubblesort.c\
2. Insertionsort.c\
3. mergesort.c\
4. quicksort.c\
5. selectionsort.c\
6. main.c\
7. compare_array.c\
8. compare_data_files.c\
9. files_open.c\
10. getdata_file.c\
11. print_time.c \
12. swap.c

#for denoting the compiler used
CC = gcc
FLAGS = -lm

#exclude the try.c from compilation
EXCLUDE = try.c

#SOURCEFILES variable now contains all .c files and try.c is excluded from compiling
SOURCEFILES := $(filter-out $(EXCLUDE) ,$(wildcard *.c))

#take all the .c files , which are dependent by target SOURCEFILES and convert them to .o files 
BINARY := $(SOURCEFILES:%.c=result)

#the ${BINARY} causes to replace BINS with defination defined above
all: result 


result: *.o
	@echo "checking"
	${CC} $(FLAGS)  $? -o $@
 

%.o: %.c
	@echo "creating"
	$(CC) -c $? 

clean:
	@echo "cleaning"
	rm -rf *.o result




  
