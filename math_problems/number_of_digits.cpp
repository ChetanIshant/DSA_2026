#include<iostream>
using namespace std;
int main()
{
	int n, temp, count=0;
	cout<<"Enter the number: ";
	cin>>n;
	temp=n;
	while(1)
	{
		temp=temp/10;
		if(temp==0)
		{
			count++;
			break;
		}
		count++;
	}
	cout<<endl<<"Number of digits: "<<count;
}
