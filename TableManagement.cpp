#include <iostream>
#include <string>

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

void DisplayTables(){

}
