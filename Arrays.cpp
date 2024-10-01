#include <iostream>
#include <vector>

using namespace std;

int main() {
  /*
    arrays
  */
  int numbers[5] = {1, 2, 3, 4, 5}; // need to specify size when declaring array
  cout << numbers[2] << endl; //outputs 3

  numbers[0] = 2; // can change value of element

  cout << sizeof(numbers) << endl; // returns size of array in BYTES, not in elements
  cout << (sizeof(numbers) / sizeof(numbers[0])) << endl; // divide size of array by size of 1st element to get # of elements

  /*
    2D arrays
  */
  
  char letters[2][3] = {
    {'a', 'b', 'b'},
    {'c', 'd', 'b'}
  };
  cout << letters << endl;

  /*
    Structures
  */
  //structures group related variables in one place
  struct {
    int num; // member
    string str; // member
  } myStructure; // structure variable called "myStructure"

  myStructure.num = 1;
  myStructure.str = "hello";

  struct {
    string color;
    string kind;
  } watermelon, broccoli;

  watermelon.color = "red";
  watermelon.kind = "fruit";
  broccoli.color = "green";
  broccoli.kind = "vegetable";
  
  
  /*
    vectors
  */
  vector<string> numbersv = {"1","2", "3", "4", "5"}; // size of a vector is dynamic
  numbersv.push_back("6"); // adds 6 to end of vector

  
  
  return 0;
}
