#include<iostream>
using namespace std;
int main()
{
    int Acc_bal,W_amount;
    cout<<"Enter your account balance:";
    cin>>Acc_bal;
    cout<<"\n";
    cout<<"Enter the amount needed to be withdrawn:";
    cin>>W_amount;
    if(W_amount>0&&W_amount<=Acc_bal&&W_amount%100==0)
    {
        cout<<W_amount<<"--> Accepted"<<endl;
        
    }
      else if(!(W_amount%100==0))
        {
            cout<<W_amount<<"-->Invalid Denomination"<<endl;
        }
    
    else{
        cout<<W_amount<<"-->Insufficient Balance";
    }
    return 0;

}