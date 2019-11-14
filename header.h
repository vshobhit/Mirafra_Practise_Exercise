#include<stdio.h>
#include<stdlib.h>
//Bubble sort
void Bswap(int *x,int *y);
void Bsort(int *arr,int n);

//quicksort
void quick_sort(int *arr,int low,int up,int n);
int partition(int *arr,int low,int up,int n);
void Qswap(int* x,int* y);

//selection sort
void selsort(int *arr,int n);
void Sswap(int *x,int *y);

//mergesort
void msort(int a[],int temporary[],int left,int right);
void merge_sort(int a[],int n);
void merge(int a[],int temporary[],int lpos,int rpos,int rend);

//insertion sort
void inssort(int *arr,int n);
