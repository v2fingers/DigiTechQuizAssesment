#include <iostream>
#include <thread>
#include <chrono>

//Typing Animation
void TypeToScreen(std::string Input, int Time, int Wait, bool EndLine) //Take input string, wait time between letters, wait time before finishing, and wether or not to end the lin
{
    //Interate through the input string and print each char before waiting for set time.
    int x = 0;
    while (Input[x] != '\0')
    {
        std::cout << Input[x];
        std::this_thread::sleep_for(std::chrono::milliseconds(Time));
        x++;
    };
    //Wait the wait time
    std::this_thread::sleep_for(std::chrono::milliseconds(Wait));
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
    TypeToScreen("Hello, Welcome to this quiz", 25, 500, true);

    //Ask for name
    TypeToScreen("What is your name?", 25, 500, true);
    std::cout << ">";
    //Store their response in a var
    std::cin >> name;
    //Say hello
    TypeToScreen("Hello " + name, 25, 500, false);

    return 0;
}



