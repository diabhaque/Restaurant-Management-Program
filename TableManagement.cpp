#include <iostream>
#include <iomanip>
#include <string>
#include "TableManagement.h"
#include "Menu.h"


using namespace std;

//function that displays the layout of the tables in the Restaurant
//if table is occupied, it shows an X for each table
//if table is not occupied, it shows the number of seats for each table
//INPUT: the array of all tables, and total number of tables

void printReceipt(double bill, int customerno){
  cout<<"========================="<<endl;
  cout<<left;
  cout<<setw(15)<<"Customer No.:"<<right<<setw(10)<<customerno<<endl;
  cout<<left<<setw(15)<<"Your bill:"<<right<<setw(10)<<bill<<endl;
  cout<<"========================="<<endl;
}

void DisplayTables(Table* tables, int noOfTables){
  //just some artwork ;)
  //letting customers know we're gonna show the numTables
  cout<<"Tables Available : \n";
  for(int i = 0; i < noOfTables; i++){
    cout << "===  ";
  }
  cout << endl;
  for(int i = 0; i < noOfTables; i++){
    cout << "|";

    if(tables[i].isOccupied){
      cout << "X";
    }else{
      cout << tables[i].noOfSeats;
    }

    cout << "|  ";
  }
  cout << endl;
  for(int i = 0; i < noOfTables; i++){
    cout << "===  ";
  }
  cout << endl;
}

//Function that performs a linear search and finds the nearest table that is not occupied
//INPUT: the array of all tables, total number of tables, and number of people who came in
int FindNearestTable(Table* tables, int noOfTables, int pplNum){
  int tableIndex = -1;
  for(int x = 0; x < noOfTables; x++){
    if(tables[x].noOfSeats == pplNum && !tables[x].isOccupied){
      tableIndex = x;
      return tableIndex;
    }
  }
  for(int i = 0; i < noOfTables; i++){
    if(tables[i].noOfSeats >= pplNum && !tables[i].isOccupied){
      tableIndex = i;
      return tableIndex;
    }
  }
  return tableIndex;
}

//Function that gets called every time a new customer comes in to the restaurant
//INPUT: the array of all tables, and total number of tables
//add customer to record bill and table number
void CustomerCheckIn(Table* tables, int noOfTables, Food *menu, int menuLen, Customer *customer){
  //record number of people who came in
  int peopleNum = 0;
  cout << "Enter number of people: " << endl;
  cin >> peopleNum;

  //display table layout for reference
  DisplayTables(tables, noOfTables);

  int suggestedTable = FindNearestTable(tables, noOfTables, peopleNum);
  if(suggestedTable == -1){
    //no available tables
    cout << "We are sorry! There are no available tables for you right now. Please come back later." << endl;
  }else{
    cout << "We suggest table no. " << suggestedTable+1<< "." << endl;
    //for now, confirm the suggested table for the incoming Customer
    tables[suggestedTable].isOccupied = true;
    //customer's table number is recorded
    //print their receipt which has their table number
    customer[suggestedTable].tableno=suggestedTable;

    DisplayMenu(menu, menuLen);
    string order="YES";
    double bill=0;
    int waitingTime=0;

    //start a loop to keep ordering foood as long as the user wants;
    while (order=="YES"){
        //prompts user input to order food
      cout<<"\nPlease select an item from the menu: ";
      string item;
      cin>>item;
      int count=0;
      for (int z=0; z<menuLen; z++){
        if (item==menu[z].name){
          bill+=menu[z].price;
          count=1;
          if (menu[z].prepTime>waitingTime){
            waitingTime=menu[z].prepTime;
          }
        }
      }
      if (count==0){
        cout<<item<<" is not in menu. Please select another option."<<endl;
        continue;
      }
      cout<<"\nDo you want to order more food?(YES/NO): ";
      cin>>order;
      if (order=="NO"){
        break;
      }
    }
    //customer's bill is recorded
    customer[suggestedTable].bill=bill;
    cout<<"Your bill is: "<<bill<<" HKD"<<endl;
    cout<<"Please wait "<<waitingTime<<" minutes for your food"<<endl;
    printReceipt(bill, suggestedTable);
  }
}

void CustomerCheckOut(Table * tables, int noOfTables, Customer *customer){
  //prompt customer to enter their customer number from the receipt
  //this allows us to discover their record
  //so we can remove empty their table and collect their bill
  int customerno;
  cout<<"Please enter your customer number(shown in receipt): ";
  cin>> customerno;
  cout<<"Your bill is "<<customer[customerno].bill<<endl;
  cout<<"Please come again!"<<endl;
  tables[customerno].isOccupied=false;
}

//Function to initiate table management with check-ins and check-outs
void InitiateManagement(Table* tables, int noOfTables, Food *menu, int menuLen, Customer *customer){
  cout << "\nrestaurant initiated" << endl;
  cout << "====================" << endl;
  string command;
  while(true){
    cout << "\nCommands available:" << endl;
    cout << "[Customer check-in -> checkin]" << endl;
    cout << "[Customer check-out -> checkout]" << endl;
    cout << "[Exit program -> exit]" << endl;

    cin >> command;
    if(command == "checkin"){
      //call customer check in function
      CustomerCheckIn(tables, noOfTables, menu, menuLen, customer);
    }else if(command == "checkout"){
      //call customer check out function
      CustomerCheckOut(tables, noOfTables, customer);
    }else if(command == "exit"){
      //exit program
      break;
    }else{
      cout << "invalid command, try again" << endl;
      continue;
    }
  }
}
