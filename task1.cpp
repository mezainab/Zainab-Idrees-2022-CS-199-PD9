#include <iostream>
using namespace std;

main()
{
    int quantity, totalPrice;
    string fruitname;
    string fruit[4] = {"peach", "apple", "guava", "watermelon"};
    int price[4] = {60, 70, 30, 40};

    cout << "Enter the name of your fruit: ";
    cin >> fruitname;

    cout << "Enter the quantity of the fruit: ";
    cin >> quantity;

    if (fruitname == fruit[0])
    {
        totalPrice = quantity * price[0];
    }
    if (fruitname == fruit[1])
    {
        totalPrice = quantity * price[1];
    }
    if (fruitname == fruit[2])
    {
        totalPrice = quantity * price[2];
    }
    if (fruitname == fruit[3])
    {
        totalPrice = quantity * price[3];
    }
    cout << "Total Bill is: " << totalPrice << "$";
}