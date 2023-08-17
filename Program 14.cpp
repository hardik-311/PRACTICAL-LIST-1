#include<iostream>
using namespace std;
int pl(int);
int main()
{
	int n;
	cout<<"Enter Any Number :: ";
	cin>>n;
	pl(n);
	return 0;
}
int pl(int n)
{
	int temp,r,rev=0;
	temp=n;
	while(n>0)
	{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
	}
	if(rev==temp)
		 cout<<rev<<" Is Palindrome Number.";
	else
		 cout<<rev<<" Is Not Palindrome Number.";
	return 0;
}
