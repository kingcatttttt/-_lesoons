#include <iostream>
using namespace std;

int main()
{
 int arr[] = {1,2,3,4,5,6,7,4,3,6,8};
    int lenght = sizeof(arr) / sizeof(arr[0]);
    // sort(arr,arr + lenght);
    // for (int i = 0; i < lenght; i++)
    // {
    //     cout << arr[i] <<endl;
    // }
int number = arr[0];
for (int i = 1; i < lenght; i++)
{
    if (number > arr[i])
    {
        number = arr[i];
    }
}
cout << number <<endl;

    

    
}