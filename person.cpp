#include <string>
//#include <type_traits>
using namespace std;
struct Person{
	Person(const string& name){};
	template<typename T> Person(T&&){};

};
int main(){

Person p1("Bjarne");
string name="Herb";
Person p2(name);

Person p3(p1);
return 0;
}
