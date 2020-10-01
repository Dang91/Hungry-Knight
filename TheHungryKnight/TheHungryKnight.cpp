/* 
TheHungryKnight.cpp 
Creator: Daniel Edberg
Program: The Hungry Knight
Description: TheHungryKnight.cpp is intended as practice for writing small programs in C++ utilizing the iostream library, arithmetic and variables, and to overall help familiaraize the creator with C++.
Due Date: 06Sep20 2359CST
*/

#include <iostream>
using namespace std;

int main()
{
    string name, characteristic;
    float roast_p, beef_s, bread, fruit, sub_total, totaltax, totaltaxrounded;

    cout << "\n\n Welcome to \n";
    cout << " The Hungry Knight C++ Edition!\n\n";

    cout << "It was a dark and stormy night.\n"; 
    cout << "You and your merry band known as 'The Hungry Knights' were cold, wet, oh so hungry,\nand quite honestly were not feeling very merry.\n";
    cout << "It is not long before your troup comes across the Hungry Knight Inn, and your men are\nall but eager to call it a night with a hot meal and a warm bed.\n";
    cout << "You all hand off your horses to the very capable stable hand and enter the Inn. \n";
    cout << "You and your men are greeted by the proprietor of the establishment who requests that\nyou sign into their register with your name and social title.\n";
    cout << "'Please Enter your Name and social characteristic, seperated by a space: '" << endl;
    cin >> name >> characteristic;

    cout << "\n    You are\n" << endl;
    cout << " Sir " << name << " The " << characteristic;

    cout << "\n\nOnce you and your merry men are signed in, the proprietor arrives to guide you all to\nsome tables and to take you orders.\n\n";
    cout << "    Roast Pheasant 15.10 Silvers\n    Beef Stew 3.49 Silvers\n    Loaf of Fine Bread 5.17 Silvers\n    Fine Fruit 1.19 Silvers\n\n";
    cout << "How many Platters of Roast Pheasant would your band like?";
    cin >> roast_p;
    cout << "\n\nHow many Bowls of Beef Stew would your band like?";
    cin >> beef_s;
    cout << "\n\nHow many Loafs of Fine Bread would your band like?";
    cin >> bread;
    cout << "\n\nHow many Pieces of Fine Fruit would your band like?";
    cin >> fruit;
    sub_total = 15.10 * roast_p + 3.49 * beef_s + 5.17 * bread + 1.19 * fruit; //calculation for sub-total prior to taxes
    totaltax = sub_total / 100 * 5+sub_total; //this is the total with taxes but has a high chance of being a running number so this will not be displayed to the user
    totaltaxrounded = floor(totaltax * 100 + 0.5) / 100; //rounds up to the hundredths place (i.e. 26.1975 should be displayed to the user as 26.2)
    cout << "\n\nThe Sub-total of the meal is: " << sub_total << " Silvers.\n\n";
    cout << "The Total after the local Baron's Sales tax is: " << totaltaxrounded << " Silvers charged to the crown.\n\n";
}