#include <iostream>
using namespace std;

/*
Use inheritance to derive a class from another:
- Child classes have direct access to public/protected attributes from parent
*/

class Restaraunt {  // parent class
 protected:
  bool passInspection = false;

 public:
  void print1() { cout << "Parent Class" << endl; }
};

class FastFood : public Restaraunt {  // child class
 private:
  int fiveStarRating = 5;

 public:
  void print2() {
    cout << "The rating is: " << fiveStarRating << " stars" << endl;
  }
  void passInspectionMethod(bool passed) {
    passInspection = passed;
    cout << "Restaurant passed the inspection (1=True, 0=False): "
         << passInspection << endl;
  }  // sets passInspection in parent class
};

int main() {
  Restaraunt review1;
  review1.print1();  // outputs 'Parent Class'

  FastFood review2;
  review2.print2();  // outputs 'The rating is: 5 stars'
  review2.print1();  // outputs 'Parent Class'

  review2.passInspectionMethod(true);

  return 0;
}