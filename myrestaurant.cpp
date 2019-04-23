#include <iostream>
#include "Menu.h"

using namespace std;

int main(){
  cout<<"Welcome to your restaurant program!"<<endl;
  int numTables=0;
  cout<<"Please enter the number of tables you want in your restaurant:"<<endl;
  cin>>numTables;
  int *tables= new int[numTables]();
  for (int i=0; i<numTables; i++){
    cout<<"Number of seats for table "<<i+1<<": ";
    cin>>tables[i];
    cout<<endl;
  }
  int menuLen=0;
  cout<<"Please enter the number of items you want in your menu:"<<endl;
  cin>>menuLen;
  Food *menu= new Food[menuLen]();
  SetupMenu(menu, menuLen);
  DisplayMenu(menu, menuLen);
  return 0;
}
