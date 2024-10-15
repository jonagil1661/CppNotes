#include <iostream>
using namespace std;

int main() {
  /*
    Conditionals and else statements
  */
  int num = 20;
  if (num >= 19) {
    cout << "num is greater than 19" << endl;
  } else if (num < 19 && num > 0) {
    cout << "num is less than 19 and positive" << endl;
  } else {
    cout << "num is negative" << endl;
  }
  // shorthand -- variable = (condition) ? expressionTrue : expressionFalse;
  string result = (num > 10) ? "num is greater than 10" : "num is less than 10";

  /*
    switch statements
  */
  int day = 2;
  switch (day) {
    case 1:
      cout << "Today is monday!" << endl;
      break;
    case 2:
      cout << "Today is tuesday!" << endl;
      break;
    case 3:
      cout << "Today is wednesday!" << endl;
      break;
    default:
      cout << "Today is either thursday, friday, saturday, or sunday!" << endl;
  }

  /*
    while loop
  */
  int cnt = 0;
  while (cnt < 10) {  // prints cnt value until condition has been reached
    cout << cnt << endl;
    cnt++;
  }

  /*
    for loop
  */
  for (int i = 0; i < 5;
       i++) {  // prints i value until condition has been reached
    cout << i << endl;
  }

  /*
    for-each loop
  */
  int list[5] = {1, 2, 3, 4, 5};
  for (int i : list) {
    if (i == 3) continue;  // breaks ONE iteration in loop
    cout << i << endl;
  }

  return 0;
}
