/*
A 
B C
D E F
G H I J
K L M N O
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    char ch = 'A';
    cout << "Enter number of rows:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch <<" ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}