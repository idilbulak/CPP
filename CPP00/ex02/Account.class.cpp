#include <iostream>
#include <time.h>
#include <ctime>
#include <iomanip>
#include "Account.hpp"

Account::Account( int initial_deposit ) {

	_accountIndex = _nbAccounts++;
	_totalAmount += _amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "amount:" << _amount << ';';
	std::cout << "created" << std::endl;
}

Account::~Account( void ) {

	_displayTimestamp();
	_nbAccounts--;
	
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "amount:" << _amount << ';';
	std::cout << "closed" << std::endl;

	_totalAmount -= _amount;
}
