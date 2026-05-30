#include<iostream>
using namespace std;
int main()
{
	int n, number,temp;
	cout<<"Enter the number: ";
	cin>>n;
	temp=n/10;
	number=n%10;
	while(temp>0)
	{
		number = (number*10)+ temp%10;
		temp=temp/10;
	}
	if(n==number)
	{
		cout<<"Number is palindrome";
	}
	else
	{
		cout<<"Number is not palindrome";	
	}
}
