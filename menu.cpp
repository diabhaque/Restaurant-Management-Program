#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "Menu.h"

using namespace std;

//make a food and return it to be added to the menu
Food InitiateFood(string name, double price, int preptime){
  Food food;
  food.name=name;
  food.price=price;
  food.prepTime=preptime;
  return food;
}


//Function that sets up the menu for the restaurant
//Inputs: pointer to menu items array, and length of the menu items array
//Outputs: none
void SetupMenu(Food* menu, int menuLen){
  for(int i = 0; i < menuLen; i++){
    string name;
    double price;
    int prepTime;

    cout <<endl<< "enter name of food: ";
    cin >> name;
    cout << endl << "enter price of food (in HKD): ";
    cin >> price;
    cout << endl << "enter preparation time of food (in minutes): ";
    cin >> prepTime;

    //call function to initiate individual foods
    menu[i] = InitiateFood(name, price, prepTime);
  }
}

//Function that reads menu data from a file and stores the menu in the memory dynamically
//Inputs: pointer to menu items array, and path of the file to be read from
//Outputs: None
void SetupMenuViaFile(Food* menu, string filepath){
  //open file
  ifstream fin;
  fin.open(filepath);

  if(fin.fail()){
    //can't find the file
    cout << "cannot find file specified, please re run the program";
    exit(1);
  }

  //declare food info vars
  string name;
  double price;
  int prepTime;

  //counter for dynamic menu array
  int i = 0;

  //start reading from file, stop when EOF is reached
  while(fin >> name){
    fin >> price >> prepTime;
    menu[i] = InitiateFood(name, price, prepTime);
    i++;
  }
}

//Function that displays the menu
//Inputs: pointer to menu items array, and length of the menu items array
//Outputs: None
void DisplayMenu(Food* menu, int menuLen){
  // letting the customer see the menu
  cout<<"Menu:\n";
  cout<<"\n"<<setw(12)<<"Name"<<setw(11)<<"Price"<<setw(20)<<"Preparation Time"<<endl;
  for(int i=0; i<menuLen; i++){
    cout<<setw(12)<<menu[i].name<<setw(11)<<menu[i].price<<setw(20)<<menu[i].prepTime<<endl;
  }
}
