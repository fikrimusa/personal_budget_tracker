#include "budget_tracker.hpp"
#include <sstream>

void handle_command(BudgetTracker& bt, const std::string& cmd) {
    std::istringstream iss(cmd);
    std::string action;
    iss >> action;

    if (action == "add") {
        int y, m, d;
        char dash;
        std::string desc;
        double amt;
        
        if (iss >> y >> dash >> m >> dash >> d >> desc >> amt) {
            bt.add_transaction(y, m, d, desc, amt);
            std::cout << "Added: " << desc << " $" << amt << "\n";
        }
    }
}