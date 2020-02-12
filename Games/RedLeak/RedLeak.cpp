#include <iostream>

int main()
{
    //prints message to the terminal
    std::cout<<"The year is 1965, two great powers are figthing for supremacy of the globe." << std::endl;
    std::cout<<"On one side we have the proud and glorious motherland, also know as the URSS." << std::endl;
    std::cout<<"On the other side we have the illiterate, dirty and greedy american pigs." << std::endl;
    std::cout<<"Who wins this war will be the most powerfull and influential country in the world." << std::endl;
    std::cout<<"You are agent 13, a KGB spy secretly infiltrated in the CIA HQ." << std::endl;
    std::cout<<"You need to find the correct security codes to bypass the security systems and steal the secret CIA projects to send them to our motherland." << std::endl; 
    
    //declare the 3 number code
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    //print CodeSum and CodeProduct to the terminal
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //hints
    std::cout << std::endl;
    std::cout<<"There are 3 numbers in the code" << std::endl;
    std:: cout<<"The codes add-up to: " << CodeSum << std::endl;
    std:: cout<<"The codes multiply to give: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;

    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GussProduct = GuessA * GuessB * GuessC;
    
    return 0;
}