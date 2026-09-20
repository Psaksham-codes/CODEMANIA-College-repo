#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the value of n:";
    cin>>n;
    int arr[n];
    cout<<n<<" elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"INDEXES"<<endl;
    for(int i=0;i<n;i+=2)
    {
        cout<<i;
        if(i+2<n)
            cout<<",";
    }
    cout<<endl;
    cout<<"SELECTED VALUES"<<endl;
    for(int i=0;i<n;i+=2)
    {
        cout<<arr[i];
        if(i+2<n)
            cout<<"+";
        sum=sum+arr[i];
    }
    cout<<"="<<sum<<endl;
    return 0;
}