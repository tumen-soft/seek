#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include "logdur.h"

//int arr[];
int main() 
{ 
//	int arr[50000] = {0};
//	int n = sizeof(arr)/sizeof(arr[0]); 
	for(int i=0;i<50000;i++)
		arr[i]=rand();
	{
        LogDuration ld("bubblesort");
	

B1:;	int bound = n;
   	
B2:;	for(;;){
   	int t=0;
   	for (int j = 0; j < bound-1; j++){	   
B3:;	if (arr[j]- arr[j+1]>0){ 
	int temp = arr[j];
	arr[j] = arr[j+1]; 
	arr[j+1] = temp;	
   	t=j;
        //printf ("%f ",((double)t1)/CLOCKS_PER_SEC);
	//printf("j=%i [%i-%i<0] ", j, arr[j], arr[j+1]);
	//for (int i=0; i < n; i++) 
	//	printf("%d ", arr[i]); 
	//printf("\n"); 
   	}
   	}
B4:;   	if (t==0) {
	//for (int i=0; i < n; i++) 
	//	printf("%d ", arr[i]); 
	//printf("\n"); 
	for (int k=0;k<n;k++)if (arr[k]==4)printf("found 4");return 0;
	}
   	bound=t+1;
	
   }
}
	for (int k=0;k<n;k++)printf("%d", arr[k]);
}	

