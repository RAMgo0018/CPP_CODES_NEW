#include <iostream>
using namespace std;
int main()
{
    int num;
    int count = 0;
    int fixc = 0;
    int prenum = 0;
    cout << "enter 10 numbers" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Enter "<<i<<"number of series: ";
        cin >> num;

        if (prenum < num)
        {
            count = count + 1;
        }
        else
        {
            if(count>fixc)
            {
                fixc = count;
            }
            count = 1;
        }

        prenum = num;
    }
    if (count>fixc)
    {
        fixc=count;
    }
    
        cout << fixc << " is the length of the longest series.";
    return 0;
}