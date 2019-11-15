COMPILER = gcc
result :  bsort Isort Qsort Ssort Msort main
	$(CC) -o result bubblesort.o Insertionsort.o quicksort.o selectionsort.o mergesort.o main.o  

.PHONY : clean
# -c to specify it's c file and to make .o file
bsort: bubblesort.o
	$(COMPILER) -c bubblesort.c
Isort: Insertionsort.o
	$(COMPILER) -c Insertionsort.c
Qsort:quicksort.o
	$(COMPILER) -c quicksort.c
Ssort:selectionsort.o
	$(COMPILER) -c selectionsort.c
Msort:mergesort.o
	$(COMPILER) -c mergesort.c
main:main.o
	$(COMPILER) -c main.c
clean:	
	rm -rf *.o result
