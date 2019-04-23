#include <iostream>
#include <String>

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
}
