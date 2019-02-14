#pragma once
#include <iostream>
#include <string>

class User
{
private:
	int id;
	std::string login;
	std::string password;
public:
	User();
	User(int id, std::string login, std::string password);
	int get_id();
	std::string get_login();
	std::string get_password();
	std::string ToString();
};

