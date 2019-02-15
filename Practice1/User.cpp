#include "User.h"


User::User()
{
}

User::User(int id)
{
	this->id = id;
}

User::User(int id, std::string login, std::string password)
{
	this->id = id;
	this->login = login;
	this->password = password;
}

int User::get_id()
{
	return id;
}

std::string User::get_login()
{
	return login;
}

std::string User::get_password()
{
	return password;
}

std::string User::ToString()
{
	return Practice1::SystemToStd(id.ToString()) + " " + login + " " + password;
}
