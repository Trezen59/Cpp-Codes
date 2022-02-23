#include<iostream>

using namespace std;

class Measure {
	public:
		int height;
		int width;
		int length;
		
		void setInput(int h, int l, int w){
			height = h;
			width = w;
			length = l;
		}
		int area(){
			return 2*(length*width) + 2*(length*height) + 2*(height*width);
		}
		int volume(){
			return height*width*length;
		}
};

int main(){
	Measure obj1;
	Measure obj2;
	obj1.setInput(10, 10, 10);
	obj2.setInput(1,1,1);
	
	cout << obj1.area() << " " << obj1.volume() << endl;
	cout << obj2.area() << " " << obj2.volume() << endl;
	
	return 0;
}
