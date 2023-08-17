#include<iostream>
using namespace std;
int main()
{
	char op;
	float a,b;
	cout<<"Enter First Number :: ";
	cin>>a;
	cout<<"Enter The Operator :: ";
	cin>>op;
	cout<<"Enter The Second Number :: ";
	cin>>b;
	cout<<endl;
	switch(op)
	{
		case '+':
			cout<<a<<" + "<<b<<" = "<<a+b;
			break;

		case '-':
			cout<<a<<" - "<<b<<" = "<<a-b;
			break;

		case '*':
			cout<<a<<" * "<<b<<" = "<<a*b;
			break;

		case '/':
			cout<<a<<" / "<<b<<" = "<<a/b;
			break;

		default:
			cout<<"Invalid Operator :(";
			break;
	}
	return 0;
}
