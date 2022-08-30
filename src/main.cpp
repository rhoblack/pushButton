#include <iostream>
#include "Led.h"
#include "Button.h"
#include <unistd.h>
 
int main()
{
    std::cout << "Hello World!" << std::endl;
    Led led1(24);
    Button button(27);

    while(1)
    {
        if (button.getState() == RELEASE_ACTIVE) {
            led1.Toggle();
        }
        usleep(50000);
    }
    return 0;
}