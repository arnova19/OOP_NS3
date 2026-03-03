#include <iostream>
using namespace std;

class car {         // The class
  public:
    int id;
    string name;
    int descr;
    string brand;// Access specifier
    void task(int descr) {   // Method/function
      cout << "The car is " << descr/id << " % charged with an id " << id;
    }
};

int main() {
  car car1;
  car1.id = 12;
  car1.name = "sedan";
  car1.brand = "audi";// Create an object of MyClass
  car1.task(120);  // Call the method
  return 0;
}
