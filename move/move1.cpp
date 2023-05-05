#include <iomanip>
#include <iostream>
#include <utility>
#include <string>
int func(auto u){return *(std::move(u));}; 

int main()
{
    //int i(5);
    while(true)	
    std::cout<<func(new int(std::forward<int>(5)))<<std::endl;
}
