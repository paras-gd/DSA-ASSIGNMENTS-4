#include <iostream>
using namespace std;

int q1[100], q2[100], f1 = 0, r1 = 0, f2 = 0, r2 = 0;

void push(int x) { q1[r1++] = x; }

int pop() {
    if (f1 == r1) return -1;
    while (r1 - f1 > 1) q2[r2++] = q1[f1++];
    int res = q1[f1++];
    swap(q1, q2); swap(f1, f2); swap(r1, r2);
    f2 = r2 = 0;
    return res;
}

int top() {
    if (f1 == r1) return -1;
    while (r1 - f1 > 1) q2[r2++] = q1[f1++];
    int res = q1[f1++];
    q2[r2++] = res;
    swap(q1, q2); swap(f1, f2); swap(r1, r2);
    f2 = r2 = 0;
    return res;
}

int main() {
    push(10);
    push(20);
    cout << top() << endl;
    cout << pop() << endl;
    cout << pop() << endl;
}
