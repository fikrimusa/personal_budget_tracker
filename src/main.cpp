#include <iostream>
#include "transaction.hpp"  // No need for ../include/ when CMake is set up properly

int main() {
    Transaction salary(2022, 11, 2, "Salary", 2000);
    salary.print();
    
    std::cout << "Working!\n";
    return 0;
}