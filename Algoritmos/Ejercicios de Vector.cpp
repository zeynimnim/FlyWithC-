//una vector de ejemplo
#include <iostream>

using namespace std;

void imprint(int *v,int n)
{
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
}

int main()
{
    int v[]= {3,5,8};
    imprint(v,sizeof(v)/sizeof(int));
    return 0;
}
