#include<iostream>
using namespace std;

class calculator{
	public:
		int input1, input2;
		
		void setInput(int a, int b){
			input1 = a;
			input2 = b;
		}
		int add(calculator obj1, calculator obj2){
			return obj1.input1+obj2.input1 ;
		}
		int sub(calculator obj1, calculator obj2){
			return obj1.input1-obj2.input1 ;
		}
		int mul(calculator obj1, calculator obj2){
			return obj1.input1*obj2.input1 ;
		}
		int div(calculator obj1, calculator obj2){
			return obj1.input1/obj2.input1 ;
		}
		
};

int main(){

	calculator obj1, obj2;
	obj1.setInput(10, 2);
	obj2.setInput(5, 5);
	
	cout << "inputs are : " << obj1.input1 << " " << obj2.input2 << endl;
	cout << "addition : " << obj1.add(obj1, obj2) << endl;
	
	cout << "inputs are : " << obj1.input1 << " " << obj2.input2 << endl;
	cout << "subtraction : " << obj1.sub(obj1, obj2) << endl;
	
	cout << "inputs are : " << obj1.input1 << " " << obj2.input2 << endl;
	cout << "multiplication : " << obj1.mul(obj1, obj2) << endl;

	cout << "inputs are : " << obj1.input1 << " " << obj2.input2 << endl;
	cout << "division : " << obj1.div(obj1, obj2) << endl;
	
return 0;
}
