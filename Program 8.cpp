#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float p,r,t,ci;
	cout<<"Enter The Principal Amount :: ";
	cin>>p;
	cout<<"Enter The Rate :: ";
	cin>>r;
	cout<<"Enter The Terms Of Year :: ";
	cin>>t;
	ci=p*(pow((1+r/100),t));
	cout<<"Compound Interest = "<<ci;
	return 0;
}
