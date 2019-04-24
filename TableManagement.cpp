#include <iostream>
#include <string>
#include "TableManagement.h"


using namespace std;

//Function to initiate table management with check-ins and check-outs
void InitiateManagement(){
  cout << "restaurant initiated" << endl;
  cout << "====================" << endl;
  string command;
  while(true){
    cout << "Commands available:" << endl;
    cout << "[Customer check-in -> checkin]" << endl;
    cout << "[Customer check-out -> checkout]" << endl;

    cin >> command;
    if(command == "checkin"){
      //call customer check in function
    }else if(command == "checkout"){
      //call customer check out function
    }else{
      cout << "invalid command, try again" << endl;
      continue;
    }
  }
}

//Function that gets called every time a new customer comes in to the restaurant
void CustomerCheckIn(){
  int peopleNum = 0;
  cout << "Enter number of people" << endl;
  cin >> peopleNum;


}

void CustomerCheckOut(){

}

//function that displays the layout of the tables in the Restaurant
//if table is occupied, it shows an X for each table
//if table is not occupied, it shows the number of seats for each table
//INPUT: the array of all tables, and total number of tables
void DisplayTables(Table* tables, int noOfTables){
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
