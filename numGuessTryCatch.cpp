// Copyright (c) 2026 Alex OBrien All rights reserved
// .
// Created by : Alex OBrien
// Created on : October 22, 2026
// This program uses a try catch program to create a
// random number guesser game

#include <iostream>
#include <random>

int main() {
    // Generate a random int between 0 and 9
    int random_num = rand() % 10;

    std::cout << "   Guess a random number between 0-9! : ";
    int guess_num;

    // Check if input reading failed
    if (!(std::cin >> guess_num)) {
        std::cout << "" << guess_num << "isn't a valid input!\n";
    }

    // Check the guess
    if (random_num != guess_num) {
        std::cout << "You guessed incorrectly!\n";
        std::cout << "The correct number was " << random_num << "\n";
    } else {
        std::cout << "You guessed correctly!\n";
    }
}
