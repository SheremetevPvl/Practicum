// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

class Person
{
public:
    Person(std::string name, unsigned age) : name{ name }, age{ age } {}
    std::string getName() const { return name; }
    unsigned getAge() const { return age; }

    void setName(std::string personName) { name = personName; }
    void setAge(unsigned personAge) { age = personAge; }
private:
    std::string name;
    unsigned age{};
};
std::ostream& operator << (std::ostream& os, const Person& person)
{
    return os << person.getName() << " " << person.getAge();
}

void print(std::vector<Person> const& input)
{
    std::copy(input.begin(),
        input.end(),
       std::ostream_iterator<Person>(std::cout, " "));
}

int main()
{
    Person bob{ "",0 };
    std::cout << "Input name and age: ";
    vector<Person> myGroup =
    {
        Person{"Tom", 23},
        Person{"Bob", 25},
        Person{"Alice", 22},
        Person{"Kate", 31}
    };
    print(myGroup);
    //std::cin >> bob;
    //std::cout << "Name: " << bob.getName() << "\tAge: " << bob.getAge() << std::endl;
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
