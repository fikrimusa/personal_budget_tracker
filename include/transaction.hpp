#pragma once
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Transaction {
public:
    Transaction(int y, int m, int d, string desc, double amt)
        :  date_{0, 0, 0, d, m-1, y-1900}, 
           description_{move(desc)},
           amount_{amt}{}

    string to_csv() const {
        char buf[11];
        strftime(buf, sizeof(buf), "%Y-%m-%d", &date_);
        return string(buf) + "," + description_ + "," + to_string(amount_);
    }

private:
    tm date_;
    string description_;
    double amount_;
};