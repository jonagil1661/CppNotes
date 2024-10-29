#include <iostream>
#include <string>
#include <vector>

//using namespace std;

int main() {
  /*
    arrays
  */
  int numbers[5] = {1, 2, 3, 4,
                    5};        // need to specify size when declaring array
  std::cout << numbers[2] << std::endl;  // outputs 3

  numbers[0] = 2;  // can change value of element

  std::cout << sizeof(numbers)
       << std::endl;  // returns size of array in BYTES, not in elements
  std::cout << (sizeof(numbers) / sizeof(numbers[0]))
       << std::endl;  // divide size of array by size of 1st element to get # of
                 // elements

  /*
    2D arrays
  */

  char letters[2][3] = {{'a', 'b', 'b'}, {'c', 'd', 'b'}};
  std::cout << letters << std::endl;

  /*
    Structures
  */
  // structures group related variables in one place
  struct {
    int num;      // member
    std::string str;   // member
  } myStructure;  // structure variable called "myStructure"

  myStructure.num = 1;
  myStructure.str = "hello";

  struct {
    std::string color;
    std::string kind;
  } watermelon, broccoli;

  watermelon.color = "red";
  watermelon.kind = "fruit";
  broccoli.color = "green";
  broccoli.kind = "vegetable";

  /*
    vectors
  */
  std::vector<std::string> numbersv = {"1", "2", "3", "4",
                             "5"};  // size of a vector is dynamic
  numbersv.push_back("6");          // adds 6 to end of vector

  return 0;
}
