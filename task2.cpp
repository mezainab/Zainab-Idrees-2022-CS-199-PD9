#include <iostream>
using namespace std;

main()
{
    int ticketPrice = 500;  // already given 
    float totalPrice = 0;
    float discountedPrice;

    string movie;

    string movieName[5] = {"Avengers", "BTS" , "interstellar", "About", "IT"};  // choose a movie from the given

    cout << "Enter Your Movie Name: ";      // Movie name must be written without spaces
    cin >> movie;

    if((movie == movieName[2]) || (movie == movieName[4]))
    {
        discountedPrice = 500 * (5.0/100);
    }
    else if((movie == movieName[0]) || (movie == movieName[1]) || (movie == movieName[3]))
    {
        discountedPrice = 500 * (10.0/100);
    }
     totalPrice = totalPrice + 500 - discountedPrice;
    cout << "Total Price is: " << totalPrice;
}