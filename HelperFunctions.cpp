#include <string>
#include <iostream>

using namespace std;

void ClearScreen(){
  cout << string(60, '\n');
}

string ToLowerCase(string v){
  for (int i=0; i<v.length(); i++){
    char x=v[i];
    if (x<='Z' && x>='A'){
      v[i]=x-('A'-'a');
    }
  }
  return v;
}
