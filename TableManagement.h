#include <string>
#include "Menu.h"

//struct containing information about individual tables
struct Table {
  int noOfSeats;
  bool isOccupied;
};

struct Customer {
  double bill;
  int tableno;
};

void DisplayTables(Table* tables, int noOfTables);

void InitiateManagement(Table* tables, int noOfTables, Food *menu, int menuLen, Customer *customer);
