#include <iostream>
using namespace std;
main()
{
    int size, remainder, number = 0;
    cout << "Enter size of your array: ";
    cin >> size;

    bool result = false;

    int numbers[size];
    for(int x = 0 ; x < size ; x++)
    {
    cout << "Enter your numbers in the array: ";
    cin >> numbers[x];

    if (numbers[x] > 9)
    {
        while (numbers[x] > 0)
        {
            remainder = numbers[x] % 10;
            numbers[x] = numbers[x] / 10;
            if(remainder == 7)
            {
                result = true;
            }
        }
    }
    else 
    {
        if(numbers[x] == 7)
        {
            result = true;
        }
    }
    }

    if(result == true)
    {
        cout << "BOOM!";
    }
    if(result == false)
    {
        cout << "There is no 7 in the array";
    }
}