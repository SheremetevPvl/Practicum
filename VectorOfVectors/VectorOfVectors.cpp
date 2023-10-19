#include <iostream>
#include <vector>


int main()
{
    
    std::vector<std::vector<int>> mainVector = { {1, 2, 3}, 
                                                 {4, 5, 6}, 
                                                 {7, 8, 9} };
    std::vector<int> subVec;
    for (int i = 0; i < mainVector.size(); i++)   
    {
        subVec = mainVector.at(i);
        for (int i = 0; i < subVec.size(); i++)
        {
            std::cout << subVec[i] << " ";
        }
        std::cout << '\n';
    }
    return 1;
}
