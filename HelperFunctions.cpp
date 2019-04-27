#include <string>
#include <iostream>

using namespace std;
//ClearScreen funtion prints out 60 newline characters to empty the screen
void ClearScreen(){
  cout << string(60, '\n');
}

//ToLowerCase funtion is called everytime a food item is input by the user
//INPUT: takes a string input which is the food item
//OUTPUT: returns the same string in lowercase

string ToLowerCase(string v){
  for (int i=0; i<v.length(); i++){
    char x=v[i];
    if (x<='Z' && x>='A'){
      v[i]=x-('A'-'a');
    }
  }
  return v;
}
