#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num;
    cout << "N =";
    cin >> num;

    while (num >= 10)
    {
        string s = to_string(num);
        int sum = 0;

        for (size_t i = 0; i < s.length(); i++)
        {
            cout << s[i];
            if (i + 1 < s.length())
                cout << "+";
            sum += (s[i] - '0');
        }

        cout << "=" << sum << endl;
        num = sum;
    }

    cout << "FINAL OUTPUT" << endl;
    cout << num << endl;

    return 0;
}