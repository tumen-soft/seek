#include <string>
#include <iostream>
void Fun(int& i){
	std::cout<<"ref"<<std::endl;
}
void Fun(const int& i){
	std::cout<<"const ref"<<std::endl;
}
void Fun(int&& i){
	std::cout<<"moveref"<<std::endl;
}

int main(){
int i=3;
Fun(std::move(i));
	//std::cout<<Fun()<<std::endl;
return 0;
}
