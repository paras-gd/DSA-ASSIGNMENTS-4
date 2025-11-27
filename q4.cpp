#include <iostream>
using namespace std;
#define MAX 100
int main() {
    char str[MAX];
    int freq[256] = {0}; 
    char queue[MAX];
    int front = 0, rear = 0;
    cout << "Enter the string (space separated or with spaces): ";
    cin.getline(str, MAX);
    cout << "First non-repeating characters: ";
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == ' ') continue;
        freq[ch]++;
        queue[rear++] = ch;
        while (front < rear && freq[queue[front]] > 1) {
            front++;
        }
        if (front < rear) {
            cout << queue[front] << " ";
        } else {
            cout << "-1 ";
        }
    }
    cout << endl;
    return 0;
}
