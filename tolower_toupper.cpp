#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(int argc, char* argv[])
{
    int mode = 0;

    // 取程序名（去路径）
    char* prog = strrchr(argv[0], '\\'); // Windows
    if (prog)
        prog++;
    else
        prog = argv[0];

    // 去掉 .exe 后缀
    char name[100];
    strcpy(name, prog);
    char* dot = strrchr(name, '.');
    if (dot) *dot = '\0';

    // 判断名字
    if (strcmp(name, "lower") == 0)
        mode = 1;
    else if (strcmp(name, "upper") == 0)
        mode = 2;

    char c;
    while (cin.get(c)) {
        if (mode == 1)
            cout << (char)tolower(c);
        else if (mode == 2)
            cout << (char)toupper(c);
        else
            cout << c;
    }

    return 0;
}