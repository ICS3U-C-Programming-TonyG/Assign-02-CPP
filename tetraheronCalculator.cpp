// Copyright (c) Year Tony G All rights reserved.
//
// Created by: Tony G
//
// Date: 2025-03-07
//
// Tetrahedron calculator

#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    std::cout << "This program will calculate a tetrahedron!" << std::endl;
    std::cout << "Available options:" << std::endl;
    std::cout << "1. Volume calculator" << std::endl;
    std::cout << "2. Surface area calculator" << std::endl;
    std::cout << "3. Edge length calculator" << std::endl;

    // Getting user choice
    int choice;
    std::cout << "Please select an option: ";
    std::cin >> choice;

    // Handling calculations based on user input - volume
if (choice == 1) {
    float edge;
    std::cout << "Please enter edge length (cm): ";
    std::cin >> edge;
    float volume = (pow(edge, 3) / (6 * sqrt(2)));
    std::cout << "Volume: " << std::fixed << std::setprecision(2) << volume << " cm³" << std::endl;
    // Handling calculations based on user input - surface area
} else if (choice == 2) {
    float edge;
    std::cout << "Please enter edge length (cm): ";
    std::cin >> edge;
    float surface_area = (std::sqrt(3) * std::pow(edge, 2));
    std::cout << "Surface area: " << std::fixed << std::setprecision(2) << surface_area << " cm²" << std::endl;
    // Handling calculations based on user input - edge length
} else if (choice == 3) {
    float surface_area;
    std::cout << "Please enter surface area (cm²): ";
    std::cin >> surface_area;
    float edge_length = std::sqrt(surface_area / std::sqrt(3));
    std::cout << "Edge length: " << std::fixed << std::setprecision(2) << edge_length << " cm" << std::endl;
} else {
    std::cout << "Invalid option! Please choose between 1, 2, or 3." << std::endl;
}

}
