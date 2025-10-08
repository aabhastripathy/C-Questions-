#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool digit(char ch) {
    return (ch >= '0' && ch <= '9');
}

bool letter(char ch) {
    return ( (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') );
}

bool letornum(char ch) {
    return digit(ch) || letter(ch);
}

bool space(char ch) {
    return (ch == ' ');
}

bool whitespace(char ch) {
    return (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r');
}

int main() {
    string filePath;
    cout << "Enter a path: ";
    getline(cin, filePath);

    ifstream inputFile(filePath);

    if (!inputFile.is_open()) {
        cout << "ERROR, Cannot open " << endl;
        return 1;
    }

    char ch;
    int charcount = 0;
    int digitcount = 0;
    int lettercount = 0;
    int symbolcount = 0;
    int spacecount = 0;
    int linecount = 0;
    int wordcount = 0;
    bool inWord = false;

    while (inputFile.get(ch)) {
        charcount++;

        if (digit(ch)) {
            digitcount++;
        }
        else if (letter(ch)) {
            lettercount++;
        }

        if (space(ch)) {
            spacecount++;
        }

        if (ch == '\n') {
            linecount++;
        }

        if (!letornum(ch) && !whitespace(ch)) {
            symbolcount++;
        }

        if (letornum(ch)) {
            inWord = true;
        }
        else if (whitespace(ch)) {
            if (inWord) {
                wordcount++;
                inWord = false;
            }
        }
    }
    if (inWord) {
        wordcount++;
    }

    inputFile.close();

    cout << "Number of Characters : " << charcount << endl;
    cout << "Number of Digits     : " << digitcount << endl;
    cout << "Number of Letters    : " << lettercount << endl;
    cout << "Number of Symbols    : " << symbolcount << endl;
    cout << "Number of Spaces     : " << spacecount << endl;
    cout << "Number of Lines      : " << linecount + 1 << endl;
    cout << "Number of Words      : " << wordcount << endl;

    return 0;
}