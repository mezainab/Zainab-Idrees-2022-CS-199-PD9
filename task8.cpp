#include <iostream>
using namespace std;

main()
{
    int size, switchCol, timeForColour, timeForComplete;
    

    cout << "Enter size of your array: ";
    cin >> size;

    string colour[size];

    for (int x = 0; x < size; x++)
    {
        cout << "Enter the colour in your array: ";
        cin >> colour[x];

        timeForColour = 2 * size;
        switchCol = (size - 1);
    }
    timeForComplete = timeForColour + switchCol;
    cout << timeForComplete;
}