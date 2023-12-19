#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void display(double arr[],int size){
	for(int i=0;i<size;i++) printf("%lf\n",arr[i]);
}


void insertion(double arr[],int size){
	int i = 1;
	while(i<size){
		int j = i-1;
		double temp= arr[i];
		while(arr[j] >temp && j>=0){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
		i++;
	
	}
}


int main(int argv,char **argc){
	int size = atoi(argc[1]);
	double*arr = (double*)malloc(sizeof(double)*size);
	for(int i=0;i<size;i++) scanf("%lf",&arr[i]);
	clock_t begin = clock();
	insertion(arr,size);
	clock_t end = clock();
	printf("%lf\n",(double)(end-begin)/1000000);
	//display(arr,10000);
	return 0;
}
