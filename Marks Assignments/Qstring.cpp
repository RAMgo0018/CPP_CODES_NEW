
#include <iostream>
#include <string.h>
using namespace std;
void UpperCase(char str[]) {
    str[0] = toupper(str[0]);
    for (int i = 1; i < strlen(str); i++) {
        if (str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        } else {
            str[i] = tolower(str[i]);
        }
    }
}

void removeExtraSpaces(char str[]) {
    int len = strlen(str);
    int spaceCount = 0;
    char temp[len];

    int j = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] == ' ') {
            spaceCount++;
            if (spaceCount > 1) {
                continue;
            }
        } else {
            spaceCount = 0;
        }
        temp[j] = str[i];
        j++;
    }
    temp[j] = '\0';

    strcpy(str, temp);
}
int main() {
    char fullName[100];

    cout << "Enter your full name: ";
    cin.getline(fullName, 100);
    removeExtraSpaces(fullName);
    UpperCase(fullName);

    cout << "Correct name " << fullName << endl;

    return 0;
}

