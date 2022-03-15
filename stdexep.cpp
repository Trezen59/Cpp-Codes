#include <iostream>
#include <exception>
using namespace std;

//int main(){
//	try
//	{
//		int * arr = new int[100];
//	}
//	catch(exception &e)
//	{
//		cout << "standard exception" << e.what() << endl;
//	}

//return 0;
//}

//class myexception : public exception
//{
//	public:
//		const char* what() const throw()
//		{
//			return "attempted to divide by zero..!\n";
//		}
//};

//int main()
//{
//	try
//	{
//		int x,y;
//		cout << "enter the two numbers :\n";
//		cin >> x >> y;
//		
//		if(y == 0)
//		{
//			myexception z;
//			throw z;
//		}
//		else
//		{
//			cout << "x / y = " << x/y <<endl;
//		}
//	}
//		
//		catch(exception &e)
//		{
//			cout << e.what();
//			
//		}
//	

//return 0;
//}


class base {};
class derived : public base {};

int main()
{
	try
	{
		throw derived();
	}
	
	catch(derived d)
	{
		cout << "derived object caught\n";
	}
	
	catch(base b)
	{
		cout << " base object caught\n";
	}
	
	return 0;
}
