#include <iostream>
using namespace std;
 


template <typename T>
T sw(T *a, T *b)
{
swap(*a, *b);
}
int main()
{
    int a = 0, b = 1;
cout << "a " << a << " b " << b <<endl;
sw(&a,&b);  
cout << "a " << a << " b " << b <<endl;
}