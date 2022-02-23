#include<iostream>
using namespace std;

class space{
	int x,y,z;
	public:
		space(){
			x=y=z=0;
		}
		space(int a, int b, int c){
			x=a;
			y=b;
			z=c;
		}
		
		void display(){
			cout << x << y <<  z << endl;
		}
		
		void operator -();
		
		space operator --(){
			space temp;
			temp.x = x--;
			temp.y = y--;
			temp.z = z--;
			return temp;
		}
		
		void operator ++();
};

void space::operator -(){
	cout << " - Operator " << endl;
	x=-x;
	y=-y;
	z=-z;
}

void space::operator ++(){
	cout << " ++ Operator " << endl;
	x++;
	y++;
	z++;
}

int main(){

	space s1(3, 4, 5);
	space s2(3, 4, 5);
	
//	s1.display();
//	-s1;
//	s1.display();
//	--s1;
//	s1.display();
//	++s1;
//	s1.display();

	--s1;             // 3 4 5
	s2.display();
	s2 = --s1;        // 2 3 4
	s2.display();
	s2 = --s1;        // 1 2 3
	s2.display();
	
	
return 0;
}
