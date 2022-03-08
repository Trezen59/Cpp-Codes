#include<iostream>
using namespace std;

class person
{
	public:
	void display_person(){
		cout << "In person class" << endl;
	}
};

class student : public person
{
	public:
	void display_student(){
		cout << "In student class" << endl;
	}
};

class ITstudent : public student
{
	public:
	void display_ITstudent(){
		cout << "In ITstudent class" << endl;
	}
};


int main(){
	
	person p;
	student s;
	ITstudent its;
	
//	p.display_person();
//	p.display_student();
//	p.display_ITstudent();
//	
	s.display_person();
	s.display_student();
	s.display_ITstudent();
	
//	its.display_person();
//	its.display_student();
//	its.display_ITstudent();
	

return 0;
}
