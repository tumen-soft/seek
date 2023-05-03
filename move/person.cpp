#include <string>
#include <type_traits>
#include <iostream>
using namespace std;
struct Person{
	Person(const string& name){_name=name;};
	//template<typename T> Person(T&& nam){_name=nam;};
	string _name="test";
};
int main(){

Person p1("Bjarne");
string name="Herb";
Person p2(name);

Person p3(p1);
cout<< p3._name<<endl;
return 0;
}
