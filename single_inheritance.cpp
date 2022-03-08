#include<iostream>

using namespace std;

class animal{
	public:
		int legs = 4;
		void display_legs()
		{
			cout << "Animals have " << legs << " legs"<< endl;
		}		
};

class dog : public animal{
	public:
		int tail = 1;
		void display_tails()
		{
			cout << "dogs have " << tail << " tail"<< endl;
		}
};

int main()
{

	animal a1;
	dog d1;
	
	a1.display_legs();
	a1.display_tails();     // error
	
	d1.display_legs();
	d1.display_tails();
	

return 0;
}
