#include<iostream>
using namespace std;
int main()
{
    int count=0;
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"VALUES"<<endl;
    for(int i=1;i<=n;i++)
    {
        if((i%2==0)&&!(i%4==0))
        {
            count++;
            cout<<i<<" ";
        }
        else
        continue;
    } cout<<endl;
    cout<<"COUNT"<<endl;
    cout<<count;
    return 0;
}