#ifndef STUCARD_H
#define STUCARD_H
#include"Date.h"
class StuCard
{
private:
string name;
bool sex;
double scoreAry[3];
Date birthDay;
public:
StuCard();
StuCard(string,bool,double[],Date);
void setName(string);
void setSex(bool);
void setScore(int,double[]);
void setDate(Date);
string getName();
bool getSex();
double getScore(int);
Date getDate();
double average();
void printCard();
};
#endif
