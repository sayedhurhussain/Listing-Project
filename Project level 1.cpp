#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()

 { char another;
 do 
 {
 
    int choice;

    cout<<"\n press 1 for hello program";
 	cout<<"\n press 2 for addition program";
 	cout<<"\n press 3 for subtraction program";
 	cout<<"\n press 4 for multiplication program";
 	cout<<"\n press 5 for dividition program";
 	cout<<"\n press 6 for factorial  program";
 	cout<<"\n press 7 for percentage program";
 	cout<<"\n press 8 for grade program";
 	cout<<"\n press 9 for arithematic mean program";
 	cout<<"\n press 10 for geometric mean program";
 	cout<<"\n press 11 for harmonic mean program";
 	cout<<"\n press 12 for add/even program";
 	cout<<"\n press 13 for discriminent program";
 	cout<<"\n press 14 for distance program";
 	cout<<"\n press 15 for arec circle program";
 	cout<<"\n press 16 for circumfrance program";
 	cout<<"\n press 17 for tempreature program";
 	cout<<"\n press 18 for acre program";
 	cout<<"\n press 19 for money exchange program";
 	cout<<"\n press 20 for vowel program";
 	cout<<"\n press 21 for pass/fail program";
 	cout<<"\n press 22 for age program";
 	
	cout<<"\n please enter your choice ";
 	cin>>choice;
 	
	 switch (choice)
	 {
	 
	    case 1:
		    	{
		    	cout<<"hello program \n";
				cout<<"Helloooooo";	
				}break;
        case 2:
	            {
				cout<<"addition program \n";
				int num1,num2,num;
				cout<<"addition \n";
				cout<<"enter a 1st num \n";
			    cin>>num1;
				cout<<"enter a second num \n";
				cin>>num2;
				num=num1+num2;
				cout<<"sum of 2 number \n"<<num;
				break;}
		    	
	    case 3:
				{
				cout<<"subtraction program \n";
						   		
			 	int numb1,numb2,numb;
			 	cout<<"Subtraction \n";
			 	cout<<"enter a 1st numb \n";
			 	cin>>numb1;
			 	cout<<"enter a 2nd numb \n";
			 	cin>>numb2;
			 	numb=numb1-numb2;
			 	cout<<"enter sub of 2 numb \n"<<numb;
			    break;}
			   
	    case 4:
			   	{
				cout<<"multiplication program \n";
						   		
			 	int num1,num2,num;
			 	cout<<"Multiplication \n";
			 	cout<<"enter a 1st num \n";
			 	cin>>num1;
			 	cout<<"enter a 2nd num\n";
			 	cin>>num2;
			 	num=num1*num2;
			 	cout<<"multi of 2 num \n"<<num;
			    break;}
			   
	    case 5:
			   	{
			    cout<<"dividition program \n";
						   	
			 	float num1,num2,num;
			 	cout<<"divide \n";
			 	cout<<"enter a 1st num \n";
			 	cin>>num1;
			 	cout<<"enter a 2nd num \n";
			 	cin>>num2;
			 	num=num1/num2;
			 	cout<<"divide of 2 num \n"<<num;
				break;}		   
	    case 6: 
		     	{
				cout<<"factorial  program \n";
		    	int a, factorial=1;
                cout<<"enter number for factorial";
                cin>>a;
                for(int i=1;i<=a;++i)
                {
             	factorial *=i;
                }
                cout<<"factorial of "<<a<<"is"<<factorial<<endl;  
 	            break;}
	   	case 7:
		 		{
		 		cout<<"percentage program \n";
				float nmbr,nmbr2,nmbr3,nmbr1;
				cout<<"Percentage \n";
				cout<<"enter a 1st nmbr \n";
				cin>>nmbr1;
				cout<<"enter a 2nd nmbr \n";
				cin>>nmbr2;
				cout<<"enter a 3rd nmbr \n";
				cin>>nmbr3;
				nmbr=nmbr1*nmbr2/nmbr3;
				cout<<"percentage of nmbr \n"<<nmbr;       
		 	    break;}    
 	    case 8: 
		       {
			   cout<<"grade program \n";
 		  
				int grade;
				cout<<"check grade \n";
				cin>>grade;
				cout<<"enter a grade";
		
				if(grade>91 && grade<100)
					{
						cout<<"your grade is 'A+'";
					}
				else if ((grade>87) && (grade<90))
					{
						cout<<"your grade is 'A'";
					}
				else if ((grade>80) && (grade<86))
					{
					cout<<"your grade is 'B+'";
					}
				else if ((grade>72 ) && (grade<79))
					{
					cout<<"your grade is 'B'";
					}
				else if ((grade>66) && (grade<71))
					{
						cout<<"your grade is 'C+'";
					}
				else if ((grade>60) && (grade<65))
					{
						cout<<"your grade is 'C'";
					}
				else if ((grade>0) && (grade<59))
				{cout<<"your are Fail";
				}      
 		        break;}      
 		case 9:
		      	{
				 float a,b,result;
			   	 cout<<"\n arithematic mean program";
				 cout<<"Arithemtic Mean \n";
				 cout<<"enter 'a'\n";
				 cin>>a;
				 cout<<"enter 'b' \n";
				 cin>>b;
				 result=(a+b)/2;
				 cout<<"number \n"<<result;		
				break;}		
		case 10: 
				{
			  	 float a,b,result;
				 cout<<"geometric mean  program \n";
				 cout<<"Geometric Mean \n";
				 cout<<"enter 'a'\n";
				 cin>>a;
				 cout<<"enter 'b' \n";
				 cin>>b;
				 result=sqrt(a*b);
				 cout<<"number \n"<<result;		
				break;}		
		case 11: 
		        {
				cout<<"harmonic mean program \n";
		
				 float a,b,result;
				 cout<<"Harmonic mean \n";
				 cout<<"enter 'a'\n";
				 cin>>a;
				 cout<<"enter 'b' \n";
				 cin>>b;
				 result=(2*a*b)/(a+b);
				 cout<<"number \n"<<result;		
				 break;}		
		case 12: cout<<"add/even program \n";
		     	{
			 	int num;
			 	cout<<"add or even \n";
			 	cin>>num;
			    if
				((num%2)==0)
				 {cout<<"this is even num \n";
				 }
				else 
			 	{cout<<" is add num \n";
				 }
				 cout<<"num \n"<<num;		
	  			break;}			
		case 13: 
	        	{
				cout<<"discriminent program \n";
			 	int b,a,c,result;
			 	cout<<"solve the discrimenent \n";
			 	cout<<"enter 'b'";
			 	cin>>b;
			 	cout<<"enter 'a'";
			 	cin>>a;
			 	cout<<"enter 'c'";
			 	cin>>c;
			    result=(pow(b,2) -(4 * a * c));
			    cout<<"solve the result \n"<<result;		
				break;}		
		case 14: 
		       {
			 	float M,CM,Feat,Inches;
			 	float KM;
 			    cout<<"distance program \n";
			 	cout<<"enter the number";
			 	cin>>KM;
			 	M=1000*KM;
			 	CM=100*M;
			 	Feat=3*M;
			 	Inches=12*Feat;
			 	cout<<"kilometer ="<<KM<<endl;
			 	cout<<"Meter ="<<1000*KM<<endl;
			 	cout<<"Centimeter = \n"<<100*M<<endl;
			 	cout<<"Feat ="<<3*M<<endl;
			 	cout<<"Inches ="<<12*Feat<<endl;		
			   break;}
		case 15:
		       {
				cout<<"circle program \n";
					
			 	float length, width, r, area;
			 	float PI=3.1415;
			    cout<<"Enter the number \n";
			 	cout<<"enter a length =";
			 	cin>>length;
			 	cout<<"enter a width =";
			 	cin>>width;
			 	r=length*width;
			 	cout<<"r "<<r <<endl;
			 	cout<<"enter r =";
			 	cin>>r;
			 	area=2*PI*r*r;
			 	cout<<"area ="<<area;		
	            break;}	
		case 16:
		       {
		       	cout<<"circumfrance \n";
						       	
				float radius;
				float PI=3.14;
				radius = 4.0;
				cout << "PI = " << PI << endl;
				cout << "Radius = " << radius << endl;
				cout << "Circumference = " << 2 * PI * radius << endl;
				}break;			
		case 17: 
		       {
				cout<<"tempreature program \n";
					
			 	float Tempreature;
			 	float Fahrenheit;
			 	float Centigrade;
			 	cout<<"Enter Tempreature in Fahrenheit="<<"";
			 	cin>>Fahrenheit;
			 	Centigrade=(Fahrenheit-32)*5/9;
			 	cout<<"Tempreature in Centigrade dagrees C="<<""<<Centigrade;		
			    break;}	
		case 18:
		       {
			    cout<<"acre program \n";
					
				int Jareeb,Kanal,Marla,sqfeat;
				int Acre;
				cout<<"Enter the number";
				cin>>Acre;
				Jareeb=4*Acre;
				Kanal=4*Jareeb;
				Marla=20*Kanal;
				sqfeat=272*Marla;
				cout<<"Acre="<<Acre<<endl;
				cout<<"Jareeb="<<4*Acre<<endl;
				cout<<"Kanal="<<4*Jareeb<<endl;
				cout<<"Marla="<<20*Kanal<<endl;
				cout<<"sqfeat="<<272*Marla<<endl;		
			    break;}	
		case 19:
		       {
				cout<<"money exchange program \n";
				
			 	float dinar,pounds,dollars,riyals,diarams,yens,lirsa,euro,renminibi,ruble;
			 	float PKR;
			 	cout<<"Enter Currency";
			 	cin>>PKR;
			 	PKR;
			 	dinar=348.38;
			 	pounds=138.97;
			 	dollars=105.35;
			 	riyals=28.9;
			 	diarams=28.68;
			 	yens=0.93;
			 	lirsa=28.69;
			 	euro=124;
			 	renminibi=15.91;
			 	ruble=1.83;
			 	cout<<"dinar="<<348.38*PKR<<endl;
			 	cout<<"pounds="<<138.97*PKR<<endl;
			 	cout<<"dollars="<<105.35*PKR<<endl;
			 	cout<<"riyals="<<28.9*PKR<<endl;
			 	cout<<"diarams="<<28.68*PKR<<endl;
			 	cout<<"yens="<<0.93*PKR<<endl;
			 	cout<<"lirsa="<<28.69*PKR<<endl;
			 	cout<<"euro="<<124*PKR<<endl;
			 	cout<<"renminibi="<<15.91*PKR<<endl;
			 	cout<<"ruble="<<1.83*PKR<<endl;			
		        break;}		
		case 20:
		       {
		        cout<<"vowel program \n";
				
			 	char ch;
			 	cout<<"enter an alpabet \n";
			 	cin>>ch;
			 	
			 	if(ch=='A'||ch=='a'|| ch=='E'||ch=='e'|| ch=='I'|| ch=='i'|| ch=='O'||ch=='0'|| ch=='U'||ch=='u')
			 	{
			 		cout<<"character is vowel \n";}
			 		else
			 	{  
				    cout<<"character is constsnt \n";
				}
				break;
				}
				
			
		case 21:
		        {
				cout<<"pass/fail program \n";
				
			 	int marks;
			 	cout<<"your result \n";
			 	cin>>marks;
			 	if (marks>39)
			 	{ cout<<"you are pass \n";
			
				}
				else
				{cout<<"you are fail \n";
			 	cout<<"try again";
			    }
		        break;}		
		case 22:
		        {
		        cout<<"age program \n"; 
				 	
				int age;
				cin>>age;
				if (age<20)
				{
			    cout<<"\n you are elligible";
			    cout<<"\n you are wellcome";
				}
				else
				
				{
				cout<<"\n you are not elligible";
				cout<<"\n try again";
				cout<<"\nend of program";}	    
				break;}
                }
	            cout<<"press y to do it again"<<endl;
	            cin>>another; 
	            }
	           
	            while(another=='y'); 
				return 0; 
	            }
            
