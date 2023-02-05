#include <iostream>
using namespace std;

main()
{
    int size, transformNum;

    cout << "Enter the size of array: ";
    cin >> size;


        cout << "Enter the number of times the transformation needs to be done: ";
        cin >> transformNum;

    int number[size];

    for (int x = 0; x < size; x++)
    {
        cout << "Enter number in Array: ";
        cin >> number[x];
    }

    for (int x = 0; x < size; x++)
    {
    
        if (number[x] % 2 == 0)
        {
            for(int y = 0; y < transformNum ; y++)
        {
            number[x] = number[x] - 2;
        }
        }
    
        if (number[x] % 2 != 0)
        {
            for(int y = 0; y < transformNum ; y++)
        {
            number[x] = number[x] + 2;
        }
        }
        
    
     cout << number[x] << "," ;
    }
}
