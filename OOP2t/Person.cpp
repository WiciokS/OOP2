#include "Person.h"

std::string Person::getName()
{
    return name;
}

std::string Person::getSurname()
{
    return surname;
}

int Person::Age()
{
    return datas.Age(year, month, day);
}

int Person::DaysUntil()
{
    return datas.DaysUntil(month, day);
}

Person::Person(std::string nam, std::string surnam, int y, int m, int d)
{
    name = nam;
    surname = surnam;
    year = y;
    month = m;
    day = d;
    if (datas.IsMore(year, month, day))
    {
        throw 404;
    }
}