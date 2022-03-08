#include<iostream>
using namespace std;

class A
{
	public:
		int z = 30;
	protected:
		int y = 20;
	private:
		int x = 10;
};

class B : public A
{
	public:
		void displayz(){
			cout << "value of z is " << z << endl;  
		}
	protected:
		void displayy(){
			cout << "value of y is " << y << endl;  
		}
//	private:
//		void displayx(){
//			cout << "value of x is " << x << endl;  
//		}
};


int main(){
	
	A a;
	B b;
	
//	b.displayx();
//	b.displayy();
	b.displayz();


return 0;
}
