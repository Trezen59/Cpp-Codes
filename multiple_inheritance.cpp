#include<iostream>
using namespace std;

class liquid
{
	public:
	void display_liquid(){
		cout << "In liquid class" << endl;
	}
};

class fuel
{
	public:
	void display_fuel(){
		cout << "In fuel class" << endl;
	}
};

class petrol : public liquid, public fuel
{
	public:
	void display_petrol(){
		cout << "In petrol class" << endl;
	}
};


int main(){
	
	liquid l;
	fuel f;
	petrol p;
	
	l.display_liquid();
	p.display_liquid();
	p.display_fuel();
	

return 0;
}
