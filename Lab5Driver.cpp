/*
  Date: 10/21/18
  Name: Devin Brewer
  Desc: COSC_2030 Lab #5; Stacks and Queues
        Lab5Driver.cpp
*/

// Add the necesary files and imports
#include <iostream>
#include <stack>
#include <string>
using namespace std;

string stringReversal1(string input) {
  string outputString = "";

  // Create a stack to hold the data
  stack <char> s;

  // Fill the stack with the data from the string left to right
  for (int i = 0; i < input.length(); i++) {
    s.push(input[i]);
  }

  // Pop the data out of the stack to reverse the order
  while (!s.empty()) {
    outputString += s.top();
    s.pop();
  }

  // Return the new string
  return outputString;
}

int main() {

  // Test Lab5.1
  cout << "This is a test!" << endl;
  cout << stringReversal1("This is a test!") << endl;

  return 0;
}
