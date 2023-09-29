#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>

#include <map>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
    /*
        1. map的调用方法就是像数组一样, a[word]
    */
    
    SetConsoleOutputCP(CP_UTF8);
    map<string, size_t> wordlist;
    string word;
    while (cin >> word)
    {
        ++wordlist[word];
    }
    for (const auto &w : wordlist)
    {
        cout << w.first << "出现了" << w.second << "次" << endl;
    }

    set<string> wordexp{"a", "an"};
    while(cin >> word)
    {
        if(wordexp.find(word)!= wordexp.end())
        {
            ++wordlist[word];
        }
    }
    _getch();
    return 0;
}