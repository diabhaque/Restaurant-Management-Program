#include <string>

using namespace std;

//header file for menu.cpp function declarations

//struct containing information on food
struct Food {
  string name;
  double price;
  int prepTime; //in minutes
};

Food InitiateFood(string name, double price, int preptime);

void SetupMenu(Food menu[], int menuLen);

void DisplayMenu(Food menu[], int menulen);
