#include <iostream>
using namespace std;


int f(int arr[], int size)
{
 for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] <<endl;
        }
        
    }
}
int main()
{

    int arr[5] = {3,4,5,1,2};
    int const size = sizeof(arr) / sizeof(arr[0]);
    for (int  i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] < arr[j])
            {
                swap(arr[i],arr[j]);
            }
            
            
        }
        
    }
    f(arr, 5);
    
}