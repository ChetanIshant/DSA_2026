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

/*
12345
1234
123
12
1
*/

