#include <iostream>
#include <stack>

using namespace std;

void removeLowest(stack<int> &stk) {
    if (stk.empty()) {
        cout << "Stack is empty. Cannot remove the lowest element." << " ";
        return;
    }

    int lowest = stk.top();
    stack<int> temp;


    while (!stk.empty()) {
        if (stk.top() < lowest) {
            lowest = stk.top();
        }
        temp.push(stk.top());
        stk.pop();
    }


    while (!temp.empty()) {
        if (temp.top() != lowest) {
            stk.push(temp.top());
        }
        temp.pop();
    }
}

int main() {
    stack<int> stk;

    stk.push(5);
    stk.push(2);
    stk.push(4);
    stk.push(7);

    cout << "Stack elements are: ";
    while (!stk.empty()) {
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;

    stk.push(5);
    stk.push(2);
    stk.push(4);
    stk.push(7);


    removeLowest(stk);

    cout << "Stack elements are: ";
    while (!stk.empty()) {
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;


    stk.push(2);
    stk.push(-1);

    cout << "Stack elements are: ";
    while (!stk.empty()) {
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;


    stk.push(5);
    stk.push(4);
    stk.push(7);
    stk.push(2);
    stk.push(-1);


    removeLowest(stk);

    cout << "Stack elements are: ";
    while (!stk.empty()) {
        cout << stk.top() <<endl;
        stk.pop();
    }
    cout << " ";
return 0;
}
