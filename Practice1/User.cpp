#include "User.h"



User::User()
{
}

User::User(int id, String^ login, String^ password)
{
	this->id = id;
	this->login = login;
	this->password = password;
}

int User::get_id()
{
	return id;
}

String ^ User::get_login()
{
	return login;
}

String ^ User::get_password()
{
	return password;
}
