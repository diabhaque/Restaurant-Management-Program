#include <iostream>
#include <String>
//make a food and return it to be added to the menu
Food InitiateFood(string name, double price, int preptime){
  Food food=NULL;
  food.name=name;
  food.price=price;
  food.prepTime=preptime;
  return food;
}
