#pragma once
#include <vector>
#include <fstream>
#include <filesystem>
#include "transaction.hpp"

class BudgetTracker{
public:
    void add_transaction(int y, int m, int d, std::string desc, double amt){
        transactions_.emplace_back(y, m, d, std::move(desc), amt);
    }

    size_t count() const{return transactions_.size(); }

    bool save_to_csv(const std::filesystem::path& p) const {
        std::ofstream f(p);
        for (const auto& t : transactions_) f << t.to_csv() << "\n";
        return f.good();
    }


private:
    std::vector<Transaction> transactions_;
};