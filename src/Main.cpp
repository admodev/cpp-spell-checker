#include <iostream>
#include <string>

using namespace std;

void spellCheck()
{
    string wordCheck;
    cout << "Please input the word you want to correct... \n";
    getline (cin, wordCheck);
}

int main()
{
    string name;
    cout << "What is your name? ";
    getline (cin, name);
    cout << "Hello, " << name << "!\n";

    cout << "Welcome to Exegesis Spell Checker! \n";

    spellCheck();
}
