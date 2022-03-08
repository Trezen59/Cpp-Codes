#include<iostream>

using namespace std;


class ABC
{
	public:
		void display(){
			cout << "this is parent";
		}
};

class XYZ : public ABC
{
	public :
		void display(){
			cout << "this is child";
		}
};

int main(){
	XYZ x, ABC a;
	x.display();
	
	
	
	return 0;
}
