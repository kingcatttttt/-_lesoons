#include <iostream>
using namespace std;

int main()
{
    char a;
    int dia,divi;
    int i = 0;
    int type;
    char change;
    cout << "ведите  число чтоб узнать єго диапозон на четность или на ваш вариант" <<endl;
    cin >> dia;
    if (dia != NULL)
    {
        cout << "ведите число на которое будет делиться без остачи" <<endl;
        cin >> divi;
    }

 if( divi != NULL)
 {
  cout << "виберите режим 1 = вертикальний 2 = хоризонтальний" <<endl;
   cin >> type;
 }

 if( type != NULL)
 {
  cout << "виводить числа которие не деляться цело y/n" <<endl;
   cin >> change;
 }

 if(change == 'y')
 {
  a = 1;
 }
  switch (type)
  {
  case 1:
   while (i <= dia)
  {
    if(i % divi == 0)
    {
      cout << "число " << i << " делиться на " << divi << " без остачи;"<<endl;
    } 
    else if( a != 1)
    {
      cout << "число " << i << " не делиться на " << divi << " без остачи;" <<endl;
    }
    i++;
  }
    break;
    case 2:
     while (i <= dia)
  {
    if(i % divi == 0)
    {
      cout << "число " << i << " делиться на " << divi << " без остачи;";
    } 
    else if( a != 1)
    {
      cout << "число " << i << " не делиться на " << divi << " без остачи;";
    }
    i++;
  }
  
  default:
    break;
  }
    }   