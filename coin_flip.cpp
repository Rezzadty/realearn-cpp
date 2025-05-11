// Paste code here 💖
#include <iostream>
#include <cstdlib>

int main() {
  srand(time(NULL));

  int num = std::rand() % 2; //Generate angka random dari 0 dan 1

  if (num > 0.5) {
    std::cout << "Heads\n";
  }
  else {
    std::cout << "Tails\n";
  }
}