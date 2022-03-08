#include<iostream>
using namespace std;

class class2;

class class1{
	public:
		int x, y;
		friend void member_func_2();
		void member_func_1(){
			cout << "member function 1 " << endl;
		}
};

class class2{
	public:
		int a, b;
		friend void member_func_1();
		void member_func_2(){
			cout << "member function 2 " << endl; 
		}
};


int main(){
	class1 c1;
	class2 c2;
	
//	c1.member_func_2();
	
	cout << endl;
	
	c2.member_func_1();
	
return 0;
}
