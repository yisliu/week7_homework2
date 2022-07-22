#include <iostream>
#include <string>
using namespace std;

int main() {
  //make variables
  string str;
  int cnt;
  //get input
  getline(cin, str);
  //check if character is a number
  for(int i = 0; i<str.length(); i++){
    if(str[i]>='0' and str[i]<='9'){
      cnt++;
    }
    else{
      continue;
    }
  }
  //output
  cout<<cnt;
}