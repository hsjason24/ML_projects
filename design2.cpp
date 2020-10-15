#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,c1=0,c2=0;
    
	
	///for upper space
	for(i=1;i<=2;i++)
		  cout<<" "<<endl;
		  /////////	
		  
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=167;j++)
		{
			if(i==6&&(j>=94&&j<=103))
			cout<<"0";
			else if(i>=2&&j>=78&&j<=118)
			{
			   if(j==78+c1||j==79+c1||j==118-c1||j==117-c1)
			  {
			  	cout<<"0";
			 
			  } 	else if((i==4||i==3)&&(j>=97&&j<=99))
			  	cout<<"0";
			  else cout<<" ";
			} 
			else cout<<" ";
			
		}  	c1+=3;
		cout<<endl;
	}
	
	for(i=1;i==1;i++)
	{
		for(j=1;j<=167;j++)
		{
			if(j>=95&&j<=101)
			  {
			  	cout<<"0";
			  }
			  else cout<<" ";
		}
	} cout<<endl;
	
	c1=0;
	//////////////////////////////// 1st u
	
	for(i=1;i==1;i++)
	{
		for(j=1;j<=167;j++)
		{
	    if(j>=50&&j<=71)
			cout<<"0";
		else cout<<" ";
        }cout<<endl;
    }
    //curve
	for(i=1;i<=13;i++)
	{
		for(j=1;j<=166;j++)
		{	 if(i==1&&(j>=50&&j<=72))
		   cout<<"0";
			else if((i>=1&&i<=3&&(j==71+c1||j==72+c1)))
			cout<<"0";
			else if(i>=4&&i<=9&&(j==74||j==75))
			cout<<"0";
			else if(i>=10&&i<=13&&(j==82-c1||j==83-c1))
			cout<<"0";
			else if((i==13&&(j>=50&&j<=72)||(i==13&&(j>=74&&j<=83||(j>=93&&j<=103))))||(i==13&&(j>=32&&j<=36)))
			cout<<"0";
			else cout<<" ";
		} c1++;
		  cout<<endl;
	} c1=0;
	/////2nd uu
	for(i=1;i<=13;i++)
	{
		for(j=1;j<=166;j++)
		{	
			if(j<50)
				{   
				  if(i==1+c2&&(j==20+c2+16||j==20+c2+17))
				cout<<"0";
				else if((i==13||i==12)&&j==49)
				cout<<"0";
				else if(i>=1&&i<=2&&(j==32-c2||j==31-c2))
				cout<<"0";
				else
					cout<<" ";
					
				}
				
		 	else if(j<=74)
			{
			   if(i==1&&(j>=50&&j<=74))
			   cout<<"0";
			   
				else if(i>=1&&i<=3&&(j==71+c1||j==72+c1))
				cout<<"0";
				else if(i>=4&&i<=9&&(j==74||j==73))
				cout<<"0";
				else if(i>=10&&i<=13&&(j==82-c1||j==83-c1))
				cout<<"0";
				else if((i==13||i==12)&&j>=50&&j<=70)
				cout<<"0";
				else cout<<" ";
			}
			
			else if(j>=75)
			{
				if(i==1&&(j==82||j==93||j==83||j==94||(j<=82&&j>=76)))
				cout<<"0";
				else if(i==1&&(j>=94&&j<=102))
				cout<<"0";	
				else if(j==82||j==83||j==93||j==94)
				cout<<"0";
				else if((i==13||i==12)&&j>=82&&j<=93)
				cout<<"0";
				else if((i>=1&&i<=3)&&(j==102||j==103))
				cout<<"0";
				else cout<<" ";	
			
			}
			
			
    	} c1++;c2++;
		  cout<<endl;
		  
	}
		for(i=1;i<=6;i++)
		  cout<<" "<<endl;	
}
