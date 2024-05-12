#include<iostream>
using namespace std;
int main{
    int n;
    cout<< " enter n";
    cin>> n;
    if(n<0)
    cout<< "invalid";
    else
    cout<< n*(n+2)/2;
}
