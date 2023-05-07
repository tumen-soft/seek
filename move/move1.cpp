#include <iostream>
#include <utility>
int func(int u=3){int j(u);;auto f=u;return ((j));}; 

int f(int* f){return f=6;}

int main()
{
    int* i=new int(5);
//    while(true)
    std::cout<<func()<<std::endl;
    std::cout<<func(new int(std::forward<int&>(*(i))))<<std::endl;
    std::cout<<func(*(i))<<std::endl;
    //i=3;
    //int* j(&i);
    //int** k(&(j));
    //**k=2;
    //std::cout<<**k<<std::endl;	
    //free((int*)i);
    //free(j);
    delete i;
    int c=int(5);
    std::cout<<f(&c)<<std::endl;
	return 0;
}
