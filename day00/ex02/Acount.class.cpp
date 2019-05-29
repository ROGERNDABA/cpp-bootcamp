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
    // if (initial_deposit > 0) {
    this->_amount += initial_deposit;
    this->_totalAmount += initial_deposit;
    // this->_totalNbDeposits++;
    // }
    this->_accountIndex = this->_nbAccounts;
    this->_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";";
    std::cout << "Amount:" << this->_amount << ";";
    std::cout << "created" << std::endl;
    // this->displayStatus();
    this->_nbAccounts++;
};

void Account::makeDeposit(int deposit) {
    this->_nbDeposits++;
    this->_totalNbDeposits++;
    this->_totalAmount += deposit;

    this->_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    std::cout << "deposit:" << deposit << ";";
    this->_amount += deposit;
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_deposits:" << this->_nbDeposits << ";";
    std::cout << std::endl;
};

bool Account::makeWithdrawal(int withdrawal) {
    this->_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    if (withdrawal > this->_amount) {
        std::cout << "withdrawal: refused" << std::endl;
        return false;
    } else {
        this->_totalAmount -= withdrawal;
        this->_nbWithdrawals++;
        this->_totalNbWithdrawals++;
        std::cout << "withdrawal:" << withdrawal << ";";
        this->_amount -= withdrawal;
        std::cout << "amount:" << this->_amount << ";";
        std::cout << "nb_withdrawals:" << this->_nbWithdrawals << ";";
        std::cout << std::endl;
        return true;
    }
};

int Account::checkAmount(void) const {
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
    struct tm tstruct;
    char buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y%m%d_%H%M%S", &tstruct);
    std::cout << "[" << buf << "] ";
}
void Account::displayAccountsInfos() {
    // if (_totalNbWithdrawals) {
    _displayTimestamp();
    std::cout << " accounts:" << _nbAccounts << ";";
    std::cout << "total:" << _totalAmount << ";";
    std::cout << "deposits:" << _totalNbDeposits << ";";
    std::cout << "withdrawals:" << _totalNbWithdrawals << ";" << std::endl;
    // }
}

void Account::displayStatus() const {
    this->_displayTimestamp();

    std::cout << " index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << ";" << std::endl;
}