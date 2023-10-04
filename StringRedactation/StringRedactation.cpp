// StringRedactation.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

void InsertFunc(std::string& Str)
{
    int Pos(0);
    std::string CharsForIns("");
    std::cout << "<pose of insertion> <string for insertion>\n";
    std::cin >> Pos >> CharsForIns;
    std::cout << Str.insert(Pos, CharsForIns) << "\n";
}

void EraseFunc(std::string& Str)
{
    int Pos(0), Num(0);
    std::cout << "<pose of erasing> <number of chars>\n";
    std::cin >> Pos >> Num;
    std::cout << Str.erase(Pos, Num) << "\n";
}

void ReplaceFunc(std::string& Str)
{
    int Pos(0), Num(0); 
    std::string InsertStr("");
    std::cout << "<pose of replacing> <number of chars> <string>\n";
    std::cin >> Pos >> Num >> InsertStr;
    std::cout << Str.replace(Pos, Num, InsertStr) << "\n";
}

void FindFunc(std::string& Str)
{
    std::string StrForLook("");
    int Index(0);
    std::cout << "Write a string you looking for\n";
    std::cin >> StrForLook;
    if (Str.find(StrForLook) != -1)
    {
        std::cout << "We found your string. Pos= " << Str.find(StrForLook) << "\n";
    }
    else
    {
        std::cout << "There is no this string here\n";
    }
}

int main()
{
    std::string Str("");
    int ComandIndex;
    std::cout << "Write a string\n";
    std::cin >> Str;
    while (Str != "") 
    {
        std::cout << "Choose an option\n" << "1)insert, " << "2)erase, " << "3)replace, " << "4)find, "<< "5)end working, " << "6)use new string" << "\n";
        std::cin >> ComandIndex;
        switch(ComandIndex)
        {
            case 1:
            {
                InsertFunc(Str);
                break;
            }
            case 2:
            {
                EraseFunc(Str);
                break;
            }
            case 3:
            {
                ReplaceFunc(Str);
                break;
            }
            case 4:
            {
                FindFunc(Str);
                break;
            }
            case 5:
            {
                Str = "";
                break;
            }
            case 6:
            {
                std::cout << "Write new string" << "\n";
                std::cin >> Str;
            }
        }
    }
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
