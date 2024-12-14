#ifndef EXCEPTIONS_CPP
#define EXCEPTIONS_CPP
#include "libs.h"

class InsufficientFundsException : public runtime_error
{
public:
	InsufficientFundsException() : runtime_error("Insufficient funds for this transaction") {}
};

class InvalidTransactionException : public runtime_error
{
public:
	InvalidTransactionException() : runtime_error("Invalid transaction data!") {}
};

#endif
