#include <iostream>
using namespace std;
int main()
{
		//1.Personal Information
	int a=97,b=98,c=99,d=100,e=101,f=102,g=103,h=104,i=105,j=106,k=107,l=108,m=109,n=110,o=111,p=112,q=113,r=114,s=115,t=116,u=117,v=118,w=119,x=120,y=121,z=122;
	int A=65,B=66,C=67,D=68,E=69,F=70,G=71,H=72,I=73,J=74,K=75,L=76,M=77,N=78,O=79,P=80,Q=81,R=82,S=83,T=84,U=85,V=86,W=87,X=88,Y=89,Z=90;

	char a1=a,b1=b,c1=c,d1=d,e1=e,f1=f,g1=g,h1=h,i1=i,j1=j,k1=k,l1=l,m1=m,n1=n,o1=o,p1=p,q1=q,r1=r,s1=s,t1=t,u1=u,v1=v,w1=w,x1=x,y1=y,z1=z;
	char A1=A,B1=B,C1=C,D1=D,E1=E,F1=F,G1=G,H1=H,I1=I,J1=J,K1=K,L1=L,M1=M,N1=N,O1=O,P1=P,Q1=Q,R1=R,S1=S,T1=T,U1=U,V1=V,W1=W,X1=X,Y1=Y,Z1=Z;

	cout<<N1<<a1<<m1<<e1<<" : "<<S1<<a1<<g1<<a1<<r1<<" "<<C1<<h1<<h1<<a1<<b1<<r1<<i1<<y1<<a1<<endl;
	cout<<A1<<d1<<d1<<r1<<e1<<s1<<s1<<" : "<<" "<<M1<<i1<<r1<<z1<<a1<<n1<<p1<<u1<<r1<<" "<<M1<<o1<<h1<<a1<<l1<<l1<<a1<<" "<<K1<<a1<<n1<<d1<<h1<<k1<<o1<<t1<<" (79160) " <<S1<<i1<<n1<<d1<<h1<<endl;
	cout<<T1<<e1<<l1<<e1<<p1<<h1<<o1<<n1<<e1<<" "<<N1<<o1<<":"<<" 0336-336-2473 "<<endl;
	cout<<S1<<u1<<k1<<k1<<u1<<r1<<" "<<I1<<B1<<A1<<" "<<U1<<n1<<i1<<v1<<e1<<r1<<s1<<i1<<t1<<y1<<" "<<K1<<a1<<n1<<d1<<h1<<k1<<o1<<t1<<" "<<C1<<a1<<m1<<p1<<u1<<s1<<endl;
	
	//2.Sales prediction
	cout<<"\n\nEnter your projected amount of total Sales"<<endl;
	float sale;
	cin>>sale;
	if(sale>0)
	{	cout<<"your profit "<<(sale*23)/100<<"(23%) made of amount "<<sale<<endl;	}
	else {	cout<<"your entered amount is -ve"<<endl;}
	//3.Land Calculation
	cout<<"\n\nEnter your land's size in Square feet and the program will say you that you land is ____ acres"<<endl;
	unsigned long int acre;
	cin>>acre;
	cout<<"Your Land is "<<acre/43560<<" acres"<<endl;
	
	//4.Total Purchase
	cout<<"\n\nEnter your five purchased items's price(Purchase atleast four items and Enter the amount of atleast four  and fifth(which one you have not purchased) one's as 0) "<<endl;
	float fi,se,th,fo,ff,tt;
	cout<<"Enter the amount of chocolate"<<endl;
	cin>>fi;
	cout<<"Enter the amount of Cold Drink"<<endl;
	cin>>se;
	cout<<"Enter the amount of Biscuts"<<endl;
	cin>>th;
	cout<<"Enter the amount of Snacks"<<endl;
	cin>>fo;
	cout<<"Enter the amount of Nimco "<<endl;
	cin>>ff;
	tt=fi+se+th+fo+ff;
	if(fi !=0 && se!=0 && th !=0 && fo !=0 && ff!=0)
	{	cout<<" Total Amount : "<<tt<<endl;	
		cout<<"Average : "<<(fi+se+th+fo+ff)/5<<endl;}
	else if(fi==0 && se!=0 && th!=0 && fo!=0 && ff!=0)
	{ 	cout<<"Total amount :"<<tt<<endl;
		cout<<"Average : "<<tt/4<<endl;}
	else if(se==0 && fi!=0 && th!=0 && fo!=0 && ff!=0)
	{	cout<<"Total Amount "<<tt<<endl;
		cout<<"Average :"<<tt/4<<endl;}
	else if(th==0 && fi!=0 && se!=0 && fo!=0 && ff!=0)
	{	cout<<"Total amount : "<<tt<<endl;
		cout<<"Average : "<<tt/4<<endl;}
	else if(fo==0 && fi!=0 && se!=0 && th!=0 && ff!=0)
	{	cout<<"Total Amount : "<<tt<<endl;
		cout<<"Average : "<<tt/4<<endl;}
	else if(ff==0 && fi!=0 && se!=0 && th!=0 && fo!=0)
	{	cout<<"Total Amount : "<<tt<<endl;
		cout<<"Average : "<<tt/4<<endl;}
	else if(fi==0 && se==0 && th==0 && fo==0 && ff)
	{	cout<<"Total Amount : "<<tt<<endl;
		cout<<"Average :"<<tt<<endl;}
	else {cout<<"Purchase Atleast Four products and insert their amount"<<endl;}
	
	//5.Distance Traveled
	cout<<"\n\nEnter the speed of your vehicle mph and the time(in hours),the program will say you that how many miles will your vehicle travel on your given data"<<endl;
	float miles,hours;
	cin>>miles;
	cout<<"Enter the hours "<<endl;
	cin>>hours;
	cout<<"your car will travel  "<<miles*hours<<" miles on your given data,speed "<<miles<<" miles per hour and "<<hours<<" hours"<<endl;
	
	//6.Sales tax
	cout<<"\n\nEnter the amount of purchase and the program give you the total amount with State Sales tax and also with Country Sales tax"<<endl;
	float amount,sst,cst;
	cin>>amount;
	sst=(amount*5)/100;
	cst=(amount*2.5)/100;
	cout<<"your purchase amount "<<amount<<endl;
	cout<<"State Sales tax (5%) is "<<sst<<endl;
	cout<<"Country Sales tax(2.5%) is "<<cst<<endl;
	cout<<"Total amount plus taxes is "<<cst+sst+amount<<endl;
	
	//7.Miles per-gallon
	cout<<"\n\nEnter the miles and gas's gallons which you have used and program will say whether they are right or not"<<endl;
	cout<<"How Much miles your vehicle has traveled"<<endl;
	float mil,gal,tot,mi=1.25,gl=0.8;
	cin>>mil;
	cout<<"Enter the number of gallons"<<endl;
	cin>>gal;
	cout<<"your vehicle have used "<<(mil/mil)*gal/mil<<" gallons on per mile"<<endl;
	cout<<"\n your vehicle have to consume  "<<(mil/mil)*0.8<<" gallons of gas on "<<mil/mil<<" mile"<<endl;
	cout<<" total miles are "<<mil<<" then your vehicle should consume "<<mil*0.8<<" gallons of gas"<<endl;
	
	//8.Tip,Tax and total 
	cout<<"\n\nEnter the charge amount for food and the program will show you the taxes on your purchased food "<<endl;
	float charg;
	cin>>charg;
	cout<<(18*charg)/100<<" is 18 % tip on "<<charg<<" Rupees"<<endl;
	cout<<(7*charg)/100<<" is 7 % Sales tax on "<<charg<<" Rupees"<<endl;
	cout<<"Total amount is " <<charg+(18*charg)/100+(7*charg)/100<<endl;
	
	//9.Celsuis to Fahrenheit Temparature Converter
	cout<<"\n\nEnter the Celsius Temperature degree to convert into Fahrenheit temperature"<<endl;
	cout<<"\nEnter the Celsius temparature"<<endl;
	float cel,far;
	cin>>cel;
	far=(cel*1.8)+32;
	cout<<"Celsius Temparature "<<cel<<" converted ,Farhenheit Temparature is "<<far<<endl;
	
	//10.Ingredient Adjuster
	cout<<"\n\nEnter the quantity of cookies that you want and the program will say you that how much sugar,butter and flour is needed"<<endl;
	cout<<"Enter the Number of Cookies"<<endl;
	 float cookies,sugar,butter,flour;
	 int sug,but,flo;
	 cin>>cookies;
	 cout<<"for "<<cookies<<" cookies "<<endl;
	 sugar=cookies*31.25; butter=cookies*20.8; flour=cookies*57.2;
	 cout<<"Sugar :"<<sugar<<" grams"<<endl;
	 cout<<"butter:"<<butter<<" grams"<<endl;
	 cout<<"flour :"<<flour<<" grams"<<endl;
	 cout<<"\n\n Enter the amount of sugar,butter and of flour,program will say you total cost of cookies"<<endl;
	 cout<<"Enter the amount of sugar as per kg"<<endl;
	 cin>>sug;
	 cout<<"Enter the amount of butter as per kg"<<endl;
	 cin>>but;
	 cout<<"Enter the amount of flour as per kg"<<endl;
	 cin>>flo;
	 cout<<"sugar per kg is "<<sug<<" ,and Sugar amount : "<<(sug*sugar)/1000<<" rupees for "<<sugar<<" grams of sugar"<<endl;
	 cout<<"butter per kg is "<<but<<" ,and butter amount: "<<(but*butter)/1000<<" rupees for "<<butter<<" grams of butter"<<endl;
	 cout<<"flour per kg is "<<flo<<" ,and flour amount : "<<(flo*flour)/1000<<" rupees for "<<flour<<" grams of flour"<<endl;
	
	//11.Male and Female Percentages
	cout<<"\n\nEnter the Number of Males and of Females and the program will give you their Ratio"<<endl;
	cout<<"Enter the Number of Male"<<endl;
	float male,female,mf;
	char arrow=16;
	cin>>male;
	cout<<"Enter the Number of Female"<<endl;
	cin>>female;
	mf=male+female;
	cout<<"Male "<<male/mf<<" female "<<female/mf<<endl;
	cout<<"Male Ratio to Female is as follows "<<male/mf<<" : "<<female/mf<<endl;
	cout<<"Male : Female "<<arrow<<arrow<<arrow<<arrow<<" "<<male/mf<<" : "<<female/mf<<endl;
}