// C program for reading
// struct from a file
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// struct person with 3 fields


#include <stdio.h>
#include <stdlib.h>
//#include <mysql.h>
#include <iostream>
#include <vector>
#include <string>
#include <vector>
#include <stack>
//mysqld -u root &
//mysql  -u root -ppassword -P 33060
//g++ 1.c -lmysqlcppconn8
//using namespace std;
//#include <mysqlx/xdevapi.h>
//using namespace mysqlx;
#include <chrono>
#include "logdur.h"











// Driver program
int main ()
{
        int arr[50000]={0}, key;
int k=0;
        for(int i=0;i<50000;i++)
                arr[i]=rand();


        // Open person.dat for reading

        {
        LogDuration ld("quicksort");




	// close file
       int n = sizeof(arr) / sizeof(arr[0]);

std::stack<std::pair<int,int>> s2,s;
int l,r,i,j,K;
Q1:;s.push(std::make_pair(0,n));
Q1a:;if(!s.empty()){l=s.top().first;r=s.top().second;s.pop();}
  Q2:;i=l;j=r;K=arr[(j-i)/2+i];
    Q3:;if(arr[i]-K<0){i++;goto Q3;}
    Q4:;if(arr[j]-K>0){j--;goto Q4;}
    Q5:;
    Q6:;if(i-j<=0){



	       int tmp=std::move(arr[i]);
	       arr[i]=std::move(arr[j]);
	       arr[j]=std::move(tmp);


	       i++;j--;}
    Q6a:;if(i<=j)goto Q3;
    Q7:;if(r>i){s.push(std::make_pair(i,r));}
    Q7a:;if(j>l){s.push(std::make_pair(l,j));}
Q8:;if(!s.empty()) goto Q1a;


























	}
	return 0;
}
