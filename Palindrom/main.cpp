#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;

    cin >> input;

    string palindrom = input;

    reverse(palindrom.begin(), palindrom.end());


    if (input == palindrom){
        cout << "TAK";
    }
    else {
        cout << "NIE";
    }

}
