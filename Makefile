COMPILER = gcc
result :  bsort Isort Qsort Ssort Msort
	$(CC) bubblesort.o Insertionsort.o quicksort.o selectionsort.o mergesort.o 

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

clean:
	rm -rf *.o a.out
