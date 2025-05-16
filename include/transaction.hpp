#pragma once
#include <string>
#include <ctime>
#include <iostream>

class Transaction {
public:
    Transaction(int year, int month, int day, std::string desc, double amount) {
        date.tm_year = year - 1900;
        date.tm_mon = month - 1;
        date.tm_mday = day;
        description = std::move(desc);
        this->amount = amount;
    }

    // Add getter methods
    std::tm getDate() const { return date; }
    std::string getDescription() const { return description; }
    double getAmount() const { return amount; }

    // Add print method
    void print() const {
        std::cout << (date.tm_year + 1900) << "-" 
                  << (date.tm_mon + 1) << "-"
                  << date.tm_mday << " | "
                  << description << " | $"
                  << amount << "\n";
    }

private:
    std::tm date{};
    std::string description;
    double amount;
};