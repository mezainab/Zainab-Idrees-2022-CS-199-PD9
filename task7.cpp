#include <iostream>
using namespace std;

main()
{
    int count = 0;
    string str1, str2;

    cout << "Enter your string 1: ";    //length is taken as 5, as in question
    cin >> str1;

    cout << "Enter Your string 2: ";    //length is taken as 5, as in question
    cin >> str2;

    for (int x = 0; x < 5; x++)
    {
        for(int z = 0; z < 5; z++)
        {
        if (str1[x] == str2[z])
        {
            count++;
            str2[z] = 'x';
            break; 
        }
        
        if(str1[x] != str2[z])
        {
            continue;  
        }
        }
    }
   cout << count;     
}