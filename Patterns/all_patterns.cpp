//1
#include<iostream>
using namespace std;
int main(){
	int n=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}


//2
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of lines: ";
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

//3
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of lines: ";
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			 cout<<j+1;
		}
		cout<<endl;
	}
}

//4
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of lines: ";
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			 cout<<i+1;
		}
		cout<<endl;
	}
}

//5
#include<iostream>
using namespace std;
int main(){
	int n, m;
	cout<<"Enter the number of lines: ";
	cin>>n;
	m=n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			 cout<<"*";
		}
		cout<<endl;
	}
}

//6
#include<iostream>
using namespace std;
int main(){
	int n, m;
	cout<<"Enter the number of lines: ";
	cin>>n;
	m=n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			 cout<<j+1;
		}
		cout<<endl;
	}
}

//7
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of lines: ";
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			 cout<<"  ";
		}
		for(int k=0;k<i;k++){
			cout<<"* ";
		}
		for(int m=0;m<=i;m++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

//8
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			cout<<" ";
		}
		for(int k=0;k<n-i;k++){
			cout<<"*";
		}
		for(int l=0;l<n-i-1;l++){
			cout<<"*";
		}
		cout<<endl;
	}	
}

//9
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of lines: ";
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			cout<<" ";
		}
		for(int k=0;k<i+1;k++){
			cout<<"*";
		}
		for(int l=0;l<i;l++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			cout<<" ";
		}
		for(int k=0;k<n-i;k++){
			cout<<"*";
		}
		for(int l=0;l<n-i-1;l++){
			cout<<"*";
		}
		cout<<endl;
	}
}

//10
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of lines: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{	
		for(int j=0;j<i+1;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			cout<<"*";
		}
		cout<<endl;	
	}	
}


//11
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			if(i%2 == 0)
			{
				if(j%2 == 0)
				{
					cout<<"1";
				}
				else
				{
					cout<<"0";
				}
			}
			else
			{
				if(j%2 == 0)
				{
					cout<<"0";
				}
				else
				{
					cout<<"1";
				}
			}
		}
	cout<<endl;		
	}
	
}

//12
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of lines: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<j+1;
        }
        for(int k=0;k<(((n*2)-2)-(i*2));k++)
        {
            cout<<" ";
        }
        for(int l=0;l<=i;l++)
        {
            cout<<((i+1)-l);
        }
        cout<<endl;
    }
}

//13
#include <iostream>
using namespace std;
int main()
{
    int n,count = 0;
    cout<<"Enter the number of lines: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<count+1<<" ";
            count+=1;
        }
        
        cout<<endl;
    }
}

//14
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n;
    cout<<"Enter the number of lines: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<alphabet[j];
        }
        cout<<endl;
    }
}

//15
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n;
    cout<<"Enter the number of lines: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<alphabet[j];
        }
        cout<<endl;
    }
}

//16
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n;
    cout<<"Enter the number of lines: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<alphabet[i];
        }
        cout<<endl;
    }
}

//17
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n;
    cout<<"Enter the number of lines: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n-i-1);j++)
        {
            cout<<"  ";
        }
        for(int k=0;k<=i;k++)
		{
			cout<<alphabet[k]<<" ";
		}
		if(i>0)
		{
			for(int l=i-1;l>=0;l--)
			{
				cout<<alphabet[l]<<" ";
			}
		}
		cout<<endl;
  	}
}

//18
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n,count;
    cout<<"Enter the number of lines: ";
    cin>>n;
    count = n-2;
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<=i;j++)
    	{
    		cout<<alphabet[count+j+1];	
		}
		count--;
		cout<<endl;
  	}
}

//19
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number of lines: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			cout<<" *";
		}
		for(int k=0;k<(i*2);k++)
		{
			cout<<"  ";
		}
		for(int l=0;l<n-i;l++)
		{
			cout<<" *";
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<" *";
		}
		for(int k=0;k<((2*(n-i))-2);k++)
		{
			cout<<"  ";
		}
		for(int l=0;l<=i;l++)
		{
			cout<<" *";
		}
		cout<<endl;
	}
}

//20
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number of lines: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<"* ";
		}
		for(int k=0;k<(n*2)-(2*i)-2;k++)
		{
			cout<<"  ";
		}
		for(int l=0;l<=i;l++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			cout<<"* ";
		}
		for(int k=0;k<(i*2);k++)
		{
			cout<<"  ";
		}
		for(int l=0;l<n-i;l++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}

//21
/*
* * * *
*     *
*     *
* * * *
*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of lines: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		if(i==0 || i==(n-1))
		{
			for(int j=0;j<n;j++)
			{
				cout<<"* ";
			}
		}
		else
		{
			cout<<"* ";
			for(int k=0;k<(n-2);k++)
			{
				cout<<"  ";
			}
			cout<<"* ";
		}
		cout<<endl;
	}
}

