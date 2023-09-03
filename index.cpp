#include <iostream>
#include <ctime>
using namespace std;



// int main()
// {
//     srand(time(NULL));
//     int const size = 10;
//     int arr[size] = {};
//     bool val = true;
//     for (int i = 0; i < size; i++)
//     {
//         arr[i] = rand()%10;
       
//     }
    
//     for (int i = 0; i < size; i++)
//     {
//         val = true;
//         for (int j = 0; j < i; j++)
//         {
//            if (arr[i] == arr[j])
//            {
//            val = false;
//            }
           
//         }
//         if (val)
//         {
//             cout << arr[i] << endl;
//         }
        
//     }
    
   
    
// }

int stack(int a)
{
if (a == 10)
{
   return 0;
}
cout << a << endl;
a++;
return stack(a);
}
int main()
{
stack(3);
}