#include <iostream>
using namespace std;

main()
{
    string str;
    int length;
    bool result;

    cout << "Enter your string: ";
    getline(cin, str);

    length = str.length();

    if (length % 2 == 0)
    {
        result = true; //the result will be given as 1 for true
    }
    if (length % 2 != 0)
    {
        result = false; //the result will be given as 0 for false
    }
    cout << result; 
}