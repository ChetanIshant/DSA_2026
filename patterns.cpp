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
