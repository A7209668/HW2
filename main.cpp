#include"StuCard.h"
const int SIZE=5;
double*classAver(StuCard stuCard[],int size)
{
double*average=new double;
for(int i=0;i<SIZE;i++)
*average+=stuCard[i].getScore(size);
*average/=SIZE;
return average;
}

int main()
{
string name;
bool sex;
double scoreAry[3]={};
int month,year,day;
StuCard stuCard[SIZE];
scoreAry[0]=80.0,scoreAry[1]=70.0,scoreAry[2]=90.0;
stuCard[0]={StuCard("Jerry",1,scoreAry,Date(3,20,1997))};
scoreAry[0]=85.0,scoreAry[1]=77.0,scoreAry[2]=95.0;
stuCard[1]={StuCard("John",1,scoreAry,Date(5,20,1995))};
scoreAry[0]=83.0,scoreAry[1]=75.0,scoreAry[2]=70.0;
stuCard[2]={StuCard("Mary",0,scoreAry,Date(2,18,2007))};
scoreAry[0]=73.0,scoreAry[1]=95.0,scoreAry[2]=67.0;
stuCard[3]={StuCard("Tom",1,scoreAry,Date(11,8,2003))};
cin>>name>>sex>>scoreAry[0]>>scoreAry[1]>>scoreAry[2]>>month>>day>>year;
stuCard[4]={StuCard(name,sex,scoreAry,Date(month,day,year))};
for(int i=0;i<SIZE;i++)
{
stuCard[i].printCard();
}
cout<<"Average: ";
for(int i=0;i<3;i++)
{
cout<<fixed<<setprecision(1)<<*classAver(stuCard,i);
if(i==2)
break;
cout<<", ";
}
}
