#include<iostream>
using namespace std;
int main()
{
	int a,s1;
	float b;
	double c;
	char ch;
	s1=sizeof(a);
	s2=sizeof(b);
	s3=sizeof(c);
	s4=sizeof(ch);
	cout<<Size Of INT    :: <<s1;
	cout<<Size Of FLOAT  :: <<s2;
	cout<<Size Of DOUBLE :: <<s3;
	cout<<Size Of CHAR   :: <<s4;
	return 0;
}
