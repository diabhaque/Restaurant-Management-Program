#include <iostream>

using namespace std;

//struct containing information on food
struct Food {
  String name;
  double price;
  int prepTime; //in minutes
}

int main(){
  cout<<"Welcome to your restaurant program!";
  int numTables=0;
  cout>>"Please enter the number of tables you want in your restaurant:"
  cin>>numTables;
  int *tables= new int[numTables]();
  for (int i=0; i<numTables; i++){
    cin>>tables[i];
    cout<<tables[i];
  }
  int menulen=0;
  cout<<"Please enter the number of items you want in your menu:"
  cin>>menulen;
  Food *menu= new Food[menulen]();
  for (int x=0; x<menulen; x++){
    
  }


  return 0;
}
