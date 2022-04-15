#include <iostream>
#include <regex>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
  string s = "";
  double num;
  srand(time(NULL));
  while (s.find("ドドスコスコスコ") == std::string::npos) {
    num = (double)rand()/RAND_MAX;
    s += (num > 0.5)?  "ド" : "スコ";
  }
  s += "ラブ注入";
  cout << s << endl;
  return 0;
}
