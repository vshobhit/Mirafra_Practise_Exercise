COMPILER = gcc
result :  bsort Isort Qsort Ssort Msort main
	$(CC) -o result bubblesort.o Insertionsort.o quicksort.o selectionsort.o mergesort.o main.o 

#-c to specify it's c file
bsort: bubblesort.c
	$(COMPILER) -c bubblesort.c
Isort: Insertionsort.c
	$(COMPILER) -c Insertionsort.c
Qsort:quicksort.c
	$(COMPILER) -c quicksort.c
Ssort:selectionsort.c
	$(COMPILER) -c selectionsort.c
Msort:mergesort.c
	$(COMPILER) -c mergesort.c
main:main.c
	$(COMPILER) -c main.c

clean:
	rm -rf *.o result
