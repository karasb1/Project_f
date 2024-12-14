#ifndef TRANSACTION_CPP
#define TRANSACTION_CPP
#include "libs.h"
#include "exceptions.cpp"

class Transaction
{
protected:
	string type;
	double amount;
	string category;
	string date;
public:
	Transaction(const string& type, double amount, const string& category, const string& date) : type(type), amount(amount), category(category), date(date)
	{
		if (amount <= 0)
		{
			throw InvalidTransactionException();
		}
	}
	virtual ~Transaction() = default;
	string getType() const { return type; }
	double getAmount() const { return amount; }
	string getCategory() const { return category; }
	string getDate() const { return date; }
	virtual void print() const
	{
		cout << "Type :" << type << endl;
		cout << "Amount :" << amount << endl;
		cout << "Category :" << category << endl;
		cout << "Date :" << date << endl;
	}
};

#endif