#include <iostream>

int main() {
  /*
    Conditionals and else statements
  */
  int num = 20;
  if (num >= 19) {
    std::cout << "num is greater than 19" << std::endl;
  } else if (num < 19 && num > 0) {
    std::cout << "num is less than 19 and positive" << std::endl;
  } else {
    std::cout << "num is negative" << std::endl;
  }
  // shorthand -- variable = (condition) ? expressionTrue : expressionFalse;
  std::string result = (num > 10) ? "num is greater than 10" : "num is less than 10";

  /*
    switch statements
  */
  int day = 2;
  switch (day) {
    case 1:
      std::cout << "Today is monday!" << std::endl;
      break;
    case 2:
      std::cout << "Today is tuesday!" << std::endl;
      break;
    case 3:
      std::cout << "Today is wednesday!" << std::endl;
      break;
    default:
      std::cout << "Today is either thursday, friday, saturday, or sunday!" << std::endl;
  }

  /*
    while loop
  */
  int cnt = 0;
  while (cnt < 10) {  // prints cnt value until condition has been reached
    std::cout << cnt << std::endl;
    cnt++;
  }

  /*
    for loop
  */
  for (int i = 0; i < 5;
       i++) {  // prints i value until condition has been reached
    std::cout << i << std::endl;
  }

  /*
    for-each loop
  */
  int list[5] = {1, 2, 3, 4, 5};
  for (int i : list) {
    if (i == 3) continue;  // breaks ONE iteration in loop
    std::cout << i << std::endl;
  }

  return 0;
}
