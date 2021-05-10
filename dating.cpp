// Copyright (c) 2021 Malcolm Tompkins All rights reserved
//
// Created by Malcolm Tompkins
// Created on May 10, 2021
// Determines if a person fits grandma's dating criteria

#include <iostream>
#include <string>

const int youngest_age = 25;
const int oldest_age = 40;


main() {
    std::string user_input;
    int user_age;

    // Input
    std::cout << "Enter your age: ";
    std::cin >> user_input;
    // Process
    try {
        user_age = std::stoi(user_input);

        if (user_age >= youngest_age &&
        user_age <= oldest_age) {
            std::cout << "You can date my grandchild";
        } else if (user_age < youngest_age) {
            std::cout << "You are too young";
        } else {
            std::cout << "You are too old";
        }
    } catch (std::invalid_argument) {
        std::cout << user_input;
        std::cout << " is not an age";
    }
    std::cout << "\nDone.";
}
