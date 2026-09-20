#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"PRINTED VALUES:"<<endl;
    for(int i=1;i<=n;i++)
    {
        if(i%3==0)
        continue;
        else
        cout<<i<<" ";
        sum=sum+i;
    }
    cout<<endl;
    cout<<"FINAL SUM"<<endl;
    for(int i=1;i<=n;i++)
    {
          if(i%3==0)
        continue;
        else
        cout<<i<<"+";
        
    }
    cout<<"="<<sum;
    return 0;
}