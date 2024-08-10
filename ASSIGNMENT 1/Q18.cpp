#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number between 1 to 12";
    cin>>n;
    switch(n)
    {
        case 1:cout<<"january";
        break;
        case 2:cout<<"february";
        break;
        case 3:cout<<"march";
        break;
        case 4:cout<<"April";
        break;
        case 5:cout<<"May";
        break;
        case 6:cout<<"June";
        break;
        case 7:cout<<"July";
        break;
        case 8:cout<<"August";
        break;
        case 9:cout<<"September";
        break;
        case 10:cout<<"October";
        break;
        case 11:cout<<"November";
        break;
        case 12:cout<<"December";
        break;
        default:cout<<"wrong input";
    }
    return 0;
}

    