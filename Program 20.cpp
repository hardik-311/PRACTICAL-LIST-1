#include<iostream>
using namespace std;
long fact(int no);
int main()
{
	int no;
	cout<<"Enter the Number To Find It's Factorial :: ";
	cin>>no;
	cout<<"Factorial Of Given Number Is :: "<<fact(n);
	return 0;
}
long fact(int no)
{
	int i;
	long f=1;
	for(i=1;i<=no;i++)
	{
		f=f*i;
	}
	return f;
}
