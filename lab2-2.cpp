#include <iostream>
#include <string>
using namespace std;

int main()
{
    string inp, opr;
    cout << "Enter a string : ";
    getline(cin, inp);

    for(int i = 0; i < inp.size(); i++)
    {
        char c = inp[i];
        if(c == '+' || c == '-' || c == '*' || c == '/' || c == '%' || c == '=')
        {
            opr.push_back(c);
            opr.push_back(' ');
        }
    }
    cout << opr;
}

