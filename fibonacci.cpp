/*
Author: Crystal Mapoy
Course: CSCI-135
Instructor: Tong Yi & Mike Zamansky
Assignment: Lab 2D

creates an array of integers
to compute and print all fibonacci numbers from 0 to 59
*/

//Github user: crystalmapoy

#include <iostream>

int main() {

    int fib[60];
    fib[0] = 0;
    fib[1] = 1;
    std::cout << fib[0] << " \n";
    std::cout << fib[1] << " \n";

    for (int i = 2; i < 60; i++){
        fib[i] = fib[i-1] + fib[i-2];
        std::cout << fib[i] << " \n";
    }

    return 0;
}
