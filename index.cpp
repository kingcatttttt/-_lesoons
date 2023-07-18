#include <iostream>
#include <ctime>
using namespace std;

int main() 
{
    cout << "weclome to generation numbers" <<endl;
    int SIZE = 0;
    cin >> SIZE;
    int arr[1000] = {};
    srand(time(NULL));
    for (int l = 0; l < SIZE; l++)
    {
        int random = rand() % SIZE;
        arr[l] = random;
    }
    
    bool value = true;
    int lenght = sizeof(arr) / sizeof(arr[0]);
    for (int  i = 0; i < lenght; i++)
    {
        value = true;
        for (int  j = 0; j < i; j++)
        {
            if (arr[j] == arr[i])
            {
                value = false;
                break;
            }
            
        }
        if (value)
        {
            cout << arr[i]  <<endl;

        }
        
    }
    cout << "        |----------------|           " <<endl;
    cout <<  "\t"<<    "| "<<lenght<< "           | "  <<endl;
    cout << "        |----------------|           " <<endl;
;
}
