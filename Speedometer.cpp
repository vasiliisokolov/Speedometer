#include <iostream>

int main()
{
    float delta, speed = 0.0f;
    float currentSpeed = 0.0f;
    char speed_str[6]{};

    do
    {
        std::cout << "Input speed delta: \n";
        std::cin >> delta;
        
        if (currentSpeed + delta < 0 || currentSpeed + delta > 150)
        {
            std::cerr << "Speed is out of scale!" << std::endl;
        }
        else
        {
            currentSpeed += delta;
            sprintf_s(speed_str, "%.1f", currentSpeed);
            std::cout << speed_str << std::endl;
        }
    } while (currentSpeed > 0);
    
}