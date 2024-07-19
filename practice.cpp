#include <iostream>
#include <string>
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

    // // boolean game -- will continue once I learn conditionals 
    // int num1; 
    // int num2; 
    // std::cout << "Type the first number: "; 
    // std::cin >> num1;
    // std::cout << "Type in the second number: "; 
    // std::cin >> num2;     

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