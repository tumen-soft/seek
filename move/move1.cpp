#include <iostream>
#include <utility>
int func(auto u){int j(u);int *h(&j);u=4;return std::move(j);}; 

int main()
{
    int i(5);
//    while(true)	
    std::cout<<func((std::forward<int&>(i)))<<std::endl;
    std::cout<<func((std::forward<int&>(i)))<<std::endl;
	

}
