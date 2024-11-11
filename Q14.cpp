#include <iostream>
using namespace std;

class Stack
{
private:
    int top;
    int item;
    int array[100]; 
public:
    
    Stack()
    {
        top = -1;
    }

    
    void getdata()
    {
        cout << "Enter an item to push onto the stack: ";
        cin >> item;
    }

    
    void push()
    {
        if (top >= 99)
        {
            cout << "Stack overflow" << endl;
        }
        else
        {
            array[++top] = item;
            cout << "Item pushed: " << item << endl;
        }
    }

    
    void pop()
    {
        if (top < 0)
        {
            cout << "Stack underflow" << endl;
        }
        else
        {
            cout << "Item popped: " << array[top--] << endl;
        }
    }

    
    void display()
    {
        if (top < 0)
        {
            cout << "\nStack is empty" << endl;
        }
        else
        {
            cout << "Stack elements are: ";
            for (int i = 0; i <= top; i++)
            {
                cout << array[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Stack s;
    int choice;

    while (true)
    {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            s.getdata();
            s.push();
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.display();
            break;
        case 4:
            exit(0);
        default:
            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}