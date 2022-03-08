#include<iostream>

using namespace std;

//class base {
//    protected:
//		int i,j ;
//	public:
//		void set(int a, int b) {i = a; j=b;}
//		void show(){ cout << i<< " "<< j<< "\n";}
//};

//class derived : private base
//{
//	int k;
//	public:
//		void setk(){ k = i*j;}
//		
////		derived (int x) {k = x;}
//		void showk(){ cout << k;}

//};

//class derived2 : public derived
//{
//	int m;
//	public:
//		void setm(){ m = i-j;}
//		
////		derived (int x) {k = x;}
//		void showm(){ cout << m <<"\n";}

//};

//int main()
//{
//	derived ob1;
//	derived2 ob2;
//	ob1.setk();
//	ob1.showk();
//	
////	ob2.set(3,4);
////	ob2.show();
//	return 0;
//	
//}


class ABC {
	public:
		void setProtMemb(int i){
			m_protMemb = i;
		}
		void display(){
			cout<< m_protMemb<< endl;
		}
	protected:
		int m_protMemb;
		void Protfunc(){
			cout << "\nAccess allowed\n";
		}
};

class XYZ {
	public: 
		void useProtfunc(){
			Protfunc();
		}
};


int main(){
	ABC a; XYZ x;
	a.m_protMemb;         // error
	a.setProtMemb(0); // ok
	a.display();
	a.Protfunc();  // error
	x.setProtMemb(5);    //ok
	x.display();
	x.useProtfunc();  //ok
	
	return 0;
}
