#include <iostream>
using namespace std;

int main()
{
    string inp;
    cout << "Enter a string : ";
    getline(cin, inp);
    int cnt = 0;

    for(int i = 0; i < inp.size(); i++)
    {
        char c = inp[i];
        if(c == '.' && cnt == 0)
        {
            cnt++;
            continue;
        }
        else if(c >= '0' && c <= '9')
        {
           continue;
        }
        else
        {
            cout << "Not Numeric";
            return 0;
        }
    }
    cout << "Numeric";
}
