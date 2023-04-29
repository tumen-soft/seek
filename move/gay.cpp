#include <iostream>



class Circle{
	public:
	Circle(int R):Radius(R){};
	int getRadius(){return Radius;}
	private:
	int Radius;
	double Pi=3.14;
	
};
int main(){

	Circle C(3);
	std::cout<<C.getRadius();

return 0;
}
