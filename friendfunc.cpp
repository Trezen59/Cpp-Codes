#include<iostream>
using namespace std;

class numbers{
	public:
		int num1, num2;
		
		void setdata(int a, int b){
			num1 = a;
			num2 = b;
		}
		friend int add(numbers N);
};

int add(numbers N){
	return (N.num1 + N.num2);
}

int main(){
	numbers N1;
	N1.setdata(1, 2);
	
	cout << "sum : " << add(N1) << endl;   // in friend function we do not need to call function with object

return 0;
}
