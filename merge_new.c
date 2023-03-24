#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void display(double arr[],int size){
	for(int i=0;i<size;i++) printf("%lf\n",arr[i]);
}

void Merge_M(double *arr,int p,int q,int r,int *b){
	int n1 = b[q]-b[p];
	int n2 = b[r]-b[q];
	//double L[n1+1];
	double *L = (double*)malloc(sizeof(double)*(n1+1));
	//double R[n2+1];
	double *R = (double*)malloc(sizeof(double)*(n2+1));
	for(int i=0;i<=n1-1;i++){
		L[i] = arr[b[p]+i+1];
	}
	for(int i=0;i<=n2-1;i++){
		R[i] = arr[b[q]+i+1];

	}
	L[n1] = 999999999.0;
	R[n2] = 999999999.0;
	int i = 0;
	int j = 0;
	for(int k = 0;k<=n1+n2-1;k++){
		if(L[i]<=R[j]){
			arr[b[p]+k+1] = L[i++];
		}
		else{
			arr[b[p]+k+1] = R[j++];
		}
	}
}

   


double *sort(double *arr,int n){
	int *b = (int*)malloc(sizeof(int)*((n/2)+1));              // pointerle tanımla
        double *L = (double*)malloc(sizeof(double)*(n));
	//double R[n2+1];
	double *R = (double*)malloc(sizeof(double)*(n));
	b[0] = -1;
	int t=0;
        double temp=0.;
        int flag=1;
 
    /*	
	8
	3
	1
	7
	15
	11
	10
	2
	6
	9
	12
*/
    
   
    double inc = -999999999.0;
    double dec = 999999999.0;
          int k=0, kk=1, s=0;
    // Iterating through the array
    for (int i = 0; i < n-1; i++)
    { 
	flag=1;
        // If current element can be appended
        // to both the sequences
        if (inc < arr[i] && arr[i] < dec)
        {
            // If next element is greater than
            // the current element
            // Then append it to the strictly
            // increasing array
            if (arr[i] < arr[i + 1])
            {
                inc = arr[i];
                L[k]=arr[i];
                k++;
            }
 
            // Otherwise append it to the
            // strictly decreasing array
            else
            {
                dec = arr[i];
                R[kk]=arr[i];
                kk++;
            }
        }
         
        // If current element can be appended
        // to the increasing sequence only
        else if (inc < arr[i])
        {
            inc = arr[i];
            L[k]=arr[i];
            k++;
        }
         
        // If current element can be appended
        // to the decreasing sequence only
        else if (dec > arr[i])
        {
            dec = arr[i];
            R[kk]=arr[i];
            kk++;
        }
         
        // Else we can not make such sequences
        // from the given array
        else{ 
		flag=0;
                 inc = -999999999.0;
                 dec = 999999999.0;
                 t++;
                 b[t]=i-1;
                 L[k]=999999999.0;;
                 R[0]=999999999.0;
                 int il=0;
                 int ir=0;
                 for(int j=b[t-1]+1;j<=b[t];j++)
                 {
			if(L[il]<R[kk-1-ir]) {
				arr[j]=L[il];
				il++;
			}
                 	else {
				arr[j]=R[kk-1-ir];ir++;
			}
                  
        	 }
		k=0;
                kk=1;
                s=0;
                i--;
            
        }
    }
    if(flag==1){t++;
    b[t]=n-2;
    L[k]=999999999.0;
    R[0]=999999999.0;
    int il=0;
    int ir=0;
    for(int j=b[t-1]+1;j<=b[t];j++)
    {if(L[il]<R[kk-1-ir]) {arr[j]=L[il];il++;}
     else {arr[j]=R[kk-1-ir];ir++;}
    }
    }
     
    b[t+1]=n-1;
    k=t+1;
	//printf("%d\n",k);
	//clock_t begin = clock();
    for(int l=k;l>1;l=ceil(l/2.)){
			int t=0;
		 	for(int i=0;i<l-1;i=i+2){
		  		Merge_M(arr,i,i+1,i+2,b);
		  		t++;
		  		b[t]=b[i+2];
		 	}
		  	b[t+1]=n-1;
                  	
                }
	
	//clock_t end = clock();
	//printf("%lf\n",(double)(end-begin)/1000000);

 return arr;   
}
 


	



int main(int argv, char **argc){
	int size = atoi(argc[1]);
	double *arr = (double*)malloc(sizeof(double)*size);
	for(int i=0;i<size;i++) scanf("%lf",&arr[i]);
	clock_t begin = clock();
	arr = sort(arr,size);
	clock_t end = clock();
	printf("%lf\n",(double)(end-begin)/1000000);
	//display(arr,size);
	return 0;
}




