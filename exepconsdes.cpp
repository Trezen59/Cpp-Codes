#include <iostream>
using namespace std;

class divide
{
	private: 
	int * x;
	int * y;
	
	public :
	divide()          // constructor
	{
		x = new int();
		y = new int();
		cout << "enter two numbers\n";
		cin >> *x >> *y;
		try
		{
			if(*y == 0)
			{
				throw *x;
			}
		}
		
		catch(int)
		{
			delete x; delete y;
			cout << "sec num cannot be 0\n";
			throw;
		}
	}
	
	~divide(){         // destructor
		try
		{
			delete x; delete y;
		}
		catch(...)
		{
			cout << "error while deallocating memory\n";
		}
	}
	
	float division(){
		return (float) *x / *y ;
	}
	
};

int main(){
	try
	{
		divide d;
		float res = d.division();
		cout << "result of div = " << res << endl;
	}	
	catch(...)
	{
		cout << "unknown exception..!\n";
	}
	
return 0;
}
