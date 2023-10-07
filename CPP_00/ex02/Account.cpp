#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int deposit) : _amount(deposit){
	Account::_displayTimestamp();
	this->_accountIndex = Account::_nbAccounts;
	std::cout << "index:" << this->_accountIndex
	<< ";amount:" << this->_amount
	<< ";created" << std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += deposit;
}

Account::~Account(){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";amount:" << this->_amount
	<< ";closed" << std::endl;
}

int	Account::getNbAccounts(){
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(){
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(){
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(){
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(){
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts
	<< ";total:" << Account::_totalAmount
	<< ";deposits:" << Account::_totalNbDeposits
	<< ";withdrawals:" << Account::_totalNbWithdrawals
	<< std::endl;
}

void	Account::makeDeposit(int deposit){
	Account::_displayTimestamp();
	this->_nbDeposits += 1;
	std::cout << "index:" << this->_accountIndex
	<< ";p_amount:" << this->_amount
	<< ";deposit:" << deposit;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
	std::cout << ";amount:" << this->_amount
	<< ";nb_deposits:" <<this->_nbDeposits
	<< std::endl;
}

bool	Account::makeWithdrawal(int withdrawal){
	Account::_displayTimestamp();
	if (withdrawal > this->_amount){
		std::cout << "index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount
		<< ";withdrawal:refused" << std::endl;
		return (false);
	}
	this->_nbWithdrawals += 1;
	std::cout << "index:" << this->_accountIndex
	<< ";p_amount:" << this->_amount
	<< ";withdrawal:" << withdrawal;
	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals += 1;
	std::cout << ";amount:" << this->_amount
	<< ";nb_withdrawals:" <<this->_nbWithdrawals
	<< std::endl;
	return (true);
}

int	Account::checkAmount()const{
	return (this->_amount);
}

void	Account::displayStatus()const{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";amount:" << this->_amount
	<< ";deposits:" << this->_nbDeposits
	<< ";withdrawals:" <<this->_nbWithdrawals
	<< std::endl;
}

/****************************PRIVATE*******************************/
void	Account::_displayTimestamp(){
	time_t	timeofday;
	tm 		*stamptime;
	char	ymd[100];
	char	hms[100];

	timeofday = std::time(NULL);
	stamptime = localtime(&timeofday);
	strftime(ymd, 100, "%Y%m%d", stamptime);
	strftime(hms, 100, "%H%M%S", stamptime);
	std::cout << "[" << ymd << "_" << hms << "] ";
}