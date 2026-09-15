#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter students marks:";
    cin>>marks;
    if(marks<0||marks>100)
    {
        cout<<"invalid marks";
    }
    else if(marks>40)
    {
        cout<<"PASS";
    }
    else{
        cout<<"fail";
    }
    return 0;
}