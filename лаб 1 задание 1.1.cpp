#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<double> myStack;
    setlocale(LC_ALL, "RU");
    myStack.push(3.14);
    myStack.push(2.71);
    myStack.push(5.55);
    myStack.push(4.99);

    // Определение максимального элемента в стеке
    double maxElement = myStack.top();
    stack<double> tempStack;

    while (!myStack.empty()) {
        if (myStack.top() > maxElement) {
            maxElement = myStack.top();
        }
        tempStack.push(myStack.top());
        myStack.pop();
    }

    // Восстановление исходного стека
    while (!tempStack.empty()) {
        myStack.push(tempStack.top());
        tempStack.pop();
    }

    // Вывод максимального элемента
    cout << "Максимальный элемент в стеке: " << maxElement << std::endl;

    // Просмотр данных стека
    cout << "Данные в стеке: ";
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << std::endl;

    return 0;
}