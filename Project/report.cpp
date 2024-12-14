#ifndef REPORT_CPP
#define REPORT_CPP
#include "libs.h"
#include "transaction.cpp"

class Report {
public:
    static void generateReport(const vector<Transaction*>& transactions) {
        double totalIncome = 0.0, totalExpense = 0.0;
        cout << "Financial Report:\n";
        for (const Transaction* transaction : transactions) {
            if (transaction->getType() == "income") {
                totalIncome += transaction->getAmount();
            }
            else if (transaction->getType() == "expense") {
                totalExpense += transaction->getAmount();
            }
        }
        cout << "Total Income: $" << totalIncome << endl;
        cout << "Total Expense: $" << totalExpense << endl;
        cout << "Net Savings: $" << totalIncome - totalExpense << endl;
    }
};

#endif