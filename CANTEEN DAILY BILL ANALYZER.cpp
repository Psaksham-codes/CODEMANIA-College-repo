#include<iostream>
using namespace std;
int main()
{ int n,c=1;
    double discount;
    cout<<"Enter the total no. of bills that needs to be processed:"<<endl;
    cin>>n;
    double bills[n];
    for(int i=0;i<n;i++)
    {   cout<<"Enter "<<c<<" bill: "<<endl;
        cin>>bills[i];
        c++;
    }
    for(int i=0;i<n;i++)
    { double final_bill=0;
        if(bills[i]<500)
        {
          discount=0;
          final_bill=bills[i]-discount;
          cout<<"Original bill:"<<bills[i]<<endl;
          cout<<"Discount:"<<discount<<endl;
          cout<<"Final bill:"<<final_bill<<endl;
         }
         else if(bills[i]>=500&&bills[i]<=1000)
         {
            discount=0.1*bills[i];
            final_bill=bills[i]-discount;
            cout<<"Original bill:"<<bills[i]<<endl;
          cout<<"Discount:"<<discount<<endl;
          cout<<"Final bill:"<<final_bill<<endl;
         }
         else{
            discount=(0.15)*bills[i];
            final_bill=bills[i]-discount;
            cout<<"Original bill:"<<bills[i]<<endl;
          cout<<"Discount:"<<discount<<endl;
          cout<<"Final bill:"<<final_bill<<endl;
         }
    }
    return 0;
    
}