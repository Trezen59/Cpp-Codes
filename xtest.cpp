#include <iostream>
using namespace std;

void xtest(int test)
{
	cout << " inside xtest, test is :" << test << endl;
	if(test) throw test;
}

int main(){
	
	cout << "start\n";
	try
	{
		cout << "inside try block\n";
		xtest(0);
		xtest(1);
		xtest(2);
	}
	
	catch(int i)
	{
		cout << "caught an exception, value is : ";
		cout << i <<endl;
	}
	cout << "end\n";
	

return 0;
}
