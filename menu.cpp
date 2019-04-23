#include <iostream>
#include <String>
#include <iomanip>
#include "Menu.h"

using namespace std;

<<<<<<< HEAD
//make a food and return it to be added to the menu
Food InitiateFood(string name, double price, int preptime){
  Food food;
  food.name=name;
  food.price=price;
  food.prepTime=preptime;
  return food;
}
=======

//Function that sets up the menu for the restaurant
//Inputs: pointer to menu items array, length of the menu items array
//Output: none
void SetupMenu(Food menu[], int menuLen){
  for(int i = 0; i < menuLen; i++){
    string name;
    double price;
    int prepTime;

    cout << "enter name of food: ";
    cin >> name;
    cout << endl << "enter price of food: ";
    cin >> price;
    cout << endl << "enter preparation time of food (in minutes): ";
    cin >> prepTime;

    //call function to initiate individual foods
    menu[i] = InitiateFood(name, price, prepTime);
  }
}

void displayMenu(Food menu[], int menuLen){
  cout<<"\n"<<"Name"<<setw(10)<<"Price"<<setw(10)<<"Preparation Time"<<endl;
  for(int i=0; i<menuLen; i++){
    cout<<menu[i].name<<setw(20)<<menu[i].price<<setw(20)<<menu[i].prepTime<<endl;
  }
}
