#include <iostream>
#include <unordered_map>
#include <string>
#include "cls.h"

using namespace std;

Cls::Cls() {
  cout << "Cls ctor" << endl;
}

Cls::~Cls() {
  cout << "Cls dtor" << endl;
}

double Cls::SayHello() {
  unordered_map<string, double> mymap = {
    { "kenny", 5.4 },
    { "james", 6.1 },
    { "chris", 5.9 } 
  };
  
  cout << mymap["kenny"] << endl;
  return mymap["james"];
}


