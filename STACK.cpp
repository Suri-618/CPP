#include "stacks.h"
#include <iostream>
using namespace std;
int main()
{
    Stack St;
    St.push(10);
    St.push(50);
    St.push(90);
    St.push(40);
    St.display();
    St.peek();
    St.pop();
    St.isEmpty();
}
