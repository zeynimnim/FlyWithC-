#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    const int MAXSIZE=3;
    int matrix[3][MAXSIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int *p = &matrix[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<*p<<" ";
             p++;
        }
        cout <<endl;
    }

    return 0;
}
