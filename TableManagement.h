#include <string>

//struct containing information about individual tables
struct Table {
  int noOfSeats;
  bool isOccupied;
};

void DisplayTables(Table* tables, int noOfTables);
