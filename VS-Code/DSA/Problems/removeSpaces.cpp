// Remove Spaces from string
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter the string : ";
    getline(cin, str);
    int count = 0;
    // int temp = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            if (str[i + 1] == ' ')
            {
                count = i;
                for (int j = i + 1; str[j] == ' '; j++)
                {
                    count++;
                }
                // char semp = ' ';
                str[i] = str[count + 1];
                str[count + 1] = ' ';
            }
            else
            {
                str[i] = str[i + 1];
                str[i + 1] = ' ';
            }
        }
    }

    cout << endl
         << "String after removing spaces is: " << str;

    return 0;
}