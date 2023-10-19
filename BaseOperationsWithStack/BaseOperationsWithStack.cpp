#include <iostream>
#include <stack>

const std::string askForStackSize = "How many elements do you need to add?";
const std::string askForStackElements = "Enter this elements";
const std::string sentFirstStackElShowing = "Top element is ";
const std::string suggToDelTopStcakEl = "Now let`s delete first element";

int main()
{
    int stackSize(0), stackElement;
    std::stack<int> stackOfInt;
    std::cout << askForStackSize << '\n';
    std::cin >> stackSize;
    std::cout << askForStackElements << '\n';
    for (int i = 0; i < stackSize; i++)
    {
        std::cin >> stackElement;
        stackOfInt.push(stackElement);
    }
    std::cout << sentFirstStackElShowing  << stackOfInt.top() << '\n';
    std::cout << suggToDelTopStcakEl << '\n';
    stackOfInt.pop();
    std::cout << sentFirstStackElShowing << stackOfInt.top() << '\n';
}
