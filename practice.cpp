#include <iostream>
#include <string>
#include <cmath>
// using namespace std;
/*
All code within this file was made without using the namespace std, so if things look confusing that is why.
*/
//Practice area 
int main()
{
    // int num = 35; 
    // std::cout << "Hello Corey" << std::endl;
    // std::cout << "Hello C++" << std::endl;
    // // std::cout << num; 
    // std::cout << "Today is the " << num << "th day of the month" << std::endl;


    // // int x = 5; 
    // // int y = 20; 
    // // std::cout << x + y; 

    // //Multi-declaration of variables
    // std::string word = "hello", word1 = "World"; 
    // std::cout << word + " " + word1 + "\n";

    // //With numbers 
    // int x , y , z; 
    // x = y = z = 50; 
    // std::cout << x + y + z; 

    // //input and output
    // int num; 
    // std::cout << "Type a number: "; 
    // std::cin >> num; 
    // std::cout << "your number is " << num; 


    // // boolean operators 
    // std::cout << (3 > 5) << std::endl; 
    // std::cout << (5 < 4) << std::endl;

    // //String Concatenation 
    // std::string name1 = "Bob "; 
    // std::string name2 = "the Builder";
    // std::string fullName;

    //-Method 1
    // fullName = name1 + name2;

    //-Method 2, Append
    // fullName = name1.append(name2);
    // std::cout << fullName;

    /*
    String Methods
    -length()
    -size()
    Both do the same thing in showing the length of a string
    */

    //std::string words = "Help me, help you"; 
    //std::cout << "String length: " << words.length() << "\n"; 
    //std::cout << "String length: " << words.size(); 

    /*
    Accessing Strings 
    -Using [] alongside variables allows for specified character
    -Seems like strings are mutable so allows for
        ~ string word = "Hello"
        ~ word[0] = 'j';
        ~ std::cout << word //prints out jello 
    */
   //std::string worded = "Hello World"; 
   //std::cout << worded[2] << std::endl; //Prints l 
   //worded[6] = 'M'; 
   //std::cout << worded << "\n"; //prints out "Hello Morld"

   //std::cout << worded.at(0); // does the same thing as using []
    
    /*
    Escape characters 
    -\' ~ Single qoute
    -\" ~ Double qoute 
    -\\ ~ Backslash
    -\n ~ New Line
    -\t ~ Tab
    */
    
   /*
   Inputs via String
   -Can use the normal cin >> variable to take a string
   -but cin sees "spaces" as a terminating character so single inputs is the only thing cin can take 
   -the "getLine()" function is normally used for String input
   ~ examples below
   */

    // std::string fullName; 
    // std::cout << "Type in your full name: "; 
    // std::cin >> fullName; 
    // std::cout << "Your name is " + fullName; //only prints out the first word due to the space

    //Using getLine() instead
    // std::cout << "Type in your full name: "; 
    // std::getline(std::cin, fullName);
    // std::cout << "Your name is: " + fullName;  

    /*
    C-Style String
    -Within the C langauge since it didn't support string type
    -To make a string, "char" and a array of characters were used to make strings in C.
    The only reason to use this style is to use CString functions
    ~ example below ~ 
    */
    // std::string greeting1 = "hello"; //Regular string
    // char greeting2[] = "Hello"; //C-style String (Array of characters)

    /*
    C++ Math
    -max(x,y) ~ returns the highest value 
    -min(x,y) ~ returns the smallest value 
    Using the <cmath> library
    -sqrt() ~ Square root 
    -round() ~ rounds up to the whole integer
    -log() ~ natural log 
    */
    // std::cout << std::max(10, 15) << std::endl; 
    // std::cout << std::min(5, 7) << std::endl;
    // std::cout << std::sqrt(64);  


    
    //Boolean values return either 1 or 0 for true or false
    // bool isSkyBlue = true; 
    // std::cout << isSkyBlue; 

    /*
    Boolean expression are useful for logic
    -such operators are >, <, >=, <=, == 
    */

    // std::cout << (10 > 9); //returns 1 since the statement is true. 


    /*
    Conditionals  and if-statements
    a < b // less than
    a <= b // less than or equal to
    a > b // greater than
    a >= b // greater than or equal to
    a == b // equal to
    a != b // not equal to
    ---------------------------------
    other conditionals 
    -if 
    -else 
    -else if 
    -switch
    */

    // int totalNum = 10;
    // int guessedNum; 
    // std::cout << "Enter your guess: "; 
    // std::cin >> guessedNum; 
    // if(guessedNum == totalNum){
    //     std::cout << "Correct the number is " << totalNum; 
    // } else {
    //     std::cout << "Incorrect wrong number, your guess was: " << guessedNum; 
    // }

    //Short Hand if...Else(Ternary Operator)
    //variable = (condition) ? expressionTrue : expressionFalse; 
    // int time = 10;  
    // std::string result = (time < 15) ? "Almost time to go." : "Not yet time to go."; 
    // std::cout << result; 

    //switch statments
    //-Used to select one of many options within a block of code
    // int age = 60; 
    // switch (age){
    //     case 10:
    //         std::cout << "Your still young"; 
    //         break;
    //     case 18: 
    //         std::cout << "Your an offical adult"; 
    //         break; 
    //     case 21:
    //         std::cout << "You can drink"; 
    //         break; 
    //     case 26:
    //         std::cout << "Your brain is fully developed"; 
    //         break; 
    //     case 30: 
    //         std::cout << "Your getting to your golden age"; 
    //         break; 
    //     case 50: 
    //         std::cout << "Your at your prime age"; 
    //     default:
    //         std::cout << "Your age is unmeasurable";  
    // }

    //Example of a while loop. 
    /*
    Syntax- while (condition){
        block of code executed.
        }
    */
    // int i = 0; 
    // while (i<=5){
    //     std::cout << i << std::endl; 
    //     i++; 
    // }

    /*
    Executes the code once and then loops as long as the condition is true. 
    do {
    // code block to be executed
    }
    while (condition);
    */
   

    /*
    C++ for-loops
    syntax:
    for (statment 1; statement 2; statement 3){
        //Code that is executed 
    }

    statement 1: is executed (1 time) before the execution of the code block. 
    statement 2: defines the condition for executing the code block. 
    statement 3: is executed (everytime) after the code block has been executed. 

    more simplier version: Variable, condtional, incrementer. 
    */

    // for(int i = 0; i <= 10; i += 2){
    //     std::cout << "Hello " << i << std::endl;  
    // }

    /*
    C++ nested loops - inner loops fully increment before outerloops finish incrementing. 
    // Outer loop
    for (int i = 1; i <= 2; ++i) {
        std::cout << "Outer: " << i << "\n"; // Executes 2 times

        // Inner loop
        for (int j = 1; j <= 3; ++j) {
            std::cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
        }
    }
    */

    
    return 0;
}

//datatypes 
/*
int num = 24; 
double nums = 24.5; 
char letter = 'A'; 
string word = "Hello World"; 
bool value = false; 
float floNum = 3.14; 
float floNum = 6.206e24; 
*/ 