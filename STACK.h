#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;
struct StackNode
{
    int data;
    StackNode* next;
    StackNode(int value)
    {
        data = value;
        next = NULL;
    }
};
struct Stack
{
    StackNode* top = NULL;
    void push(int value)
    {
        StackNode* newNode = new StackNode(value);
        newNode->next = top;
        top = newNode;
    }
    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        StackNode* temp = top;
        top = top->next;
        delete temp;
    }
    int peek()
    {
        if (top == NULL)
        {
            cout << "Stack is empty" << endl;
            return -1; // or throw exception
        }
        return top->data;
    }
    bool isEmpty()
    {
        return top == NULL;
    }
    void display()
    {
        StackNode* current = top;
        while (current != NULL)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};
#endif
