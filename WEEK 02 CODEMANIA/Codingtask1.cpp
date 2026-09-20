#include<iostream>
using namespace std;
int main(){
    int n,sum=0,final;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"TABLE:"<<endl;
    for(int i=1;i<=10;i++)
    {
        cout<<(n*i)<<" " ;
    }
    cout<<endl;
    cout<<"ALTERNATE VALUES"<<endl;
    for(int i=1;i<=10;i=i+2)
    {
        cout<<(n*i)<<"+";
        sum=sum+n*i;
        
    }
    cout<<"= "<<sum<<endl;
    final=sum*sum;
    cout<<"FINAL"<<endl;
    cout<<sum <<"x"<<sum<<"="<<final;
    return 0;
}