#include <ctime>
#include <iostream>
#include "resources/Account.class.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
    this->_accountIndex = 0;
    this->_amount = 0;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    if (initial_deposit > 0) {
        this->_amount += initial_deposit;
        this->_totalAmount += initial_deposit;
        // this->_totalNbDeposits++;
    }
    this->_accountIndex = this->_nbAccounts;
    this->_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";";
    std::cout << "Amount:" << this->_amount << ";";
    std::cout << "created" << std::endl;
    // this->displayStatus();
    this->_nbAccounts++;
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
    std::cout << "dfdfdfdfdfdfdfd" << std::endl;
    return this->_totalAmount;
};

Account::~Account() {
    this->_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";";
    std::cout << "Amount:" << this->_amount << ";";
    std::cout << "closed" << std::endl;
};

Account::Account(){};

void Account::_displayTimestamp(void) {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    std::cout << "[" << 1970 + ltm->tm_year;
    std::cout << 1 + ltm->tm_mon;
    std::cout << ltm->tm_mday;
    std::cout << "_" << 1 + ltm->tm_hour;
    std::cout << 1 + ltm->tm_min;
    std::cout << 1 + ltm->tm_sec << "]";
}
void Account::displayAccountsInfos() {
    if (_totalNbWithdrawals) {
        _displayTimestamp();
        std::cout << "\033[31m accounts:" << _nbAccounts << ";";
        std::cout << "total:" << _totalAmount << ";";
        std::cout << "deposits:" << _totalNbDeposits << ";";
        std::cout << "withdrawals:" << _totalNbWithdrawals << ";\033[0m" << std::endl;
    }
}

void Account::displayStatus() const {
    this->_displayTimestamp();

    std::cout << " index:" << this->_accountIndex << ";";
    std::cout << "Amount:" << this->_amount << ";";
    std::cout << "Deposits:" << this->_nbDeposits << ";";
    std::cout << "Withdrawals:" << this->_nbWithdrawals << ";" << std::endl;
}