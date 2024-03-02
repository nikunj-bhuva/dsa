#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter array size: ";
    cin >> size;
    int a[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter a[" << i  << "]:";
        cin>>a[i];
    }

    cout << "Enter new elements: " << endl;
    for (int i = 0; i < size ; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}