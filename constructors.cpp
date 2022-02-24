
#include<iostream>
using namespace std;

class democonst{
	public:
		int a, b;
		
		democonst(){   // default constructor with same name as class and no return type
			a = 1;
			b = 2;
		}
		
		democonst(int x, int y) {        // parameterized constructor
	 		a = x;
			b = y;
		}
		
		democonst(const democonst &c1){    // copy constructor with "const" keyword
			a = c1.a;
			b = c1.b;
		}
		
		void display(){
			cout << a << " " << b << endl;
		}
};

int main(){

	democonst c;        // default constructor
	c.display();
	
	democonst c1(10, 20);  // parameterized constructor
	
	democonst c2 = c1;    // copy constructor
	
	cout << "c1 : ";
	c1.display();
	cout << endl;
	
	cout << "c2 : ";
	c2.display();

return 0;
}
