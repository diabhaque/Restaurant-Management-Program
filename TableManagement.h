#include <string>

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
