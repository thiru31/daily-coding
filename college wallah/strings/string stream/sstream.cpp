#include <bits/stdc++.h>
using namespace std;

#include <sstream>

int main()
{

    stringstream ss;
    int val = 123;
    ss << val;
    string x;
    ss >> x;
    cout << x + "4";
}