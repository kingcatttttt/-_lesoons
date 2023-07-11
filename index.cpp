#include <iostream>
using namespace std;

int main()
{
    int dia,divi;
    int i = 0;
    cout << "ведите  число чтоб узнать єго диапозон на четность или на ваш вариант" <<endl;
    cin >> dia;
    if (dia != NULL)
    {
        cout << "ведите число на которое будет делиться без остачи" <<endl;
        cin >> divi;
    }

   while (i <= dia)
  {
    if(i % divi == 0)
    {
      cout << "число " << i << " делиться на " << divi << " без остачи"<<endl;
    } 
    else
    {
      cout << "число " << i << " не делиться на " << divi << " без остачи" <<endl;
    }
    i++;
  }
  
    
    }   