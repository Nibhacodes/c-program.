#include<iostream>
using namespace std;
class Calculator
{	
	int a , b , add, sub , div , mul;
	
	public:
		void input()
		{
			cout<<endl<<"enter first number:";
			cin>>a;
			cout<<endl<<"enter second number:";
			cin>>b;
		}
		void addition()
		{
			add=a+b;
			
		}
		void subtraction()
		{
			sub=a-b;
			
		}
		void multiply()
		{
			mul=a*b;
			
		}
		void division()
		{
			div=a/b;
		
		}
		void display()
		{
			cout<<endl<<"Add:"<<add;
			cout<<endl<<"subtract:"<<sub;
			cout<<endl<<"multiply:"<<mul;
			cout<<endl<<"division:"<<div;
		
			
		}
};
int main()
{
	class Calculator c1;
	c1.input();
	c1.addition();
	c1.subtraction();
	c1.division();
	c1.multiply();
	c1.display();

	
}