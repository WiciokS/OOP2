#pragma once
#include <ctime>

class Datas
{
public:
    int DaysUntil(int m, int d);
    int Age(int y, int m, int d);
    bool IsMore(int y, int m, int d);
};