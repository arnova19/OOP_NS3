#include <iostream>
using namespace std;

class car {         // The class
  public:
    int id;
    string name;
    string brand;// Access specifier
    void task() {   // Method/function
      cout << "The car is " << brand << " with an id " << id;
    }
};

int main() {
  car car1;
  car1.id = 12;
  car1.name = "sedan";
  car1.brand = "audi";// Create an object of MyClass
  car1.task();  // Call the method
  return 0;
}
