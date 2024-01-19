//electrical bill by :nibha
#include<iostream>
using namespace std;
class bill
{
	int sno;
	float prev , curr , totl ,unit ;
	string cname ;
	public:
		void input();
		void calculate();
		void display();
};
void bill::input()
{
	cout<<endl<<"Enter the service no :";
	cin>>sno;
	cout<<endl<<"Enter the customer name :";
	fflush(stdin);
	getline(cin,cname);	
	cout<<endl<<"Enter previosly consumed units :";
	cin>>prev;
	cout<<endl<<"Enter currently consumed units :";
	cin>>curr;
	
}
void bill::calculate()
{
	unit=curr-prev;
	totl = 7.50 * unit;
}
void bill:: display()
{
	cout<<endl<<"service number:"<<sno<<endl<<"customer name :"<<cname<<endl<<"previous meter reading :"<<prev;
	cout<<endl<<"current meter reading : "<<curr<<endl<<"total units consumed : "<<unit<<endl<<"total bill:"<<totl;
}



int main()
{
	class bill b1;
	b1.input();
	b1.calculate();
	b1.display();


}