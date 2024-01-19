//student record by : nibha
#include<iostream>
using namespace std;
class student
{
	int rno,fee;
	char name[100],course[100],fname[100],duration[100];
	public:
		void readdata()
		{
			cout<<"\nenter the rno:";
			cin>>rno;
			cout<<"\nenter the name:";
			fflush(stdin);
			cin.getline(name,100);
			cout<<"\nenter the father name:";
			fflush(stdin);
			cin.getline(fname,100);
			cout<<"\nenter the course:";
			fflush(stdin);
			cin.getline(course,100);
			cout<<"\nenter the duration:";
			fflush(stdin);
			cin.getline(duration,100);
			cout<<"\nenter the fee:";
			cin>>fee;
		}
		void display()
		{
			cout<<endl<<rno<<"\t"<<name<<"\t"<<fname<<"\t"<<course<<"\t"<<duration<<"\t"<<fee<<"\t";
		}
};
int main()
{
	 class student s1,s2,s3,s4;
	cout<<endl<<"size of object s1:"<<sizeof(s1);
	cout<<endl<<"size of object s2:"<<sizeof(s2);
	cout<<endl<<"size of object s3:"<<sizeof(s3);
	cout<<endl<<"size of object s4:"<<sizeof(s4);
	s1.readdata();
	s2.readdata();
	s3.readdata();
	s4.readdata();
	
	cout<<endl<<"\rno \t name \t fname \t course \t duration \t fee";
	cout<<endl<<"----\t----\t----\t----\t----";
	s1.display();
	s2.display();
	s3.display();
	s4.display();
	return 0;
}