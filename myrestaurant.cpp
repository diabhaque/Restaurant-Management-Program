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
  Customer *customers= new Customer[numTables]();

  for (int i=0; i<numTables; i++){
    cout<<"Number of seats for table "<<i+1<<": ";
    cin>>tables[i].noOfSeats;
    tables[i].isOccupied = false;
    cout<<endl;
  }

  int menuLen=0;
  cout<<"Please enter the number of items you want in your menu:"<<endl;
  cin>>menuLen;
  Food *menu= new Food[menuLen]();
  SetupMenu(menu, menuLen);

  //Set up menu and tables first.
  //When the customer comes in to start the program, the tables and menu are displayed for him

  while (true){
    InitiateManagement(tables, numTables, menu, menuLen, customers);
  }
  return 0;
}
