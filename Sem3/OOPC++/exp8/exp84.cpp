#include <iostream>
#include <string>
using namespace std;
 
#define SIZE 5
 
template <class T> class Stack {
public:
    Stack();
    void push(T k);
    T pop();
    T topElement();
    bool isFull();
    bool isEmpty();
 
private:
    int top;
    T st[SIZE];
};
 
template <class T> Stack<T>::Stack() { top = -1; }
 
template <class T> void Stack<T>::push(T k)
{
 
    
    if (isFull()) {
        cout << "Stack is full\n";
    }
 
  
    cout << "Inserted element " << k << endl;
 
    top += 1;
 
    st[top] = k;
}
 
template <class T> bool Stack<T>::isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}
 
template <class T> bool Stack<T>::isFull()
{
    if (top == (SIZE - 1))
        return 1;
    else

        return 0;
}
 
template <class T> T Stack<T>::pop()
{
    T popped_element = st[top];
 
    top--;
 
    return popped_element;
}
 
template <class T> T Stack<T>::topElement()
{
    T top_element = st[top];
 
    return top_element;
}

int main()
{
    Stack<int> integer_stack;
    Stack<string> string_stack;
 
 	cout << "----- Interger Stack -----" << endl;
    integer_stack.push(2);
    integer_stack.push(54);
    integer_stack.push(255);
    cout << integer_stack.pop() << " is popped from stack" << endl;
    cout << "Top element is " << integer_stack.topElement() << endl;
        
    cout << "\n----- String Stack -----" << endl;
    string_stack.push("Hello");
    string_stack.push("world"); 
    cout << string_stack.pop() << " is popped from stack " << endl;
    cout << "Top element is " << string_stack.topElement() << endl;
 
    return 0;
}