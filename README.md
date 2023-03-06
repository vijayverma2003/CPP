# C++

## Your first C++ program

```c++
#include <iostream>

int main()
{
    std::cout << "Hello World";
    return 0;
}
```

**int** stands for interger, means our main function is gonna return an integer.

**#include** is used for using CSL, that is C++ standard library. The standard library provides bunch of capabilties that we need when creating applications after **#include** we in angle brackets we write the file we want to include, in above program we included **iostream** which is short for _input output stream_, in this file we have capabilities for printing something on the screen or getting input from the user.

After that in the function we type **std** which is a bucket of features available to us and we can access those features by using double colons (_::_).

**cout** is one of the features that is short for character out. Using this object we can output one or more characters on the screen.
To use that we use double left angle brackets and type the text we want to display and terminate it with a semicolon (_;_). This line we wrote is called a **statement** because it tells the operating system what to do. Finally, we return the value **0** and terminate it with semicolon, and we return 0 to tell the operating system that our program is gonna terminate correctly. If we return any other other value that is positive or negative that means our program encountered an error.

For converting this c++ code to machine code, we click on the play button on the top right corner, or use shortcut.

**_Summary_** -

1. First, we include the iostream file which provides various features for printing and taking inputs on the screen.
2. Then we defined the main function that is entry level to program.

## The basics

**Variables**

In programming, we use variables to temporarily store data in the computer's memory. Technically, variable is an address to computer memory where value is stored and as value can be changed so it's called an variable.

For declaring variables firstly we write their type and then give variable a name and then initialize its value. We can always create a variable without initializing it, and when we print it we see a completely random value which is **garbage**.

```c++
int file_size = 10;
```

We can also declare two variables in one line, but that's not a good practice.

```c++
int file_size = 10, counter = 0;
```

**Constants**

For declaring variables that can't be changed we use **const** keyword.

```c++
const double pi = 3.14;
```

**Notations**

> Snake Case - file_size

> Camel Case - fileSize

> Pascal Case - FileSize

> Hungarian Notation - iFileSize

In Hungarian Notation the name of variable starts with the first letter of it's type.

**Mathematical Experssions**

Like most of programming language we have add, subtract, multiply, division, modulas, increment and decrement operator but in C++ we have division on the basis of its types. For example, we have two integers but their result of division is a double it will still return a integer, to get a double as a result for one of the variable we have to convert its type to double.

```c++
double x = 10;
int y = 3;
double z = x/y; // returns 3.33333
```

Increment and decrement operator can be used as prefix and postfix. With prefix, first their value will be changed then it will be used and in postfix, first their value will be used and then it will be changed.

```c++
int x = 10;
int y = ++x; // x = 11, y = 11
int z = x++; // x = 11, z = 10
```

**Writing output to the console**

For writing something in console, we use **std::cout** which is called **Standard Output Stream**, Stream stands for sequence of characters and Standard Output is our console or terminal window.

The **<<** double brackets are called **Steam Insertion Operator**. It's an operator for inserting something to our output stream.

_To print x = 10 in terminal we write_

```c++
int x = 10;
std::cout << "x = " << x;
```

Now, if we want to print one more variable, it will end up in same line, so we have to end this stream with **std::endl**, which is short for endline.

```c++
int x = 10;
int y = 5;
std::cout << "x = " << x << std::endl;
std::cout << "y = " << y

// or

std::cout << "x = " << x << std::endl
          << "y = " << y;
```

Now, we have repetition everywhere, that is **std::**, to remove that, we use a namespace, that makes std available everywhere in that file.

```c++
#include <iostream>

using namespace std;

int main() {
    int x = 10;
    int y = 5;
    cout << "x = " << x << endl
         << "y = " << y;
}
```

**Reading inputs from the console**

For reading inputs from the console, we use **cin** which is chain extraction operator followed by two right **>>** angle brackets.

```c++
    cout << "Enter two values x and y: ";

    double x;
    double y;

    cin >> x;
    cin >> y;

    // Short:  cin >> x >> y;

    cout << x + y;
```

**Working with the standard library**

_Click on [cmath](https://cplusplus.com/reference/cmath/) to view the documentation._

```c++
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Enter radius of circle: ";

    double radius;

    cin >> radius;

    double area = 3.14 * pow(radius, 2);

    cout << area;
    /*
    */
}
```

_If you are not able to take inputs in VS Code terminal, then go to **Code > Prefrences > Settings** and search for **Code-runner : Run in terminal** and check that._

**Comments**

For declaring comments, we use **//** or **/\* \*/** to create a block comment.

## Fundamental data types

We have seen that when we declaring a variable we have to specify it's type and this type can not change through the lifetime of our program, that's why **C++ is a statically type language**.

**short**

Takes **2B** of memory and ranges between -32,768 to 32,768.

**int**

Takes **4B** of memory on most systems and ranges between -2B to 2B.

**long**

For storing large numbers and its range and memory is same as int.

```c++
 long file_size = 90000L;
```

**long long**

Takes 8B of memory for storing very large numbers but it's not used oftenly.

**float**

Range: -3.4 x e<sup>38</sup> to 3.4 x e<sup>38</sup> Memory: 4B

```c++
 float interestRate = 3.67F;
```

We have to type **F** at the end, because otherwise compiler will take it as a double and store it in float, and this can potentially result in data loss.

**double**

Range: -1.7 x e<sup>308</sup> to 1.7 x e<sup>308</sup> Memory: 8B

**long double**

Range: -3.4 x e<sup>932</sup> to 1.7 x e<sup>4832</sup> Memory: 8B

**bool**

For storing, true and false values take **1B** of memory.

**char**

For storing single character takes **1B** of memory.

```c++
char letter = 'a';
```

_We can also use **auto** keyword to auto detect it's type, but for floats and longs we have to write their postfix, otherwise they will be stored as double or int._

**Brace Initializer**

In C++20, We have new method for initilizing variables. Normally, we can assign an int to a floating number but it will compile and result will be shown as an int. But with brace initializers, it shows an error, and if we don't supply a value, it will initialize it to 0 instead of garbage.

```c++
int number {};
cout << number;

// prints 0

int number {1.2};
cout << number;

// error

int number {1};
cout << number;

// prints 1
```

**Number Systems**

In our daily like we use decimals called **base10** system stores from 0-9.

Computers uses **base2** system called Binary that only store 0 and 1.

```c++
int number = 0b11111111; // 255
```

**base16** system called Hexadecimal stores 0-9 and A-F.

```c++
int number = 0xff; // 255
```

_There is a keyword **unsigned** which can be used to store positive values in an int, but we should not use that, because if we accidently decrement that number or change its value to negative, it will return a very huge number._

If we, store an int as a short, it will be narrowed down to a short number to fit in the memory but we can store a short in int as same value.

```c++
int number = 1000000;
short another = number;
cout << another;

// returns 16960
```

**Generate Random Numbers**

```c++
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(nullptr));
    int number = rand() % 10;

    cout << number;

    return 0;
}
```

**srand** is used to seed the rand value, if we pass the same value, it will return the same number again and again, that's why we use **time** function that returns the time in seconds from JAN 1, 1970.

**[(max_value - min_value + 1) + min_value]** is the formula to generate a random number between two numbers.

**Formatting Outputs**

The printed string on the terminal are right next to each other but what if we want to organize into columns, that's when we use one of the **stream manipulators** in C++. A steam manipulator is a function that is used to modify or manipulate the stream.

One of the function is **setw** which is used to reserve the number of character for the data that comes after and one is **left**, that is used to align everything that comes after to left, it's called a sticky manipulator because once we applied its gonna be in effect until we change it. In contrast, **setw** is not sticky, because it only applies to what comes after. Similary we have **right**, but we don't need to apply it because stream is already right aligned.

```c++
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << left;
    cout << setw(10) << "Spring" << setw(10) << "Nice" << endl
         << setw(10) << "Summer" << setw(10) << "Hot";

    return 0;
}

// Stream    Nice
// Summer    Hot
```

**Data type size and limits**

Other manipulators are fixed and setprecision. **fixed** manipulator is used to print the number using fixed point notation and **subprecision** is used to set the precision of a double. These both manipulators are sticky.

```c++
cout << fixed << setprecision(5) << 12.34567;
```

**sizeof** function is used to get size of a data type in your machine, most of the systems have same size, but it may differ in some machines.

```c++
int number = numeric_limits<int>::max();
number++;
cout << number;

// -2147483648
```

The concept above is called Overflowing, but the value for the data is too large to store in its type, it overflows and stored as a minimum value in the variable.

The other concept is called underflowing, but instead of smaller value, if the value is extremely smaller then the maximum value is stored in the variable.

**Working with booleans**

When we print a bool on terminal, then it return 0 for false, or 1 for true. To get the value true/false printed in terminal, we use **boolalpha** stream manipulator and we can use **noboolalpha** for the opposite.

**Working with Characters and Strings**

We use **char** for storing single character and **string** for storing sequence of characters.

```c++
char ch = 'a';
cout << ch; // a
cout << +ch; // 97
```

_We can also declare the char variable with their numeric representation and when printed they will print their respective character_

```c++
 string street;
    cout << "Street: ";
    getline(cin, street);

    string city;
    cout << "City: ";
    getline(cin, city);

    string state;
    cout << "State: ";
    getline(cin, state);

    string zipCode;
    cout << "Zip Code: ";
    getline(cin, zipCode);

    cout << street << endl
         << city << ", " << state << ", " << zipCode;
```

We use **getline** manipulator to get a string input with spaces between words.

**Arrays**

We use arrays, to store a collection of elements like numbers, dates, strings and so on.

```c++
int numbers[5]; // numbers array is initialized with size of 5 with value 0;

int numbers[] = {10, 20}; // numbers have length of 2

cout << numbers; // returns the address in memory as hexadecimal

cout << numbers[2]; // returns garbage

cout << numbers[1] // returns 20
```

**Type Conversion**

```c++
int x = 1;
double y = 2.2;
double z = x + y;

// 3.2, under the hood, the compiler changes the type of x to double, and this will not result in data loss, because we are casting
// a 4B data to 8B.

int x = 1;
double y = 2.2;
int z = x + y; // Warning, data loss may or may not happen

// C style casting
int z = x + (int)y;

// C++ casting
int z = x + static_cast<int>(y);

// With this, if the conversion can't be done the compiler will tell us, and is safer than C style casting.
```

## Decision Making

**Comparison Operators**

**>, >=, <, <=, ==, !=** are the comparison operators which are used to compare two values, also we can compare two different types like int and double, when compiled the low precision type will be converted to high precision type, in this case, int will be converted to double.

```c++
int x = 10;
double y = 5.0;

// Boolean expression, an expression is an statement which returns a value
bool result = x != y;

cout << boolaplha << result
```

**Logical Operators**

We use logical operators (**&&, ||, and !**) to combine two or more comparison operators.

**Order of logical operators**

> || => && => ! => ()

**if Statements**

```c++
...

int main()
{
    int sales = 16000;
    double commission;

    if (sales <= 10000)
        commission = .1;
    else if (sales > 10000 && sales <= 15000)
        commission = .15;
    else
        commission = .2;

    cout << commission;

    return 0;
}

...
```

**Conditional Operator**

```c++
int sales = 11000;
double commission;

commission = (sales > 10000) ? .1 : .05;

```

**Switch Case**

We can use switch case to only check the value, we can't compare as we do in if else statements.

```c++
...
    cout << "1 - Create Account" << endl
         << "2 - Change Password" << endl
         << "3 - Quit" << endl
         << "Choose an option: ";

    int input;

    cin >> input;

    switch (input)
    {
    case 1:
        cout << 'You selected 1';
        break;
    case 2:
        cout << 'You selected 2';
        break;
    default:
        cout << 'Goodbye!';
    }

...
```

## Loops

**for loop**

```c++
for(int i = 0; i < 5; i++)
    cout << i << endl;
```

**Range based for loops**

```c++
int numbers[] = {1, 2, 3, 4, 5};

for(number: numbers)
    cout << number;
```

_It can be also used for string._

To get the length of an array, we use **sizeof(array_name) / sizeof(type_of_array)**

**while loops**

```c++
int main()
{
    int secretNumber = 7;

    int input;

    while (input != secretNumber)
    {
        cout << "Guess: ";
        cin >> input;
    }

    return 0;
}
```

**do while loop**

Difference between **while** loop and **do while** loop is that, do while is always executed atleast once because it's condition lies after the **do** block.

```c++
do {
    ...your code
} while (condition);
```

**break and continue**

**continue** is used for continuing the loop and code after that will not be excuted. **break** keyword is used to break out of the loop.

## Functions

```c++
[type_of_return_value] [name_of_function](...params) {
    ...
}

string fullName(string firstName, string lastName) {
    return firstName + ' ' + lastName;
}
```

**Default Parameters**

We can assign a default value to parameter like we declare a variable but after that parameter every parameter need to be defined before that or defined with a default value.

**Overloading Functions**

When we want to change parameters of function, but not the name of function then we can define another function with same name and call them according to their parameters.

When using overloading functions, we need to remember a concept called **Signature**. When overloading functions we should have a unique signature.

> Signature = Name of funtion + (number and types of parameters)

If we have same function with same number and types of parameters then we will get an error.

**Passing argumets by value or reference**

In C++, we can pass variables as the arguments as like in every programming language. So when a function is called, the value is copied to that function and then function does the work. But what if we need to pass the high amount of data, the function will copy that data, that will take so much time. That's when we pass arguments by reference.

```c++
// In this case, double is only 8bits so it is very fast operation.
void price(double price) {
    price *= 2;
}

// We need to use the '&' after the type of parameter to pass its value by reference.

void greet(string& name) {
    cout << name;
}

// But, what if we accidently change the value in function of that argument that is passed by reference
// that's when we declare the variable as constant

void greet(const string& name) {
    cout << name;
}
```

**Avoid global variables as much as possible**

**Declaring Functions**

What if we want to declare a function after the main function, we will get an error but what if we want to origranize our code better, that's when we use **function declaration or function prototype**.

```c++
// Function declaration or function prototype
void greet();


void main {
    ...
}


// Function definition
void greet() {
    ...
}
```

**Organising functions in files**

For separting function into files, we have to create two files, one is header file that has function declarations and the other is the file where we define our functions. The header file have extension **h++**.

Now, there is a tiny problem, what if we include that function in many different files, then this will be imported again to prevent that we define a variable on the top of file.

```c++
#ifndef UTILS_GREET
#define UTILS_GREET

#include <string>

void greet(std::string name);

#endif
```

Now, when our code is compliled, this will be compiled only once.

**Using Namespaces**

Now, we can use function made by other people, but what if they have same function as ours and it clashes, that's when we use namespaces. A namespace is like a bucket where we put our functions inside, and with this prevent name conflicts.

To create a namespace, we use **namespace** keyword.

```c++
namespace messaging {
    ...hpp content in hpp file
    and cpp content in cpp file
}
```

We can use these namespaces as we used before for **std**.

```c++
using namespace std;
using namespace messaging;

// If the name still clashes for the methods of namespaces, we can get a single function from namespace or multiple too.

using messaging::greet;
using std::cout, std::cin;
```

## Arrays

Arrays are used to store number of elements in memory.

```c++
int first[5]; // Array of size 5 is initialized
first[0] = 10;
first[1] = 20;

// We can also use brace initialization to initialize the array.

int second[] = { 1, 2 };
```

**Determining the size of arrays**

```c++
#include <iostream>

using namespace std;

int main() {
    int numbers[] = {1, 2};

    cout << sizeof(numbers) / sizeof(int);

    cout << size(numbers); // 2

    return 0;
}
```

**Copying Arrays**

In C++, We can't copy array by assigning the first array to other. To do so, we have to loop over it, and copy each value.

```c++
...

int first[] = {1, 2, 3, 4, 5};
int second[size(first)];

for(int i = 0; i < size(first); i++)
    second[i] = first[i];

for(int number: second)
    cout << number;

...
```

**Comparing Arrays**

