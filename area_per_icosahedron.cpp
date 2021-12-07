// Copyright (c) 2021 Noah Ouellette All rights reserved.
//
// Created by: Noah Ouellette
// Created on: Dec. 4 2021
// This program calculates the volume and surface area of an icosahedron


#include <unistd.h>
#include <iostream>
#include <cmath>


float edgeLength, icosahedronVolume, icosahedronSurfaceArea;

std::string units, userChoice;


void surface() {
    // calculate surface area
    icosahedronSurfaceArea = (5 * sqrt(3)) * pow(edgeLength, 2);
    std::cout << " \n";
    sleep(2);
    std::cout << "The surface area of your icosahedron is ";
    std::cout << icosahedronSurfaceArea << units <<"^2.\n";
    std::cout << " \n";
}

void volume() {
    // calculate volume
    icosahedronVolume = ((5 * (3 + sqrt(5))) / 12) * (pow(edgeLength, 3));
    std::cout << " \n";
    sleep(2);
    std::cout << "The volume of your icosahedron is ";
    std::cout << icosahedronVolume << units <<"^3.\n";
    std::cout << " \n";
}


int main() {
  // get input from user

  std::string userAnswer;
  std::cout << "This program calculates the volume and ";
  std::cout << "surface area of an icosahedron!\n";
  sleep(2);
  std::cout << "\n";
  std::cout << "\033[1;36mEnter the units: \033[0m\n";
  std::cin >> units;
  std::cout << "\033[1;36mEnter the edge length: \033[0m\n";
  std::cin >> edgeLength;
  sleep(2);

  // Ask if user would like to calculate volume or surface area
  std::cout << "\033[1;35mWould you like to calculate volume";
  std::cout << " or surface_area?\033[0m\n";
  std::cin >> userChoice;

  if (userChoice == "volume") {
      sleep(2);
      volume();
  } else if (userChoice == "surface_area") {
      sleep(2);
      surface();
  } else {
      sleep(2);
      std::cout <<"Error, you must enter either volume or surface_area.\n";
      std::cout <<" \n";
  }

  // Ask if user would like to calculate again
  std::cout << "\033[1;34mWould you like to calculate again? Y or N\033[0m\n";
  std::cin >> userAnswer;
  if (userAnswer == "Y") {
      main();
  } else {
      std::cout << " \n";
      std::cout << "\033[1;33mThanks for using\033[0m\n";
  }
}
