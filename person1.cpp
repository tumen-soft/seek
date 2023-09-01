#include <iostream>
#include <string>
struct Person{
	std::string nickname;
};
struct Company{
	Person* ceo;
};
struct Friends{
	Person* friend1;
};
int main(){

Person michael;
michael.nickname = "Michael";

Person* myFakeTwinBrother;
Company myEmployer;
Friends myFriends;

myFakeTwinBrother=&michael;
myEmployer.ceo=&michael;
myFriends.friend1=&michael;

std::cout<<(*myFakeTwinBrother).nickname<<std::endl;
std::cout<<myFakeTwinBrother->nickname<<std::endl;
std::cout<<myEmployer.ceo->nickname<<std::endl;
std::cout<<myFriends.friend1->nickname<<std::endl;


return 0;
}
