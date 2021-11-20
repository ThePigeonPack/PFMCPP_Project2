#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 int
 float
 char
 bool
 double
 unsigned int

 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int televisions = 1;
    int computerMonitors = 2;
    int laptops = 4;
    float schisms = 2.f;
    float pagesWritten = 4.5f;
    float pillows = 9.f;
    bool amIAsleep = false;
    bool wouldILikeToBe = true;
    bool canIMakeIt = true;
    char firstInitial = 't';
    char middleInitial = 'p';
    char lastInitial = 'p';
    double guitarAmps = 2;
    double workingAmps = 1.5;
    double guitars = 1000;
    unsigned int hoursAsleep = 8;
    unsigned int hoursAwake = 8;
    unsigned int hoursInBetween = 16;

    
    ignoreUnused(number, televisions, computerMonitors, laptops, schisms, pagesWritten,pillows, hoursAsleep, hoursAwake, hoursInBetween, firstInitial, middleInitial, lastInitial, guitarAmps, workingAmps, guitars, amIAsleep, wouldILikeToBe, canIMakeIt); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int thinkOfFunctions(int codesLearned, int ideasForNames, int hours)
{
    ignoreUnused(codesLearned, ideasForNames, hours);
    return {};
}
/*
 2)
 */
bool buyNewGear(bool seeGearIWant, int money = 0)
{
    ignoreUnused(seeGearIWant,money);
    return {};
}
/*
 3)
 */
void watchTV(int freeTime, double channels, int volume = 100, int televisions = 1)
{
    ignoreUnused(freeTime, channels, volume, televisions);
}
/*
 4)
 */
int affectChange(int passion)
{
    ignoreUnused(passion);
    return {};
}
/*
 5)
 */
int doISleep(bool amIAsleep, bool wouldILikeToBe, unsigned int hoursAsleep, unsigned int hoursAwake, unsigned int hoursInBetween)
{
    ignoreUnused(amIAsleep, wouldILikeToBe, hoursAsleep, hoursAwake, hoursInBetween);
    return {};
}
/*
 6)
 */
int doMakeup(int colors, int tools)
{
    ignoreUnused(colors, tools);
    return {};
}
/*
 7)
 */
int writeSong(int lyrics, int instruments, int melodies = 2)
{
    ignoreUnused(lyrics, instruments, melodies);
    return {};
}
/*
 8)
 */
int buildAStudio(int plan, int lumber, int gear, int money, int helpingHands)
{
    ignoreUnused(plan, lumber, gear, money, helpingHands);
    return {};
}
/*
 9)
 */
void applyForJobs(int resumeQuality = 0, bool coverLetter = false, float interestInJob = 0.f)
{
    ignoreUnused(resumeQuality, coverLetter, interestInJob);
}
/*
 10)
 */
void boardGame(int theGame, int friends, double snacks = 9999)
{
    ignoreUnused(theGame, friends, snacks);
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto myFunctions = thinkOfFunctions(1, 10, 18);
    //2)
    auto newGear = buyNewGear(true);
    //3)
    watchTV(2, 500, 100, 1);
    //4)
    auto activism = affectChange(1);
    //5)
    auto sleepSchedule = doISleep(false, true, 8, 8, 16);
    //6)
    auto goodLooks = doMakeup(256, 5);
    //7)
    auto hitSingle = writeSong(1, 4);
    //8)
    auto recordingStudio = buildAStudio(1, 100, 50, 1000, 9);
    //9)
    applyForJobs();
    //10)
    boardGame(1, 3);
    
    ignoreUnused(carRented, myFunctions, newGear, activism, sleepSchedule, goodLooks, hitSingle, recordingStudio);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
