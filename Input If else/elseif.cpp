#include <iostream>
using namespace std; 
int main() {
  // Write code here
    //   int grade; 

    //   cout << "Masukkan Nilai: ";
    //   cin >> grade; 

    //   if (grade > 90){
    //     cout << "A\n";
    //   } else if (grade > 80){
    //     cout << "B\n";
    //   } else if (grade > 70){
    //     cout << "C\n";
    //   } else if (grade > 60){
    //     cout << "D\n";
    //   } else {
    //     cout << "F\n";
    //   } 

    // Write code here
  int level; 

  cout << "Masukan Level: ";
  cin >> level; 

  if (level >= 21 && level<= 25){
    cout << "Diamond\n";
  } else if (level >= 16 && level<= 20){
    cout << "Platinum\n";
  } else if (level >= 11 && level<= 15){
    cout << "Gold\n";
  } else if (level >= 6 && level<= 10){
    cout << "Silver\n";
  } else {
    cout << "Bronze\n";
  } 
}
