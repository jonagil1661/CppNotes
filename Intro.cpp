#include <iostream> //header file library that lets us work with input and output objects, like cout.
using namespace std; //we can use names for objects and variables from the standard library.

int main() { //function called main
    std::cout << "Hello, world!" << std::endl; // cout is pronounced "see-out". An object used to output/print text. 
    

    //if you omit the 3rd line 'namespace std;', then you have to use the std keyword in line 6: 'cout << "Hello, world!" << std::endl;'

    cout << "Another line of stuff" << endl; //since we're using namespace std, we don't have to use 'std::' all the time
    cout << "\nusing backslash for new line" <<endl;

    cout << "Hello World!" << "\n";

    cout << "hello world:(" <<endl; //also inserts a new line
    
    cout << "using tab\ttab" <<endl; //inserts a tab

    cout <<"using \"quotations\"" <<endl; //inserts quotations

    /*
      Lines
      of
      Comments
    */

    int num = 3;
    cout << num << endl;

    double doub = 5.1;
    cout << doub << endl;

    string word = "Hello, String";
    cout << "This is a string: " <<  word << endl;

    char character = 'r';
    cout << "This is a character: " <<  character << endl;

    bool trueFalse = true;
    cout << "This is boolean: " << trueFalse << endl;

    return 0; //ends the main function
}







