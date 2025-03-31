#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "logdur.h"
int main() 
{
//        int arr[50000] = {0};
//        int n = sizeof(arr)/sizeof(arr[0]); 
        for(int i=0;i<50000;i++)
                arr[i]=rand();
	{
        LogDuration ld("coctailsort");
        

        int i, j, k;
	for(i = 0; i < n/2; i++)
        {
        for(j = i; j < n-i-1; j++)
        {
        if(arr[j]-arr[j+1]>0)
        {
        int temp = arr[j];
        arr[j] = arr[j+1]; 
        arr[j+1] = temp;   
        }
        }
	for(k = n-2-i; k > i; k--)
	{
	if(arr[k]- arr[k-1]<0)
	{
	int temp = arr[k];
	arr[k] = arr[k-1]; 
	arr[k-1] = temp;
	}
	}
        }
	}
	//for (int i=0; i < n; i++) 
        //	printf("%d ", arr[i]); 
        //printf("\n"); 
return 0;
}
