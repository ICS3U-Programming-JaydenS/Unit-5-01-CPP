// Copyright (c) 2024 Jayden Smith All rights reserved.
// Created By: Jayden Smith
// Date: May 4, 2025
// This code calculates celsius to fahrenheit


#include <iostream>
#include <string>

void fahrenheit() {
    // Define our variables
    std::string celsius;
    float celsius_float;
    float fahrenheit;

    // Get celsius
    std::cout << "What is your celsius temperature? ";
    std ::cin >> celsius;

    // Convert the user input to float
    try {
        float celsius_float = std::stof(celsius);

        // Negative formula calculation
        if (celsius_float < 0) {
            fahrenheit = ((-1) *(celsius_float * 9 / 5 + 32));
            std::cout
                << celsius_float << " degrees celsius in fahrenheit is "
                << fahrenheit << " \n";

        // Positive formula calculation
        } else {
            fahrenheit = (celsius_float * 9 / 5  + 32);
            std::cout
            << celsius_float << " degrees celsius in fahrenheit is "
            << fahrenheit << " \n";
        }
    // Try catch if user input is unconvertable
    } catch (std::invalid_argument) {
        std::cout << celsius << " is not an integer!\n";
    }
}

// Calls fahrenheit function in main
int main() {
    fahrenheit();
}
