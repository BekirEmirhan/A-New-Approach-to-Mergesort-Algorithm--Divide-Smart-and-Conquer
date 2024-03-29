#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


void display(double *arr,int size){
	for(int i=0;i<size;i++) printf("%lf\n",arr[i]);
}

void swap(double* a, double* b)
{
 
    double temp = *a;
 
    *a = *b;
 
    *b = temp;
}
 
// To heapify a subtree rooted with node i
// which is an index in arr[].
// n is size of heap
void heapify(double *arr, int N, int i)
{
    // Find largest among root, left child and right child
 
    // Initialize largest as root
    int largest = i;
 
    // left = 2*i + 1
    int left = 2 * i + 1;
 
    // right = 2*i + 2
    int right = 2 * i + 2;
 
    // If left child is larger than root
    if (left < N && arr[left] > arr[largest])
 
        largest = left;
 
    // If right child is larger than largest
    // so far
    if (right < N && arr[right] > arr[largest])
 
        largest = right;
 
    // Swap and continue heapifying if root is not largest
    // If largest is not root
    if (largest != i) {
 
        swap(&arr[i], &arr[largest]);
 
        // Recursively heapify the affected
        // sub-tree
        heapify(arr, N, largest);
    }
}
 
// Main function to do heap sort
void heapSort(double *arr, int N)
{
 
    // Build max heap
    for (int i = N / 2 - 1; i >= 0; i--)
 
        heapify(arr, N, i);
 
    // Heap sort
    for (int i = N - 1; i >= 0; i--) {
 
        swap(&arr[0], &arr[i]);
 
        // Heapify root element to get highest element at
        // root again
        heapify(arr, i, 0);
    }
}


int main(int argv,char **argc){
	int size = atoi(argc[1]);
	double*arr = (double*)malloc(sizeof(double)*size);
	for(int i=0;i<size;i++) scanf("%lf",&arr[i]);
	//display(arr,size);
	clock_t begin = clock();
	heapSort(arr,size);
	clock_t end = clock();
	printf("%lf\n",(double)(end-begin)/1000000);
	//printf("%d\n",size);
	//display(arr,size);
	return 0;
}
