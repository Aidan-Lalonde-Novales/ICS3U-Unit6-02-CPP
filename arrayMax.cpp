// Copyright (c) 2022 Aidan Lalonde-Novales All rights reserved

// Created by Aidan Lalonde-Novales
// Created on 2022-05-19
// This program generates random numbers using arrays and finds the max.

#include <iostream>
#include <random>
#include <array>


int FindMax(std::array<int, 10> numArray) {
    // this function finds the highest number in the num_array
    int maxNum = numArray[0];

    for (int numCheck = 0; numCheck < numArray.size(); numCheck++) {
        if (numArray[numCheck] > maxNum) {
            maxNum = numArray[numCheck];
        }
    }

    return maxNum;
}


int main() {
    // this function generates 10 random numbers, calls a function,
    // and outputs the highest one

    std::array<int, 10> numArray;
    int randomNum;
    int maxNum;

    // random seed
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne twister
    std::uniform_int_distribution<int> idist(0, 100);  // random from 0 - 100

    std::cout <<
    "This program generates 10 random numbers and finds the highest one.\n"
    << std::endl;

    // process and output
    for (int counter = 0; counter < 10; counter++) {
        randomNum = idist(rgen);
        numArray[counter] = randomNum;
        std::cout << "Random number generated: " << randomNum << std::endl;
    }

    maxNum = FindMax(numArray);

    // output
    std::cout << "\nThe highest number is " << maxNum << "." << std::endl;

    std::cout << "\nDone." << std::endl;
}
