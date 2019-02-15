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
	int get_id();
	std::string get_login();
	std::string get_password();
	std::string ToString();
	bool check_id(int x)
	{
		return (id == x);
	}

	const bool operator > (const User &u)
	{
		return(this->id > u.id);
	}

	const bool operator > (const int &u)
	{
		return(this->id > u);
	}

	const bool operator < (const int &u)
	{
		return(this->id < u);
	}

	const bool operator < (const User &u)
	{
		return(this->id < u.id);
	}

	const bool operator == (const User &u)
	{
		return(this->id == u.id);
	}

	const bool operator == (const int &u)
	{
		return(this->id == u);
	}

	const bool operator != (const User &u)
	{
		return(this->id != u.id);
	}

	const bool operator != (const int &u)
	{
		return(this->id != u);
	}
};

