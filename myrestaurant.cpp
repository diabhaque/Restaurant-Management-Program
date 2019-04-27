#include <iostream>
#include "Menu.h"
#include "TableManagement.h"
#include "HelperFunctions.h"

using namespace std;

//main function
//creates a dynamic array for tables, customers and menu(stores array of foods)
//sets up tables and menu by calling respective funtions
//calls the initiate management funtion

int main(){
  ClearScreen();
  cout<<"Welcome to your restaurant program!"<<endl;
  int numTables=0;
  cout<<"Please enter the number of tables you want in your restaurant: ";
  cin>>numTables;
  cout << endl;
  Table *tables= new Table[numTables]();
  Customer *customers= new Customer[numTables]();

  for (int i=0; i<numTables; i++){
    cout<<"Number of seats for table "<<i+1<<": ";
    cin>>tables[i].noOfSeats;
    tables[i].isOccupied = false;
    cout<<endl;
  }

  int menuLen=0;
  cout<<"Please enter the number of items you want in your menu: ";
  cin>>menuLen;
  cout << endl;
  Food *menu= new Food[menuLen]();

  while(true){
    ClearScreen();
    //initiate command menu for setting up the restaurant's menu
    cout << "Setup Menu" << endl;
    cout << "===========" << endl;
    cout << "Commands available:" << endl;
    cout << "[Setup menu manually -> manual]" << endl;
    cout << "[Setup menu through file -> file]" << endl;

    string command;
    cin >> command;
    if(command == "manual"){
      //start setting up the menu in command line
      SetupMenu(menu, menuLen);
      break;
    }else if(command == "file"){
      //start setting up the menu via a file
      string filepath;
      cout << "Please specify the file path: ";
      cin >> filepath;
      cout << endl;
      SetupMenuViaFile(menu, filepath);
      break;
    }else{
      cout << "command not available, please try again!" << endl;
      continue;
    }
  }

  //run the code for customer check-ins, check-outs, and other avaialable commands
  InitiateManagement(tables, numTables, menu, menuLen, customers);

  return 0;
}
