#include <iostream>
#include <string>
#include <cctype>

//Constants used throughout the program
const int MARK_PER_QUESTION = 10;
const int TOTAL_QUESTIONS = 5;

char getAnswer()
{
    char answer;
    
    int thing;

    std::cout << "Your Answer : ";
    std::cin >> answer;

    //Convert answer to lowercase so A and a are treated the same
    answer = std::tolower(answer);

    //Keep asking until a valid answer is entered
    while (answer != 'a' && answer != 'b' && answer != 'c' && answer != 'd')
    {
        std::cout << "Invalid input! Please enter A, B, C or D.\n";
        std::cout << "Your Answer : ";
        std::cin >> answer;
        answer = std::tolower(answer);
    }

    return answer;
}

int main()
{
    //Create empty variable for the score and player name.
    int score = 0;
    std::string Playername;

    //Ask the user for their name and store response in Playername variable
    std::cout << "Enter Your name : ";
    std::getline(std::cin, Playername);

    //If no name is entered, keep asking until one is entered
    while (Playername.empty())
    {
        std::cout << "Name cannot be empty.\n";
        std::cout << "Enter Your name : ";
        std::getline(std::cin, Playername);
    }

    //Welcome them to quiz
    std::cout << "\nWelcome to the Simple Quiz Game!\n\n";

    //Store all quiz questions inside an array
    std::string questions[TOTAL_QUESTIONS] =
    {
        "Identify the correct extension of the user-defined header file in C++?",
        "What is a correct syntax to output Hello World in C++?",
        "Which of the following is address of operator?",
        "How do you insert COMMENTS in C++ code?",
        "What operator is used to add two values together?"
    };

    //Store answer options inside an array
    std::string options[TOTAL_QUESTIONS] =
    {
        "a) .py\nb) .cpp\nc) .h\nd) .hpp",
        "a) cout << \"Hello World!\"\nb) print(\"Hello World!\")\nc) Console.WriteLine(\"Hello World!\")\nd) printf(\"Hello World!\")",
        "a) *\nb) &\nc) &&\nd) #",
        "a) # COMMENT\nb) -- COMMENT\nc) ! COMMENT\nd) // COMMENT",
        "a) The & sign\nb) The + sign\nc) The @ sign\nd) The * sign"
    };

    //Store the correct answers.
    //Question 1 accepts both c and d.
    std::string correctAnswers[TOTAL_QUESTIONS] =
    {
        "cd",
        "a",
        "b",
        "d",
        "b"
    };

    //Store explanations for incorrect answers
    std::string explanations[TOTAL_QUESTIONS] =
    {
        "The correct answer is .h or .hpp. The .h extension comes from C and .hpp is commonly used for C++.",
        "The correct answer is cout << \"Hello World!\"",
        "The correct answer is &",
        "The correct answer is // COMMENT",
        "The correct answer is the + operator."
    };

    //Loop through every question in the quiz
    for (int questionNumber = 0; questionNumber < TOTAL_QUESTIONS; questionNumber++)
    {
        //Display the current question
        std::cout << "Question " << questionNumber + 1 << ": "
                  << questions[questionNumber] << "\n";

        //Display the answer options
        std::cout << options[questionNumber] << "\n";

        //Get the users answer
        char userAnswer = getAnswer();

        //Check if the answer exists inside the correct answer string
        if (correctAnswers[questionNumber].find(userAnswer) != std::string::npos)
        {
            //Tell user they are correct
            std::cout << "Correct!\n";

            //Add marks to the score
            score = score + MARK_PER_QUESTION;
        }
        else
        {
            //Tell user they were incorrect
            std::cout << "Wrong! " << explanations[questionNumber] << "\n";
        }

        std::cout << "\n";
    }

    //Calculate the maximum score
    int maximumScore = TOTAL_QUESTIONS * MARK_PER_QUESTION;

    //Calculate the percentage
    int percentage = (score * 100) / maximumScore;

    //Display the final score
    std::cout << Playername
              << " Your Final Score is : "
              << score
              << " out of "
              << maximumScore
              << "\n";

    //Display the percentage
    std::cout << "Percentage : "
              << percentage
              << "%\n";

    //Give feedback based on the score
    if (percentage >= 80)
    {
        std::cout << "Excellent work!\n";
    }
    else if (percentage >= 60)
    {
        std::cout << "Good job!\n";
    }
    else
    {
        std::cout << "Keep practising!\n";
    }

    //If function reaches here then exit with code 0 (success)
    return 0;
}