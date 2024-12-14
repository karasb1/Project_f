#ifndef BUDGET_CPP
#define BUDGET_CPP
#include "libs.h"

class Budget
{
private:
	double limit;
	double currentSpent;
	string category;
public:
    Budget(double limit, const string& category)
        : limit(limit), currentSpent(0.0), category(category) {
    }

    void addExpense(double amount) {
        if (currentSpent + amount > limit) {
            cout << "Warning: Budget for " << category << " exceeded!\n";
        }
        currentSpent += amount;
    }
    void printBudget() const
    {
        cout << "Budget for " << category << ": $" << currentSpent << " / $" << limit << endl;
    }
};



#endif