/*
Traffic Light
Pawelski
3/31/2022
Please follow the instructions on the activity sheet!
*/

#include <iostream>

int main()
{
    std::string light_color;
    std::cout << "What color of the traffic light is lit? >> ";
    std::cin >> light_color;
    if (light_color == "red")
    {
        std::cout << "Stop!\n";
    }
    else if (light_color == "yellow")
    {
        std::cout << "Prepare to stop.\n";
    }
    else if (light_color == "green")
    {
        std::cout << "Go!\n";
    }
    else
    {
        std::cout << "Invalid color...\n";
    }
    return 0;
}
