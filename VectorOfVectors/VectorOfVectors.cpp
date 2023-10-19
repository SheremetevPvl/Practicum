#include <iostream>
#include <vector>


int main()
{
    
    std::vector<std::vector<int>> mainVector = { {1, 2, 3}, 
                                                 {4, 5, 6}, 
                                                 {7, 8, 9} };
    std::vector<int> Vec;
    for (int i = 0; i < mainVector.size(); i++)   //появляется непонятное значение 
    {
        Vec = mainVector.at(i);
        for (int i = 0; i < Vec.size(); i++)
        {
            std::cout << Vec[i] << " ";
        }
        std::cout << '/n';
    }
    /*for (const auto& vector : mainVector)       //всё правильно выводится
    {  
        for (const auto& element : vector) 
        {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
    */
    return 1;
}
