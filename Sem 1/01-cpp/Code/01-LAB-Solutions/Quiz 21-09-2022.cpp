#include <iostream>
using namespace std;
int main()
{
	/*cout<<"Enter any character"<<endl;
	 char vowel;
	 char a='a';
	 char e='e';
	 char i='i';
	 char o='o';
	 char u='u';
	 cin>>vowel;
	 if (vowel==a||e||i||o||u||'A'||'E'||'I'||'O'||'U')
	 {
	 	cout<<"you have entered vowel"<<endl;
	 }
	 else {
	 	cout<<"You have entered consonant"<<endl;
	 
	 */
	 
	/*float a;
	 cin>>a;
	 if(a>0)
	 
	 {
	 	cout<<"+ve"<<endl;
	 }
	 else if(a==0)
	 {
	 	cout<<"Niether positive nor Negative"<<endl;
	 }
	 else
	 {
	 	cout<<"-ve"<<endl;
	 }
*/	 
		cout<<"Enter your total units"	 <<endl;
		float u;
		cin>>u;
		if(u>0&&u<=100)
		{
			cout<<u*0.5<<endl;
		}
		else if(u>100&&u<=150)
		{
			cout<<u*0.75<<endl;
		}
		else if(u<=0)
		{
			cout<<"your value is undefined"<<endl;
		}
	 	else 
		 {
		 	cout<<"your units are out of 150"<<endl;
		 }
	 
	 }
