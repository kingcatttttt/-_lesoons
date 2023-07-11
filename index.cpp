#include <iostream>
using namespace std;

int main()
{
    
    int num1;
    int num2;

    cout << "єто калюкулятор ведите первое число" << endl;
    cin >> num1;
    if (num1 != NULL )
    {
        cout << "ведите второе число" <<endl;
    }
    cin >> num2;
    if (num1 != NULL && num2 != NULL)
    {
        cout << "виберите действие " << "первое число ровно "  << " "<< num1 << " " << "второе число ровно " << " " <<  num2 <<endl;
        cout << "плюс = 1" << " " << "мінус = 2" << " " << "умножить = 3" << " " << "поделить = 4"<<endl;
}
        int a;
        cin >> a;
        switch (a)
        {
        case 1:
            cout << num1 << " + " << num2 << " = " <<(num1 + num2) <<endl;
            break;
            case 2:
             cout << num1 << " - " << num2 << " = " <<(num1 - num2) <<endl;
             break;
             case 3:
              cout << num1 << " * " << num2 << " = " <<(num1 * num2) <<endl;
              break;
              case 4:
               cout << num1 << " / " << num2 << " = " <<(float)num1 / num2 <<endl;
               break;
        default:
        cout << "ви вели не верний запрос" <<endl;
            break;
        }
    }
