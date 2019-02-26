#include <iostream>

using namespace std;

void func_A(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i>=j)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}

void func_B(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if( (i==0) || (j==0) || ((i+j)==n-1) )
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}

void func_C(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if( (i==0) || (j==n-1) || (i==j) )
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}

void func_D(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if( (i+j)>=n-1 )
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}


int main()
{
    int num;
    cout << "Introduzca uno numero => ";
    cin>> num;
    cout<< "A"<<endl;
    func_A(num);
    cout<<"B"<<endl;
    func_B(num);
    cout<<"C"<<endl;
    func_C(num);
    cout<<"D"<<endl;
    func_D(num);

    return 0;
}
