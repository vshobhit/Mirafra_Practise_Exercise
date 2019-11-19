#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define MAX 10
//for printing time of each sorting
void print_time(int ,int);


void swap(int* x,int*y);

void compare_array(int *temparray,int *checkarray);
void display(int *arr ,int n);
void compare_file_data(int *buffer,int N,int *cur_p);
void getdata_file(int *buffer,int *N);
void data_write(int *buffer,int N);



//file pointers for opening source and destination file
void file_open();

//Bubble sort
void Bswap(int *x,int *y);
void Bsort(int *arr,int n,int* temparray);

//quicksort
void quick_sort(int *arr,int low,int up,int n,int* temparray);
int partition(int *arr,int low,int up,int n);
void Qswap(int* x,int* y);

//selection sort
void selsort(int *arr,int n,int* temparray);
void Sswap(int *x,int *y);

//mergesort
void msort(int a[],int temporary[],int left,int right);
void merge_sort(int a[],int n,int *temparray);
void merge(int a[],int temporary[],int lpos,int rpos,int rend);

//insertion sort
void inssort(int *arr,int n,int *temparray);
