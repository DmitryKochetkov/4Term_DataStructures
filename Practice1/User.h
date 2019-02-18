#pragma once
#include <iostream>
#include "StringConverter.h"
#include <string>


class User
{
private:
	int id;
	std::string login;
	std::string password;
public:
	User();
	User(int id);
	User(int id, std::string login, std::string password);
	User(std::string login);
	int get_id();
	std::string get_login();
	std::string get_password();
	std::string ToString();
	

	const bool operator > (const User &u)
	{
		return(this->login > u.login);
	}

	const bool operator > (const std::string &u)
	{
		return(this->login > u);
	}

	const bool operator < (const std::string &u)
	{
		return(this->login < u);
	}

	const bool operator < (const User &u)
	{
		return(this->login < u.login);
	}

	const bool operator == (const User &u)
	{
		return(this->login == u.login);
	}

	const bool operator == (const std::string &u)
	{
		return(this->login == u);
	}

	const bool operator != (const User &u)
	{
		return(this->login != u.login);
	}

	const bool operator != (const std::string &u)
	{
		return(this->login != u);
	}
};

