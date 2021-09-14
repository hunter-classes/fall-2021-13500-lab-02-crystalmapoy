/*
Author: Crystal Mapoy
Course: CSCI-135
Instructor: Tong Yi & Mike Zamansky
Assignment: Lab 2C

creates an array of 10 integers
provides user w interface to edit any elements
*/

//Github user: crystalmapoy

#include <iostream>

int main()
{
    const int SIZE = 10;
    int myData[SIZE];
    int i, v = 0;

    for (int i = 0; i < 10; i++) {
      myData[i] = 1;
    }

    do {

        std::cout << "\n";

        for (i = 0; i < 10; i++) {
          std::cout << myData[i] << " ";
        }
        std::cout << "\nInput index: ";
        std::cin >> i;

        std::cout << "Input value: ";
        std::cin >> v;

        if (0 <= i && i < 10) {
          myData[i] = v;
        }
    } while (0 <= i && i < 10);

    std::cout << "\nIndex out of range. Exit.\n";

    return 0;
}
