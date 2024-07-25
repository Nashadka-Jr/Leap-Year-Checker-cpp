#include <iostream>

int main() {
    //Define variables
    double year;
    bool four_digit;
    double year2; //Temporary variable used for math
    int year3; //Likewise
    double year4; //Ditto
    int year5; //Same
    double year6;//I'm running out of words
    int year7;//
    double year8;
    double year9;
    double year10;

    std::cout << "What is the year you want to check?\n";
    std::cin >> year;
    //Check for four digits
    if (year < 1000 or year > 9999) {
        std::cout << "Sorry, I can only check four-digit years (Nashadka Junior is an idiot.)\n";
    }
    else {
        bool four_digit = true;
        //Check for divisibility by 4
        year2 = (year / 4);
        year3 = year2;
        year8 = year3;
        if (year2 != year8) {
            std::cout << "It is not a leap year.\n";
        }
        else {
            year4 = (year / 100);
            year5 = year4;
            year9 = year5;
            year6 = (year / 400);
            year7 = year6;
            year10 =year7;
            if (year4 == year9 && year6 != year10) {
                std::cout << "It is not a leap year.\n";
            }
            else {
                std::cout << "It is a leap year!\n";
            }

        }
    }
}
