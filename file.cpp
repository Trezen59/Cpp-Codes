#include <iostream>
#include <fstream>
using namespace std;

class student	
	{
		int roll; char name[25]; float marks;
		void getdata()
		{
			cout << "enter roll no and name" << endl;
			cin >> roll >> name;
			cout << "marks" << endl;
			cin >> marks;
		}
		public :
			void addrecord()
			{
				fstream f; student s;
				f.open("student.dat", ios::app | ios::binary);
				s.getdata();
				f.write((char *)&s, sizeof(s));
				
				f.close();
			}
	};

int main(){

//	fstream myfile;
//	myfile.open("file.txt", ios::in);
//	
//	if(!myfile)
//		cout << "the file cannot open\n";
//	else
//		cout << "successfully opened \n";
//	cout << myfile.good() << endl;



//	ifstream input; 
////	char str[30];
//	string str;	
//	input.open("file.txt");
//	int cnt = 0;
//	
//	if(!input)
//		cout << "file not open\n";
//	else
////		while(input >> str)          // word by word
//		while(getline(input, str))   // line by line
////			cout << str << " ";	
//			cnt++;
//	
//	cout << "count = "<< cnt <<  "\n";

	
//	fstream fin, fout;
//	
//	fin.open("file.txt");
//	fout.open("file1.txt");
//	
//	char ch;
//	while(!fin.eof())
//	{
//		fin.get(ch);
//		fout << ch;
//	}	
//	
//	cout << "copy done!" << endl;
//	fin.close();
//	fout.close();
//	
student s;
char ch = 'n';
do
{
	s.addrecord();
	cout << "want to add more? ('y' / 'n')\n";
	ch = getchar();
	ch = getchar();
	
} while (ch == 'y' || ch == 'Y' );
cout << "updated\n";
//s.addrecord();
	
return 0;
}
