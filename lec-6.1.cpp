#include <iostream>
using namespace std;

int main()
{
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // for(int i=1; i<=5; i++)
    // {
    //     for(int j=1; j<=i; j++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    for(char i='A'; i<='E'; i++)
    {
        for(char j='A'; j<=i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}