#include <iostream>

int main() {
int start = 1;
bool found = false;
int result = 0;

while (!found) {
    start *= 10;
    for (int i = start; i < start * 10 / 6; i++) {
        found = true;
        for (int j = 2; j <= 6; j++) {
            if (!isPerm(i, j * i)) {
                found = false;
                break;
            }
        }
        if (found) {
            result = i;
            break;
        }
    }
}
}