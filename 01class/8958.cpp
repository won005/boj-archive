#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        string str;
        cin >> str;
        int result = 0;
        int count = 1;
        for (char c : str)
        {
            if ('O' == c)
            {
                result += count;
                count++;
            }
            else
            {
                count = 1;
            }
        }
        cout << result << '\n';
    }
}