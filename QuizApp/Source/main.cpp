#include <iostream>
#include <string>

int main() {
    //Create empty variable for the score and player name.
    int score = 0;
    std::string Playername;
    
    //Ask the user for their name and store response in Playername variable
    std::cout <<"Enter Your name : "; std::getline(std::cin, Playername);
    
    // Welcome them to quiz
    std::cout << "Welcome to the Simple Quiz Game!\n\n";

    // Question 1
    // Print Question
    std::cout << "Question 1: Identify the correct extension of the user-defined header file in C++?\n";
    //Print answer options
    std::cout << "a) .py\nb) .cpp\nc) .h\nd) .hpp\n";
    //Create empty variable to hold player input
    char answer1;
    //Ask for answer
    std::cout<<"Your Answer : ";
    std::cin >> answer1;
    
    //Multiple correct answers working, if its any of the following then it will be correct.
    if (answer1 == 'c' || answer1 == 'C' || answer1 == 'd' || answer1 == 'D') {
        //Tell user its correct
        std::cout << "Correct!\n";
        //Add 10 points to score
        score=score+10;
    //If not correct answer
    } else {
        //Print correct answer
        std::cout << "Wrong! The correct answer is .h or .hpp. The .h extension is from C and can be used for C++ code, but .hpp is for C++ only.\n";
    }

    // Question 2, follows same as question 1
    std::cout << "\nQuestion 2: What is a correct syntax to output Hello World in C++?\n";
    std::cout << "a) cout  << \"Hello World!;\" \nb) print(\"Hello World!);\" \nc) Console.WriteLine(\"Hello World!);\"\n";
    char answer2;
    std::cout<<"Your Answer : ";
    std::cin >> answer2;

    if (answer2 == 'a' || answer2 == 'A') {
        std::cout << "Correct!\n";
        score=score+10;
    } else {
        std::cout << "Wrong! The correct answer is cout  << \"Hello World!\\;\"\n";
    }

    // Question 3, follows same as question 1
    std::cout << "\nQuestion 3: Which of the following is address of operator?\n";
    std::cout << "a) *\nb) &\nc) &&\nd) #\n";
    char answer3;
    std::cout<<"Your Answer : ";
    std::cin >> answer3;

    if (answer3 == 'b' || answer3 == 'B') {
        std::cout << "Correct!\n";
        score=score+10;
    } else {
        std::cout << "Wrong! The correct answer is &\n";
    }

    // Question 4, follows same as question 1
    std::cout << "\nQuestion 4: How do you insert COMMENTS in C++ code?\n";
    std::cout << "a) # COMMENT\nb) -- COMMENT\nc) ! COMMENT\nd) // COMMENT\n";
    char answer4;
    std::cout<<"Your Answer : ";
    std::cin >> answer4;

    if (answer4 == 'd' || answer4 == 'D') {
        std::cout << "Correct!\n";
        score=score+10;
    } else {
        std::cout << "Wrong! The correct answer is // COMMENT.\n";
    }

    // Question 5, follows same as question 1
    std::cout << "\nQuestion 5: What operator is used to add two values together?\n";
    std::cout << "a) The & sign\nb) The + sign\nc) The @ sign\nd) The * sign\n";
    char answer5;
    std::cout<<"Your Answer : ";
    std::cin >> answer5;

    if (answer5 == 'b' || answer5 == 'B') {
        std::cout << "Correct!\n";
        score=score+10;
    } else {
        std::cout << "Wrong! The correct answer is the + operator.\n";
    }

    // Display the final score (out of total possible: 50)
    std::cout << "\n"<<Playername<<" Your Final Score is : " << score << " out of 50\n";
    
    //If function reaches here then exit with code 0 (success)
    return 0;
}