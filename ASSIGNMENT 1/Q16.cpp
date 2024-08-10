#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter character";
    cin>>ch;
    if(ch>=65&&ch<=90)
    {
        cout<<"uppercase";
    }
    else if(ch>=97&&ch<=122)
    {
        cout<<"lowercase";
    }
    return 0;
    
    
}