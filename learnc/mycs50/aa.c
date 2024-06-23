// C on it's own only has keywords that are used in it and NOTHING ELSE (not even it's own functions).
// "#include" is used to add libraries (or header files as they are called) in c to add more functionality to it.
#include <stdio.h> // stdio.h is the standarda I/O header file for some the basic functionality like printing.
#include <cs50.h> // cs50.h is CS50's custom header file for extra functionality.

// Any program written in c is written using the keywords built into c. These keywords are fixed and case-sensitive.
// These keywords should not be used anywhere else other than for their specified functionality.

// This is the starting point for the program....
int main(void)
{
  // This is where the the code to be executed is written.
  // Every line of code must end with a semicolon (;).
  // C also has a way to put in special characters which are otherwise cannot be typed. These are specified...
  // ...using '\'.
  printf("Hello, world\n"); // printf() prints out the string given to it. It's a funciton from stdio.h file.
  // Here '\n' is special character for new line. in order to print '\n' itself you put another '\' behind...
  // ...it like '\\n'.

  // Variables
  // To create variable you must first decleare what is the data type of that variable followed by the name of the... 
  // ...variable and then use the assignment operator to assign the value to it.
  // [Data Type] [Name of the Variables] = [Value];
  string name = "Harry";

  // printf() fucniton only prints formated string (thus 'f' in printf()).
  // Formated strings allow formating them ofcourse, this would mean that once the string has been specified...
  // ...it can be formated outside of the specified string. For this c use format specifier to replace the...
  // ...part of the string with data. Format specifiers are different for each data type.
  printf("hello %s\n", name); // First argument in printf() is always the formated string and other agruments... 
  // ...(seperated by a comma) are the variables for each format specifier respectively.

  int age = get_int("How old are you?: "); // get_int() is another one of cs50's funcitons.

  // Control Flow 
  // Conditional programming can be done using "if", "else if" and "else" keyword.
  // Conditions can be specified for "if" and "else if" by specifing the keyword for the control...
  // ...flow followed by the condition in the parantheses.
  //
  // Conditions are expressions which are statements that result in a boolean value (either 'true' or 'false').
  // Expressions are created by comparing two set of values using comparison operators such has...
  // ...(but not limited to) ==, >, <, >= etc.
  // A conditon can also contain multiple expressions using operators like || (for OR), && (for AND) etc.
  //
  // The code to be executed as the result of these conditions is specified after the condition inside...
  // ...curly braces ('{}').

  // The flow always starts with "if", specifing if the conditon/expression is true then the following code...
  // ...should be executed. Otherwise continue with the program.
  if (age > 18)
  {
    printf("You are older than 18 'cuz you are %i years old\n", age);
  }
  // In case there is another condition that is do be followed the condition/expressiong is specified....
  // ...using "else if" keyword and then the conditon in parantheses. Again if this conditon results to...
  // ...true the the code following it get executed otherwise the program continues.
  else if (age < 18)
  {
    printf("You are not an adult 'cuz you are %i yeats old.\n", age);
  }
  // Lastly in case something is to be done if neither of the previous conditions result in true the...
  // ...code sepecified using "else" keyword gets executed.
  else {
    printf("You are an 18 year old adult.\n");
  }
}
