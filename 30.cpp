#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cout << "Nhap mot so nguyen duong N: ";
    cin >> n;

    for(int i = n; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }





return 0;
}
