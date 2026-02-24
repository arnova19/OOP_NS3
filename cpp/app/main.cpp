// Online C++ compiler to run C++ program online
#include <iostream>
class Node{
public:
    int id;
    void use (){
        id = id - 2;
        std::cout << "(Used 2% of the battery!) = " << id << "\n";
    }
};


int main() {
    Node battery1;
    Node battery2;
    
    battery1.id = 100;
    battery2.id = 50;
    
    // Write C++ code here
    std::cout << "Battery level of battery1 is ";
    battery1.use();
    battery1.use ();
    std::cout << "Battery level of 2nd battery is ";
    battery2.use();
    return 0;
}
