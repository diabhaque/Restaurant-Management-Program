#include <iostream>

using namespace std;

void DisplayMoney(int money){
  cout << "=======================" << endl;
  cout << " Money: " << money << " HKD" << endl;
  cout << "=======================" << endl;
}

void AddMoney(int &balance, int add){
  balance = balance + add;
}
