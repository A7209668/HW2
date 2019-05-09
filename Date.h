#ifndef DATE_H
#define DATE_H
#include<iostream>
#include<iomanip>
using namespace std;
#include<string>
class Date
{
private:
int month,day,year;
public:
Date();
Date(int,int,int);
void setDate(int,int,int);
int getMonth();
int getDay();
int getYear();
int getAge(int);
};
#endif
