#include<iostream>
using namespace std;
int main()
{
    int units,bill;
    cout<<"Enter the amount of units consumed:";
    cin>>units;
    if(units<0)
    cout<<"invalid input"<<endl;
    if(units<=0||units<=100)
    {
    bill=units*5;
    cout<<"Electricity bill:"<<bill<<endl;
    }
    else if(units>=101&&units<=200)
    {
        bill=units*7;
        cout<<"Electricity bill:"<<bill<<endl;
    }
    else{
        bill=units*10;
        cout<<"Electricity bill:"<<bill<<endl;
    }
    return 0;

}