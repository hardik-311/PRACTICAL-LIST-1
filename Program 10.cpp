#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter Value For a :: ";
	cin>>a;
	cout<<"Enter Value For b :: ";
	cin>>b;
	cout<<"Enter Value For c :: ";
	cin>>c;

	if(a>b && a>c)
		cout<<a<<" Is Largest Number.";

	else if(b>c)
		cout<<b<<" Is Largest Number.";

	else
		cout<<c<<" Is Largest Number.";

	return 0;
}
