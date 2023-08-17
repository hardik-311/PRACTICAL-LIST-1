#include<iostream>
using namespace std;
int main()
{
	float fahren,celcius;
	cout<<"Enter The Temperature In Fahrenheit :: ";
	cin>>fahren;
	celcius=((fahren-32)*5)/9;
	cout<<"Temperature In Celsius :: "<<celcius;
	return 0;
}
