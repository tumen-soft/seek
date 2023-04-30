// C program for reading
// struct from a file
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <stdio.h>
#include <stdlib.h>
//#include <mysql.h>
#include <iostream>
#include <vector>
#include <string>
#include <vector>
#include <stack>
#include <chrono>
#include "logdur.h"
using namespace std;
// Driver program
int main ()
{
	int arr[50000]={0}, key;
int k=0;
	for(int i=0;i<50000;i++)
                arr[i]=rand();


	// Open person.dat for reading

	{
        LogDuration ld("insertsort");



	// close file
       int n = sizeof(arr) / sizeof(arr[0]);

//5.2.1 Knuth
int i=0,j=0, R;
S1:;if(j>=n)goto END;
S2:;i=j - 1;R=arr[j];
S3:;if(R>=arr[i])goto S5;
S4:;arr[i+1]=arr[i];i--;if(i>0)goto S3;
S5:;arr[i+1]=R;j++;goto S1;
END:;



	}







	return 0;
}
