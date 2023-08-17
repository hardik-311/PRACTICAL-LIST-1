#include<iostream>
using namespace std;
void vowel(char);
int main()
{
	char c;
	cout<<"Enter Any Character To Check If It Is Vowel Or Consonant :: ";
	cin>>c;
	vowel(c);
	return 0;
}
void vowel(char c)
{
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
		cout<<c<<" Is Vowel :)";
	else if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
		cout<<c<<" Is Vowel :)";
	else
		cout<<c<<" Is Consonant :)";
}
