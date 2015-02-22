#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int i, t, n, index, position, commands[102];
    string command;

    scanf("%d", &t);

    while (t--) {
        i = 1;
        position = 0;

        scanf("%d", &n);
        while (i <= n) {
            cin >> command;
            if (command == "LEFT") {
                position--;
                commands[i] = -1;
            } else if (command == "RIGHT") {
                position++;
                commands[i] = 1;
            } else {
                scanf(" AS %d", &index);
                position += commands[index];
                commands[i] = commands[index];
            }
            i++;
        }
        printf("%d\n", position);
    }

    return 0;
}
