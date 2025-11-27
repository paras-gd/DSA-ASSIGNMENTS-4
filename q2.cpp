#include <iostream>
using namespace std;
int main() {
    int cq[100], n, front = -1, rear = -1, choice, value;
    cin >> n;
    do {
        cin >> choice;
        if (choice == 1) {
            cin >> value;
            if ((rear + 1) % n == front)
                cout << "Queue full\n";
            else {
                if (front == -1) front = 0;
                rear = (rear + 1) % n;
                cq[rear] = value;
            }
        }
        else if (choice == 2) {
            if (front == -1)
                cout << "Queue empty\n";
            else {
                cout << cq[front] << "\n";
                if (front == rear)
                    front = rear = -1;
                else
                    front = (front + 1) % n;
            }
        }
        else if (choice == 3) {
            if (front == -1)
                cout << "Queue empty\n";
            else
                cout << "Not empty\n";
        }
        else if (choice == 4) {
            if ((rear + 1) % n == front)
                cout << "Queue full\n";
            else
                cout << "Not full\n";
        }
        else if (choice == 5) {
            if (front == -1)
                cout << "Queue empty\n";
            else {
                int i = front;
                while (true) {
                    cout << cq[i] << " ";
                    if (i == rear) break;
                    i = (i + 1) % n;
                }
                cout << "\n";
            }
        }
        else if (choice == 6) {
            if (front == -1)
                cout << "Queue empty\n";
            else
                cout << cq[front] << "\n";
        }
    } while (choice != 7);
  return 0;
}
