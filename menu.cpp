#include <iostream>
#include <String>
<<<<<<< HEAD
//make a food and return it to be added to the menu
Food InitiateFood(string name, double price, int preptime){
  Food food=NULL;
  food.name=name;
  food.price=price;
  food.prepTime=preptime;
  return food;
=======

//Function that sets up the menu for the restaurant
//Inputs: pointer to menu items array, length of the menu items array
//Output: none
void SetupMenu(Food *menu, int menuLen){
  for(int i = 0; i < menuLen; i++){
    String name;
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
>>>>>>> de0008c6c10e911c817bdf14fff150192e9c542d
}
