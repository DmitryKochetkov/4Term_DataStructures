#pragma once
using namespace System;
ref class User
{
private:
	int id;
	String^ login;
	String^ password;
public:
	User();
	User(int id, String^ login, String^ password);
	int get_id();
	String^ get_login();
	String^ get_password();
};

