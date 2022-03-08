#include<iostream>
using namespace std;

class A
{
	public:
		void display_A(){
			cout << "In class A" << endl;
		}
};

class B : public A
{
	public :
		void display_B(){
			cout << "In class B" << endl;
		}
};

class C : public A
{
	public :
		void display_C(){
			cout << "In class C" << endl;
		}
};

class D : public B, public C 
{
	public :
		void display_D(){
			cout << "In class D" << endl;
		}
};

int main(){

	A a;
	B b;
	C c;
	D d;
	
	b.display_A();
	c.display_A();
	
	d.display_B();
	d.display_C();
	
//	d.display_A();


return 0;
}
