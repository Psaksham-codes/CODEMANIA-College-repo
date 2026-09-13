#include<iostream>
using namespace std;
int main()
{   int count=0;
    double sum=0;
    double d[7];
    cout<<"Enter the data consumed per day this week:"<<"\n";
    for(int i=0;i<7;i++)
    {
        cin>>d[i];
        if(d[i]>2.0)
        {
            count++;
        }
        cout<<"\n";
    }
    for(int i=0;i<7;i++)
    {
        sum+=d[i];
    }
    cout<<"total data usage weekly:"<<sum<<"GB"<<endl;
    cout<<"days above 2GB:"<<count<<endl;
    if(sum<12)
    cout<<"LOW USAGE OF DATA"<<endl;
    else if(sum>=12||sum<=18)
    cout<<"MODERATE USAGE OF DATA"<<endl;
    else
    cout<<"HIGH USAGE OF DATA"<<endl;
    return 0;
}