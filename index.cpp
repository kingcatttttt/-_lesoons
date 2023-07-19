#include <iostream>
using namespace std;

int main()
{
 int arr[] = {0,1,3,6,84,4,68,23,7,8,-1};
 int lenght = sizeof(arr) / sizeof(arr[0]);
 int min = arr[0];
    for (int i = 0; i < lenght; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }

        
        
    }
    cout << min <<endl;
    
    
}