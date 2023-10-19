// PushOrDeleteInSet.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <set>
#include <iterator>
#include <string>
#include <sstream>

const std::string askForOperation = "What operation do you need?";
const std::string pushOperationName = "push";
const std::string deleteOperationName = "delete";
const std::string wordForWorkFinish = "end";

int main()
{
    std::string operationName, input;
    std::multiset <int> setOfInt;
    int element(0);
    std::cout << askForOperation << '\n';
    while (true)
    {
        std::getline(std::cin, input);
        std::istringstream comand(input);
        if ((comand >> operationName) and (operationName != wordForWorkFinish))
        {
            comand >> element;
            if (operationName == pushOperationName)
            {
                setOfInt.insert(element);
            }
            if (operationName == deleteOperationName)
            {
                setOfInt.erase(element);
            }
        }
        else
        {
            if (operationName == wordForWorkFinish)
            {
                break;
            }
        }
        
    }
    copy(setOfInt.begin(), setOfInt.end(), std::ostream_iterator <int>(std::cout, " "));
    return 1;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
