#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,p=1,j,k;
	for(i=1;i<=11;i++)
	{  	int k=50;
	while(k--)
	{
		cout<<' ';
	}
		for(j=1;j<60;j++)
		{
			//for upline	
			if(i==3&&j>=6)
			cout<<'0';
		//	else cout<<' ';
		
			if(i>3)
			{	
				if(j<=20)
				{   // for vertical line of je
						if(i<8&&j==19)
						cout<<'0';
						
						//for horizontal line of je
						if(i==8)
						{
							if(j>=8&&j<=10)
							{
								cout<<'0';
							}
							else if(j==4||j==7)
							cout<<'0';
							else cout<<' ';
						} 
							//for 2 parallol line of j
						if(i>=9&&i<=10)
						{
							if(j==4||j==7||j==10)
							cout<<'0';
							else
							cout<<' ';
						}//j k neeche ki line
						if(i==11&&(j>=7&&j<=13||j==19))
						cout<<'0';
						else
						cout<<' ';
				}
				if(j>20)
				{       if(i==4&&((j>=34&&j<=37)||j==42))
						cout<<'0';
						if(i==5&&(j==34||j==39||j==44))
						cout<<'0';
						if(i>=6&&i<=7&&(j==40||j==45))
						{
							cout<<'0';
						}
						if(i==8&&j>=21&&j<=27)
						cout<<'0';
							else cout<<' ';
						if(i>=9&&i<=10&&j==26)
						cout<<'0';
						
						if(i==11&&j==46)
						cout<<'0';	
				}
				
			}		
		}
		cout<<endl;
	}
	cout<<endl;
      ////////////////// for shree
	for(i=1;i<=15;i++)
	{ int k=68; 
		while(k--)
		{
			cout<<' ';
		}
	
		for(j=1;j<=20;j++)
		{  
			if(i<=3)
			{
				if(i==1&&j>=13&&j<=17)
				{
					cout<<'0';
				}
				else if((i==2||i==3)&&(j==13||j==17))
					cout<<'0';
					else cout<<' ';	
			}
			else if(i>=4)
			{
				if(i==4)
			cout<<'0';
			else if(i>=5&&i<=6&&(j==13||j==17))
			cout<<'0';
			else if(i>=7&&i<=9&&(j==13||j==17||(j>=7&&j<=9)))
			cout<<'0';
			
			else if(i==10&&(j==13||j==17||j==7||j==9))
			cout<<'0';
			else if(i==11&&(j==13||j==17||j==6||j==10))
			cout<<'0';
			else if(i==12&&(j==13||j==17||j==5||j==11||j==12))
			cout<<'0';
			else if(i==13&&(j==13||j==17||j==4||j==11))
			cout<<'0';
			else if(i==14&&(j==13||j==17||j==3||j==10))
			cout<<'0';
			else if(i==15&&(j==13||j==17||j==2||j==9))
			cout<<'0';
			else cout<<' ';
			//else cout<<'.';
			}
			
		
			
		
			
			
		}
		cout<<endl;
	}
	//////////////////////
	//for ram
	for(i=1;i<=11;i++)
	{   int k=62;	while(k--)
	{
		cout<<' ';
	}
		for(j=1;j<=35;j++)
		{  //upline
			if(i==3)
			cout<<'0';
			
			if(i>3)
			{
				if(j<=15)
				{
					if(i<=6&&(j==8||j==12))
					{
					cout<<'0';
					}
					if(i==7&&((j>=4&&j<=8)||j==13))
					{
					cout<<'0';
					} else cout<<' ';
					if(i==8&&(j==11||j==4))
					{
						cout<<'0';
					}
					if(i==9&&(j==11||j==5))
					{
						cout<<'0';
					}
					if(i==10&&(j==11||j==6))
					{
						cout<<'0';
					}
					if(i==11&&(j==11||j==7))
					{
						cout<<'0';
					}	
				}
				else if(j>15)
				{
						if(i<=6&&(j==23||j==27))
					{
					cout<<'0';
					}
					if(i==7&&(j>=23&&j<=30))
					{
					cout<<'0';
					}	else cout<<' ';
						if(i==8&&(j==20||j==21||j==25))
					{
					cout<<'0';
					}
					if(i>=9&&(j==27))
					cout<<'0';
				}
			}		
		}
		cout<<endl;
	}	
}
