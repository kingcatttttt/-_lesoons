#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,3};
    int a[4] = {};
    int lenght = sizeof(arr) / sizeof(arr[0]);
    bool only;
    for (int i = 0; i < lenght; i++)
    {
        only = true;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                only = false;
            }
            
        }
        if (only)
        {
            cout << arr[i] <<endl;
        }
        
    }
   
    
}