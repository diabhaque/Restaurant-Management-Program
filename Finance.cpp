#include <iostream>

using namespace std;

//DisplayMoney Function dislays the money on the screen
//INPUT: An integer to show the money the restaurant earned

void DisplayMoney(int money){
  cout << "=======================" << endl;
  cout << " Money: " << money << " HKD" << endl;
  cout << "=======================" << endl;
}

//AddMoney function adds the bill to the total daily earnings for the restaurant
//INPUT: Takes in previous balance and the amount to add

void AddMoney(int &balance, int add){
  balance = balance + add;
}
