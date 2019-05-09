#include"StuCard.h"
StuCard::StuCard()
{
}
StuCard::StuCard(string name,bool sex,double scoreAry[],Date birthDay)
{
this->name=name,this->sex=sex,this->scoreAry[0]=scoreAry[0],this->scoreAry[1]=scoreAry[1],this->scoreAry[2]=scoreAry[2],this->birthDay=birthDay;
}
void StuCard::setName(string name)
{
this->name=name;
}
void StuCard::setSex(bool sex)
{
this->sex=sex;
}
void StuCard::setScore(int i,double scoreAry[])
{
this->scoreAry[i]=scoreAry[i];
}
void StuCard::setDate(Date birthDay)
{
this->birthDay=birthDay;
}
string StuCard::getName()
{
return name;
}
bool StuCard::getSex()
{
return sex;
}
double StuCard::getScore(int i)
{
return scoreAry[i];
}
Date StuCard::getDate()
{
return birthDay;
}
double StuCard::average()
{
double average=0;
for(int i=0;i<3;i++)
average+=getScore(i);
return average/3;
}
void StuCard::printCard()
{
cout<<fixed<<setprecision(1)<<getName()<<", "<<getSex()<<", "<<getScore(0)<<", "<<getScore(1)<<", "<<getScore(2)<<", "
<<birthDay.getMonth()<<"/"<<birthDay.getDay()<<"/"<<birthDay.getYear()<<", "<<average()<<", "<<birthDay.getAge(birthDay.getYear())<<endl;
}
