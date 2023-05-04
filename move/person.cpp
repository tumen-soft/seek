#include <string>
#include <type_traits>
#include <iostream>
using namespace std;
struct Person{
	public:
	Person(const string& name):_name{name}{}
	Person(Person& p):_name{p._name}{}
	//template<typename T> Person(T&& nam){_name=nam;};
	string _name;
};
int main(){

Person p1("Bjarne");
string name="Herb";
Person p2(name);

Person p3(p1);
cout<< Person{p1}._name<<endl;
return 0;
}
