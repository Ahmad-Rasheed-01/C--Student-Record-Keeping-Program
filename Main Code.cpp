#include<iostream>
#include<cmath>
using namespace std;
int addition(int a,int b,int c,int d);
float percentage(int sum);
int main()
{
	char students[20]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T'};
	int physics[20]={};
	int chemistry[20]={};
	int mathematics[20]={};
	int english[20]={};
	int n;
	float percent;
	float sum=0;
	do
	{
		cout<<"\n\t\t***************************WELCOME TO CLASS REPORT GENERATOR***************************"<<endl
		<<"\n\t\t\t\t\t\t *******MAIN MENU*******"<<endl
		<<"\n\t\t\t\t\t\t Select an Option"<<endl
		<<"\t\t\t\t\t\t 1. Enter Marks"<<endl
		<<"\t\t\t\t\t\t 2. Update Marks"<<endl
		<<"\t\t\t\t\t\t 3. Display Report"<<endl
		<<"\t\t\t\t\t\t 0. Exit Program"<<endl;
		cin>>n;
		switch(n)
		{
			case 0:
			{
				cout<<"\n\n\t\t\t\t\t      Program Exited Successfully"
				<<"\n\n\t\t\t\t\tThankyou For Using Class Report Generator";
				break;
			}
			case 1:	
			{
				for(int i=0;i<20;i++)
				{
					
					cout<<"Student ["<<students[i]<<"]"<<endl
					<<"Enter Marks of Physics."<<endl;
					for(int j=0;j<1;j++)
					{
						cin>>physics[j];
						for(int k=0;k<1;k++)
						{
							cout<<"Enter Marks of Chemistry."<<endl;
							cin>>chemistry[k];
							for(int l=0;l<1;l++)
							{
								cout<<"Enter Marks of Mathematics."<<endl;
								cin>>mathematics[l];
								for(int m=0;m<1;m++)
								{
									cout<<"Enter Marks of English."<<endl;
									cin>>english[m];
								}
							}
						}
					}
				}
			cout<<"\nMarks Entered Successfully\n";	
			break;
			}
			case 2:
			{
				char name;
				cout<<"Enter Student's Name. "<<endl;
				cin>>name;
				for(int i=0;i<20;i++)
				{
					if(students[i]==name)
					{

					for(int j=0;j<1;j++)
						{
							cout<<"Enter Marks of Physics."<<endl;
							cin>>physics[j];
							for(int k=0;k<1;k++)
							{
								cout<<"Enter Marks of Chemistry."<<endl;
								cin>>chemistry[k];
								for(int l=0;l<1;l++)
								{
									cout<<"Enter Marks of Mathematics."<<endl;
									cin>>mathematics[l];
									for(int m=0;m<1;m++)
									{
										cout<<"Enter Marks of English."<<endl;
										cin>>english[m];
										cout<<"Marks Updated Successfully.";
										
									}
								}
							}
						break;
						}	
					}
				else
					{
						cout<<"Data Not Found."<<endl;
						break;	
					}	
					
				}
				
			break;
			
			}
			case 3:
				{
					for(int i=0;i<20;i++)
					{
						cout<<"Result Card of Student "<<students[i]<<endl
						<<"Total Marks of Student "<<students[i]<<endl;
						
						for(int j=0;j<1;j++)
						{
							sum=sum+physics[j];
							for(int k=0;k<1;k++)
							{
								sum=sum+chemistry[k];
								for(int l;l<1;l++)
								{
									sum=sum+mathematics[l];
									for(int m=0;m<1;m++)
									{
										sum=sum+english[m];
										sum=addition(j,k,l,m);
										cout<<sum<<endl;
										percent=percentage(sum);
										cout<<percent<<endl;
									}
								}
							}
						}
						
						
					}
					
				}
		default:
			{
				cout<<"INVALID ENTERY."<<endl;
			}
	}
    }
	while(n!=0);
return 0;
}
int addition(int a,int b,int c,int d)
{
	int sum;
	sum=a+b+c+d;
	return (sum);
}
float percentage(int sum)
{
	float percent;
	percent=(sum/400)*100;
	return(percent);
}
