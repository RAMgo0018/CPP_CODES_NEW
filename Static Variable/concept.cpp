#include<iostream>
using namespace std;
int main()
{
    void demo();
    for(int i=0;i<5;i++)
    {
        demo();
    }
}
void demo()
{
    static int count=0;
    cout<<count<<endl;
    count++;
}