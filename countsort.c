#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include "logdur.h"
int main(){ 
//	int arr[50000] = {0};
 //       int n = sizeof(arr)/sizeof(arr[0]); 
        for(int i=0;i<50000;i++)
                arr[i]=rand();

        LogDuration ld("countsort");
        {

	int output[n]; 
C1:;    int count[sizeof(arr)/sizeof(arr[0])]={0}, i, j; 
	//clock_t t1;
C2:;	for(i = n-1;i>=1; --i)
   	for (j=i-1;j>=0;--j){
   	if (arr[i]-arr[j]>0)
   	{
	++count[i];
	//t1 = clock();
	//printf ("%f ",((double)t1)/CLOCKS_PER_SEC);
	//printf("i=%i j=%i [%i > %i]",i,j, arr[i],arr[j]);
	//for (int k = 0; k < n; ++k)
	//printf(" %i",count[k]); 
	//printf("  inversion count i\n");
	}else{
	++count[j];
	//t1 = clock();
	//printf ("%f ",((double)t1)/CLOCKS_PER_SEC);
	//printf("i=%i j=%i [%i < %i]",i,j, arr[i],arr[j]);
	//for (int k = 0; k < n; ++k)
	//printf(" %i",count[k]);
	//printf("  not inversion count j\n");
	}
	}
	
   	//for (i = 0; i < n; ++i)
	//output[count[i]] = arr[i]; 
	
	}
	return 0; 
} 
