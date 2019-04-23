#include <iostream>

using namespace std;

int main(){
  cout<<"Welcome to your restaurant program";
  int numTables=0;
  cin>>numTables;
  int *tables= new int[numTables]();
  for (int i=0; i<numTables; i++){
    cin>>tables[i];
    cout<<tables[i];
  }

  return 0;
}
