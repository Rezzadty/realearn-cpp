#include <iostream>

int main() {
  // Write code here
  //Input dan Deklarasi Nama
  /*std::string username; //deklrasi Username
  std::cout << "Enter Your Name : ";
  std::cin >> username; // Input username 
  std::cout << username;*/
  
  //deklarasi bulan 1 & bulan 2
  int bulan1;
  int bulan2;

  std::cout << "Bulan ke-1 : ";
  std::cin >> bulan1; 
  std::cout << "Bulan ke-2 : ";
  std::cin >> bulan2; 

  int bulan = ((bulan2 - bulan1) * 100 / bulan1);

  std::cout << "Hasilnya adalah " << bulan;
}