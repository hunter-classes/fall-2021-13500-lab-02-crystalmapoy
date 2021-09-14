/*
Author: Crystal Mapoy
Course: CSCI-135
Instructor: Tong Yi & Mike Zamansky
Assignment: Lab 2A

input integer range if number out of range ask again
*/

//Github user: crystalmapoy

#include <iostream>
#include <cmath>

int main()
{
    double num;
    do {
        std::cout << "Please enter an integer: ";
        std::cin >> num;
    }
    while ((num < 1) || (99 < num));

    double squared = pow(num,2);
    std::cout << "Number squared is " << squared;


    return 0;
}
