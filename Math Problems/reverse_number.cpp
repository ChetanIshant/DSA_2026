#include<iostream>
using namespace std;
int main()
{
	int n, number, temp;
	cout<<"Enter the number: ";
	cin>>n;
	temp=n;
	number=n%10;
	while(1)
	{
		if(temp/10==0)
		{
			break;
		}
		temp=temp/10;
		number=number*10+(temp%10);
	}
	cout<<number;
}
