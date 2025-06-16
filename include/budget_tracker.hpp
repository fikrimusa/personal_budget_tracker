#pragma once
#include <vector>
#include "transaction.hpp"

class BudgetTracker{
public:
    void add_transaction(int y, int m, int d, std::string desc, double amt){
        transactions_.emplace_back(y, m, d, std::move(desc), amt);
    }

    size_t count() const{return transactions_.size(); }

private:
    std::vector<Transaction> transactions_;
};