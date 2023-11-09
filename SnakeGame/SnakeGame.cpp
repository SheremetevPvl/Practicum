#include <iostream>
#include <vector>

const std::string askForFieldSize = "What area do you need?(x y)";
const char snakeHead = '#';
const char snakePart = '/';
const char fieldFillCh = '*';
const char appleCh = '@';

struct Coordinates
{
    int x;
    int y;
};

class GameField 
{
public:

    std::vector<std::vector<char>> field;

    void SetField(Coordinates maxCoord)
    {
        field.resize(maxCoord.y);
        for (int i = 0; i < maxCoord.y; i++)
        {
            field.at(i).resize(maxCoord.x);
            for (int a = 0; a < maxCoord.x; a++)
            {
                field[i][a] = fieldFillCh;
            }
        }
    }

    void SetApple(Coordinates maxCoord)
    {
        int x, y(0);
        x = rand() % maxCoord.x;
        y = rand() % maxCoord.y;
        field[y][x] = appleCh;
    }

    void SetObject()
    {

    }

    void DisplayField()
    {
        for (int i = 0; i < field.size(); i++)
        {
            for (int a = 0; a < field[i].size(); a++)
            {
                std::cout << field[i][a];
            }
            std::cout << '\n';
        }
    }

};

class Snake
{
public:
    
    struct bodyParts
    {
        Coordinates position;
        char part;
    };
    std::vector<bodyParts> snakeBody;
    
    void CreateSnake(Coordinates maxCoord)
    {
        snakeBody.resize(2);
        snakeBody[0].position.x = 0;
        snakeBody[0].position.y = maxCoord.y / 2;
        snakeBody[0].part = snakePart;
        snakeBody[1].position.x = 1;
        snakeBody[1].position.y = maxCoord.y / 2;
        snakeBody[1].part = snakeHead;
    }

    void SetSnakeOnField(GameField & field)
    {
        Coordinates coord;
        for (int i = 0; i < snakeBody.size(); i++)
        {
            coord = snakeBody[i].position;
            field.field[coord.y][coord.x] = snakeBody[i].part;
        }
    }
};

int main()
{
    GameField gameArea;
    Snake snake;
    Coordinates pos, maxCoord;
    std::cout << askForFieldSize << '\n';
    std::cin >> maxCoord.x >> maxCoord.y;
    gameArea.SetField(maxCoord);
    snake.CreateSnake(maxCoord);
    gameArea.DisplayField();
    gameArea.SetApple(maxCoord);
    snake.SetSnakeOnField(gameArea);
    gameArea.DisplayField();

    return 1;
}

