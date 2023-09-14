#include <iostream>
using namespace std;

int fact(int N)
{
    if (N == 0)
    {
        return 0;
    }
    if (N == 1)
    {
        return 1;
    }
    return N * fact(N - 1);
    
}
int main()
{
    int input;
    cin >> input;
    cout << fact(input) <<endl;

}