#pragma once
#include<iostream>
#include <msclr\marshal_cppstd.h>
#include "Data.h"
class Person
{
private:
	Datas datas;
	std::string name;
	std::string surname;
	int year;
	int month;
	int day;
public:
	Person(std::string nam, std::string surnam, int y, int m, int d);
	std::string getName();
	std::string getSurname();
	int Age();
	int DaysUntil();
};