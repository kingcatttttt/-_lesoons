#include<iostream>
using namespace std;

int main()
{  
    cout << "ведите число и оно провериться на четность" <<endl;
    int number;
    cin >> number;
    if(number % 2 == 0 )
    {
        cout << number << " число четное" <<endl;
    }
    else
    {
        cout << number << " число не четное" <<endl;
    }
}