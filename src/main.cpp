#include <iostream>
#include "Led.h"
#include <unistd.h>

int main()
{
    std::cout << "Hello World!" << std::endl;
    Led led1(24);
    Led *led2 = new Led(25);

    while(1)
    {
        led1.Toggle();
        led2->On();
        usleep(100000);
        led1.Toggle();
        led2->Off();
        usleep(100000);
    }
    return 0;
}