#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    for (int i = 1; i <= a; i++)
    {
        for (int j = i; j <= a; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}
