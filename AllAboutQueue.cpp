#include <iostream>

#include <windows.h>

#include <stdlib.h>

using namespace std;

class AnQueue {
    int* queue;
    int maxSize;
    int front;
    int rear;

public:
    AnQueue()
    {
    }

    AnQueue(int size)
    {
        maxSize = size;
        queue = new int[maxSize];
        front = -1;
        rear = -1;
    }

    void isEmpty()
    {
        if (front == -1 && rear == -1) {
            cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
            cout << "!! T H E   Q U E U E   I S   E M P T Y !!" << endl;
            cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
        }
        else {
            cout << ":):):):):):):):):):):):):):):):):):):):):):):):):" << endl;
            cout << ":) T H E   Q U E U E   I S   N O T   E M P T Y :)" << endl;
            cout << ":):):):):):):):):):):):):):):):):):):):):):):):):" << endl;
        }
    }

    void isFull()
    {
        if (rear == maxSize - 1) {
            cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
            cout << "!! T H E   Q U E U E   I S   F U L L !!" << endl;
            cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
        }
        else {
            cout << ":):):):):):):):):):):):):):):):):):):):):):):):" << endl;
            cout << ":) T H E   Q U E U E   I S   N O T   F U L L :)" << endl;
            cout << ":):):):):):):):):):):):):):):):):):):):):):):):" << endl;
        }
    }

    void enQueue(int anElement)
    {
        if (rear == maxSize - 1) {
            cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
            cout << "!! T H E   Q U E U E   I S   F U L L !!" << endl;
            cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
        }
        else if (front == -1 && rear == -1) {
            front = 0;
            rear = 0;
            queue[rear] = anElement;
        }
        else {
            rear++;
            queue[rear] = anElement;
        }
    }

    void deQueue()
    {
        if (front == -1 && rear == -1) {
            cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
            cout << "!! T H E   Q U E U E   I S   E M P T Y !!" << endl;
            cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
        }
        else if (front == rear && front != -1) {
            front = -1;
            rear = -1;
        }
        else
            front++;
    }

    void printQueue(string queueName)
    {

        for (int count = front; count <= rear; count++) {
            cout << "<><><><><><><><><><><><><" << endl;
            cout << queueName << "[" << count << "]"
                 << " : " << queue[count] << endl;
            cout << "<><><><><><><><><><><><><" << endl;
        }
    }
};

int main()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
    int sizeOfQueue = 0;
    cout << " I N P U T   T H E   S I Z E   O F   T H E   Q U E U E :   ";
    cin >> sizeOfQueue;
    AnQueue anQueue(sizeOfQueue);
    int choice = 0;
    do {
        cout << " I N P U T   W H A T   Y O U   W A N N A   L I K E   T O   D O :   " << endl;
        cout << "\t1 .   C H E C K   I F   T H E   Q U E U E   I S   E M P T Y" << endl;
        cout << "\t2 .   C H E C K   I F   T H E   Q U E U E   I S   F U L L" << endl;
        cout << "\t3 .   A D D   A N   E L E M E N T   I N   T H E   Q U E U E" << endl;
        cout << "\t4 .   R E M O V E   A N   E L E M E N T   F R O M   T H E   Q U E U E" << endl;
        cout << "\t5 .   P R I N T   T H E   Q U E U E" << endl;
        cout << "\t6 .   E X I T" << endl;
        cout << "----->   ";
        cin >> choice;
        switch (choice) {
        case 1: {
            anQueue.isEmpty();
            system("PAUSE");
            system("CLS");
            break;
        }
        case 2: {
            anQueue.isFull();
            system("PAUSE");
            system("CLS");
            break;
        }
        case 3: {
            int element = 0;
            cout << "I N P U T   T H E   E L E M E N T   Y O U   W A N T   T O   A D D   I N   T H E   A R R A Y :   ";
            cin >> element;
            anQueue.enQueue(element);
            system("PAUSE");
            system("CLS");
            break;
        }
        case 4: {
            anQueue.deQueue();
            system("PAUSE");
            system("CLS");
            break;
        }
        case 5: {
            string nameOfTheStack = "";
            cout << "I N P U T   T H E   N A M E   O F   T H E   S T A C K :   ";
            cin >> nameOfTheStack;
            anQueue.printQueue(nameOfTheStack);
            system("PAUSE");
            system("CLS");
            break;
        }
        case 6: {
            break;
        }
        }
    } while (choice != 6);
    return 0;
}
