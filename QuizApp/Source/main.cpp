#include <iostream>
#include <windows.h>

//Typing Animation
void TypeToScreen(std::string Input, int Time, int Wait, bool EndLine) //Take input string, wait time between letters, wait time before finishing, and wether or not to end the lin
{
    //Interate through the input string and print each char before waiting for set time.
    int x = 0;
    while (Input[x] != '\0')
    {
        std::cout << Input[x];
        Sleep(Time);
        x++;
    };
    //Wait the wait time?
    Sleep(Wait);
    //If not end line then exit
    if (!EndLine)
        return;
    //Otherwise end the line
    else
    {
        std::cout << "\n";
    }  
}

int main() {
    //Store users name
    std::string name;

    //Use type animation to write a welcome
    TypeToScreen("Hello, Welcome to this quiz", 50, 1000, true);

    //Ask for name
    TypeToScreen("What is your name?", 50, 1000, true);
    //Store their response in a var
    std::cin >> name;
    //Say hello
    TypeToScreen("Hello " + name, 50, 1000, true);

    return 0;
}



