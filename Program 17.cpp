#include<iostream>
using namespace std;
void fib(int n)
{
	int a[n],i;
	a[0]=0;
	a[1]=1;
	for(i=2;i<n;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int n;
	cout<<"Enter Number Here :: ";
	cin>>n;
	cout<<endl<<"Fiboncci Series :: "<<endl;
	fib(n);
	return 0;
}
