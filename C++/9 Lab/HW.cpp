#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int i, n;
    double a;
    ofstream f;
    f.open("nums.txt", ios::out);
    cout<<"n="; cin>>n;
    for (i=0; i<n; i++)
    {
        cout<<"a=";
        cin>>a;
        f<<a<<"\t";
    }
    f.close();
    return 0;
}