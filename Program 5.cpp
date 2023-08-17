#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"Enter Value of a :: ";
	cin>>a;
	cout<<"Enter Value of b :: ";
	cin>>b;
	temp=a;
	a=b;
	b=temp;
	cout<<"Value Of a After Swapping Is :: "<<a<<endl;
	cout<<"Value Of b After Swapping Is :: "<<b;
	return 0;
}
