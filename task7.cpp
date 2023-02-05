#include <iostream>
using namespace std;

main()
{
    int size1, size2;
    int count = 0;

    cout << "Enter size of string 1: ";
    cin >> size1;

    string str1[size1];

    cout << "Enter your string 1: ";
    cin >> str1[size1];

    cout << "Enter size of string 2: ";
    cin >> size2;

    string str2[size2];

    cout << "Enter Your string 2: ";
    cin >> str2[size2];

    for(int x =0; x < size1 ; x++)
    {
        for(int z = 0; z < size2 ; z++)
    {
        if(str1[x] == str2[z])
        {
            count++;
        }
    }
    }
    cout << count;

}