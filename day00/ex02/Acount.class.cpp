#include "resources/Account.class.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
    if (initial_deposit > 0) {
        this->_amount += initial_deposit;
        this->_totalAmount += initial_deposit;
        this->_totalNbDeposits++;
    }
    this->_nbAccounts++;
    this->_accountIndex = this->_nbAccounts;
};

void Account::makeDeposit(int deposit) {
    this->_totalAmount += deposit;
    this->_amount += deposit;
    this->_nbDeposits++;
    this->_totalNbDeposits++;
};

bool Account::makeWithdrawal(int withdrawal) {
    if (withdrawal > this->_amount) {
        return false;
    } else {
        this->_amount -= withdrawal;
        this->_totalAmount -= withdrawal;
        this->_nbWithdrawals++;
        this->_totalNbWithdrawals++;
        return true;
    }
};

int Account::checkAmount(void) const {
    return this->_totalAmount;
};

Account::~Account(){};

Account::Account(){};