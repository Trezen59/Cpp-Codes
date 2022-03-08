#include<iostream>

using namespace std;

class student {
  public:
	int roll_no;
	string name;
	void info() {
		cout << "Enter student's roll no" << endl;
		cin >> roll_no;
		cout << "Enter student's name " << endl;
		cin >> name;
		  }
};

class test {
  public:
	int sub1, sub2, sub3, sub4, sub5;
	
};

class result: public student, public test {
  public: float totalMarks;
  float percent;
  test t;
  void find() {
    t.ip();
    totalMarks = t.sub1 + t.sub2 + t.sub3 + t.sub4 + t.sub5;
    //cout<<"Student's total marks is : "<<totalMarks<<endl;
    percent = (totalMarks / 500) * 100;
    //cout<<"Student's percentage is :"<<percent<<endl;
  }

  //void disp(){
  //cout<<"Student's total marks is :"<< totalMarks<<endl;
  //cout<<"Student's percentage is :"<< percent<<endl;
  //}
};

int main() {
  int n;
  result r1;
  r1.info();
  r1.find();
  cout << "Student's name is :" << r1.name << endl;
  cout << "Student's roll number is :" << r1.roll_no << endl;
  cout << "Student's total marks is :" << r1.totalMarks << endl;
  cout << "Student's percentage is :" << r1.percent << endl;
  return 0;
}
