#include<iostream>

using namespace std;

class base {
    
		int x ;
	public:
	base() { cout << "base constructor"<<endl;}
};

class derived : private base
{
	int y;
	public:
		derived(){cout << "derived default constructor"<<endl;}
		derived(int i){cout << "derived parameterized constructor"<<endl;}
};

int main()
{
	base b;
	derived d;
	derived d1(10);

return 0;
}
