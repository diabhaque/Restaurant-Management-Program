#include <iostream>
#include "Menu.h"
#include "TableManagement.h"

using namespace std;

int main(){
  cout<<"Welcome to your restaurant program!"<<endl;
  int numTables=0;
  cout<<"Please enter the number of tables you want in your restaurant:"<<endl;
  cin>>numTables;
  Table *tables= new Table[numTables]();

  for (int i=0; i<numTables; i++){
    cout<<"Number of seats for table "<<i+1<<": ";
    cin>>tables[i].noOfSeats;
    tables[i].isOccupied = false;
    cout<<endl;
  }

  DisplayTables(tables, numTables);

  int menuLen=0;
  cout<<"Please enter the number of items you want in your menu:"<<endl;
  cin>>menuLen;
  Food *menu= new Food[menuLen]();
  SetupMenu(menu, menuLen);
  DisplayMenu(menu, menuLen);
  return 0;
}
