#include <iostream>
#include <string>
#include "TableManagement.h"


using namespace std;

//function that displays the layout of the tables in the Restaurant
//if table is occupied, it shows an X for each table
//if table is not occupied, it shows the number of seats for each table
//INPUT: the array of all tables, and total number of tables
void DisplayTables(Table* tables, int noOfTables){
  //just some artwork ;)
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
  for(int i = 0; i < noOfTables; i++){
    if(tables[i].noOfSeats >= pplNum && !tables[i].isOccupied){
      tableIndex = i;
      break;
    }
  }
  return tableIndex;
}

//Function that gets called every time a new customer comes in to the restaurant
//INPUT: the array of all tables, and total number of tables
void CustomerCheckIn(Table* tables, int noOfTables){
  //record number of people who came in
  int peopleNum = 0;
  cout << "Enter number of people: " << endl;
  cin >> peopleNum;

  //display table layout for reference
  DisplayTables(tables, noOfTables);

  int suggestedTable = FindNearestTable(tables, noOfTables, peopleNum);
  if(suggestedTable == -1){
    //no available tables
    cout << "We are sorry! There are no available tables for you right now.
             Please come back later." << endl;
  }else{
    cout << "We suggest table no. " + suggestedTable + "." << endl;
    //for now, confirm the suggested table for the incoming Customer
    tables[suggestedTable].isOccupied = false;

    //display table layout for reference
    DisplayTables(tables, noOfTables);
  }
}

void CustomerCheckOut(){

}

//Function to initiate table management with check-ins and check-outs
void InitiateManagement(Table* tables, int noOfTables){
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
