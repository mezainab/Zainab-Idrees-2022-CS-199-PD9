#include <iostream>
using namespace std;

main()
{
    bool result;
    string elements[4];

    for (int x = 0; x < 4; x++)
    {
        cout << "Enter the elements in your array: ";
        cin >> elements[x];
    }
    if ((elements[0] == elements[1]) && (elements[1] == elements[2]) && (elements[2] == elements[3]))
    {
        if ((elements[0] == elements[2]) && (elements[0] == elements[3]) && (elements[1] == elements[3]))
        {
            result = true; // the answer will be given as 1 for true
        }
    }
    else
    {
        result = false; // the answer will be given as 0 for false
    }
    cout << result;
}