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
