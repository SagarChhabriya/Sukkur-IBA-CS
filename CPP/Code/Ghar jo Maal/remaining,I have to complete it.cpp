#include <iostream>
using namespace std;
int main()
{
	cout<<"Writing a program in c++ to print the months of year with switch case"<<endl;
	cout<<"\n Enter the number of month which you want,between 1 and 12"<<endl;
	char a;
	char c;
	cin>>a;
	int b;
	c=(b>=-99999999 && b<=99999999);
	if(a=='a'||'A'||'e'||'E'||'i'||'I'||'o'||'O'||'u'||'U'){
	switch (a)
	{
		cout<<"Entered number of month"<<a<<endl;
		case 'a':
			cout<<"Vowel"<<endl;
			break;
		case 'e':
			cout<<"Vowel"<<endl;
			break;
		case 'i':
			cout<<"Vowel"<<endl;
			break;
		case 'o':
			cout<<"Vowel"<<endl;
			break;
		case 'u':
			cout<<"Vowel"<<endl;
			break;
		case 'A':
			cout<<"Vowel"<<endl;
		case 'E':
			cout<<"Vowel"<<endl;
			break;
		case 'I':
			cout<<"Vowel"<<endl;
			break;
		case 'O':
			cout<<"Vowel"<<endl;
			break;
		case 'U':
			cout<<"Vowel"<<endl;
			break;
		case c:
			cout<<"The Entered value is a constant"<<endl;
			break;
		default:
			cout<<"Consonant"<<endl;
	}
}
	else if (a==c)
	{
		cout<<"The Entered value is a constant"<<endl;
	}
	

}