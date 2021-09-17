// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Sept 2021
// This Program guess a number between 0 - 9

#include <iostream>

int main() {
  // This Program guess a number between 0 - 9

  const int correct = 5;
  int number;

  // input
  std::cout << "Enter a number between 0 - 9: ";
  std::cin >> number;
  std::cout << "" << std::endl;
  // process
  if (number == correct) {
    // output
    std::cout << "You guessed correctly!" << std::endl;
  }
  if (number != correct) {
    // output
    std::cout << "You guessed wrong!" << std::endl;
  }
}
