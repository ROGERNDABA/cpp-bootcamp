#include "resources/Account.class.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
    if (initial_deposit > 0) {
        this->_totalAmount += initial_deposit;
        this->_totalNbDeposits++;
    }
    this->_nbAccounts++;
};

void Account::makeDeposit(int deposit) {
    this->_totalAmount += deposit;
    this->_totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal) {
    if (withdrawal > this->_totalAmount) {
        return false;
    } else {
        this->_totalAmount -= withdrawal;
        return true;
    }
}

int Account::checkAmount(void) const {
    return this->_totalAmount;
};
