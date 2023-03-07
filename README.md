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

**Passing arguments by value or reference**

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

We can't compare arrays by their variables, because arrays are compared on basis of their memory address.So, we have to 
iterate over the array and then compare its values.


```c++
int first[] = {1, 2, 3, 4, 5};
int second[] = {1, 2, 3, 4, 5};

bool areEqual = true;

for(int i = 0; i < size(first); i++) {
    if(first[i] != second[i]) {
        areEqual = false;
        break;
    }
}

cout << boolalpha << areEqual;
```

**Passing Arrays to Functions**

When we pass an array to a function, the array type is converted to a pointer. In the following example the int array
will be converted to an int pointer "int*", so, we can't use range based for loop on that instead we have to use a 
traditional for loop. Also, as int array is converted to int* we always have to pass the size of array to function too.


```c++
#include <iostream>

using namespace std;

void printNumbers(int numbers[], int size) {
    for(int i = 0; i < size; i++)
        cout << numbers[i] << endl;
}

void main() {
    int numbers[] = {1, 2, 3, 4, 5};
    printNumbers(numbers, size(numbers));
    
    return 0;
}
```

**Understand size_t**

**size_t** is one of the function provided in iostream, that is type of return values of size and sizeof.
size_t is equivalent to unsigned long long type for 64 bit systems, and unsigned int for 32 bit systems.

So, basically, this is a data type for representing the sizes and this type is guaranteed to be large enough to contain
the size of largest type that system can handle.

```c++
cout << numeric_limits<size_t>::min() << endl; // 0
cout << numeric_limits<size_t>::max() << endl; // 18446744073709551615
```

**Unpacking Arrays**

In C++, it is called **structured binding**.
In JavaScript, it is called **destructuring**.
In python it is called **unpacking**.

```c++
int values[3] = {1, 2, 3};

auto [x, y, z] = values;
```

**Searching Arrays**

Linear Search Algorithms

```c++
int linearSearch(int target, int numbers[], size_t size) {
    for(int i = 0; i < size; i++) {
        if(target == numbers[i]) return i;
    }

    return -1;
}
```

**Sorting Arrays using Bubble Sort**

```c++
void swap(int numbers[], int a, int b) {
    int temp = numbers[a];
    numbers[a] = numbers[b];
    numbers[b] = temp;
}

void bubbleSort(int numbers[], int size) {
    for(int pass = 0; pass < size; pass++) {
        for (int i = 1; i < size; i++)
            if (numbers[i] < numbers[i - 1])
                swap(numbers, i, i - 1);
    }
}
```

**Multi Dimensional Arrays**

```c++
const int rows = 2;
const int columns = 3;

void printMatrix(int numbers[rows][columns]) {
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < columns; j++)
            cout << numbers[i][j] << endl;
}

int main() {
    int numbers[rows][columns] = {
            {11, 12, 13},
            {21, 22, 23}
    };

    printMatrix(numbers);

    return 0;
}
```

## Pointers

A pointer is a special variable that hold the address of another variable in memory.

For example, we have a variable which holds the value number 10. As you know, a variable is just a label for a memory
address. Now we can declare other variable called ptr that holds the address of number.

There are few reasons for using pointers.

> Efficiently passing large data

> Dynamic memory allocation

> Enabling Polymorphism

To get the address of an variable we prefix the variable with **&** and this is called **address-of operator**.

```c++
int number = 10;
cout << &number; // 0x16fa2f448
```

To initialize a pointer we postfix a variable by *.

```c++
int number = 10;

int* ptr = &number;
```

If we don't initialize the pointer then like other uninitialized variables, it's gonna hold **garbage**.
The problem with this uninitialized pointer is that we might access the part of memory we are not supposed to and in that
case the operating system gonna terminate our program and say **memory access violation**.

If we don't know,for what variable it's gonna be initialized, we can initialize it to null pointer with keyword **nullptr**.
A **nullptr** is a pointer that doesn't point to anything. In old C++, it was initialized with **NULL** or **0** but now 
in modern C++ we have **nullptr**. 

With **nullptr**, we can also check to see if ptr is initialized using if block.

```c++
if(ptr != nullptr) {
    ...
}
```

We have another **Indirection or de-referencing operator**, with that we can access the data for the memory location that
pointer is holding.

```c++
int number = 10;

// The & is the address-of operator
int* ptr = &number;

cout << *ptr; // 10

// Indirection or de-referencing operator
*ptr = 20;

cout << number; // 20
```

Note that, pointers can also be initialized like **int \*ptr = &number;**, but we should not follow this approach, because
it can confusing with **Indirection or de-referencing operator**.

**Constant Pointers**

There are three scenarios, when using constant pointers.

1. Data is constant.
2. Pointer is constant.
3. Data and Pointer both are constant.

```c++
// Data is constant
// We have to set the same type for the pointer, and with that pointer can't change value of x using InDirection operator.
// But we can still change the value of ptr to store a different address.
const int x = 10;
const int* ptr = &x;

// Pointer is constant
// We have to write const after the asterisk to declare a constant pointer.
int x = 10;
int* const ptr = &x;

// When both are constant
const int x = 10;
const int* const ptr = &x;

// Now, neither ptr can be changed nor the variable it is holding the address of. 
```

**Passing pointers to functions**

Previously, we passed the props in a function as arguments using reference operator which is modern way, but we can also
pass data to function using pointers.


```c++
void increasePrice(double& price) {...} // Reference operator

// Passing props with pointers

void increasePrice(double* price) {
    *price *= 1.2;
}

void main() {
    double price = 100;
    increasePrice(&price);
    
    cout << price; // 120
    
    return 0;
}
```


**Relationship between pointers and arrays**

Now, as we know that when we print any array on console, we see its memory address, which is actually a pointer.

```c++
int numbers[] = {10, 20, 30};
int* ptr = numbers;

cout << *ptr; // 10, the address of array holds the first value of the array

// With that we can also access other elements

cout << *ptr[1]; // 20
```

Also, when we pass arrays to functions, their address is passed that's why we can't iterate or use size function over
them. That's why we always pass the size as arguments to the function because we can access the values using a pointer
as shown in above example.

**Pointer Arithmetic**

For example we have an int array, and then we create a pointer variable. With that pointer, we can add or subtract intergers
with it.

If we increment the pointer by 1, it will be incremented by the size of its data type, for example if the int is stored
at 100 in memory. Then in memory it will store the first element from 100-103 as int takes 4 bytes of memory.

```c++
int numbers[] = {1, 2, 3, 4};
int* ptr = numbers;

cout << ptr; // 1

ptr++;

cout << ptr; // 2
```

Similarly, we can use subtract, but we can't use any other operators.

**Comparing Pointers**

We can compare pointers address, by using == or != operators also > , < in arrays.

```c++
// Print numbers from last element to first, by using pointers.

int main() {
    int numbers[] = {10, 20, 30};

    int* ptr = &numbers[size(numbers) - 1];

    while(ptr >= numbers) {
        cout << *ptr << endl;
        ptr--;
    }

    return 0;
}
```

**Dynamic Memory Allocation**

Now, we if we create an array, we have to supply its limit, but what if user passes more than that, or so less that our
memory is wasted that's when we use pointers for dynamic memory allocation. Now, for that first we create an array with
space of 10. Then during our program execution or at runtime, if we need more space, we can allocate it on demand, this 
is dynamic memory allocation. Now to allocate memory dynamically, we use different syntax.

```c++
// Stored in memory called Stack
int numbers[] = {1, 2, 3};

// Stored in memory called Heap (Free Store)
int* numbers = new int[10];
```

The good thing about variables stored in **stack memory** is that, when a function finishes execution, the memory is automatically
released when out of scope, and we can use that space again for another functions.

Now, In contrast, when we declare a variable on the heap using new operator, we are responsible for clean up and that
means if we don't do our job properly the memory allocated for the variables will never get released and our program is
gonna end up consuming more and more memory and eventually its gonna crash. We say our program is having a **memory leak**
means constantly consuming more and more memory.

So, once we are finished with this variable we should always deallocate memory using the **delete operator**.

```c++
int* numbers = new int[10];
int* number = new int;

delete number;
delete[] numbers;

// Not mandatory, It's a good practice to always reset our variables

numbers = nullptr;
number = nullptr;
```

**Dynamically Resizing an Array** 

```c++
#include <iostream>

using namespace std;


int main() {
    int capacity = 5;
    int* numbers = new int[capacity];
    int entries = 0;


    while(true) {
        cout << "Number: ";
        cin >> numbers[entries];

        if(cin.fail()) break;
        entries++;

        if(entries == capacity) {
            // Create a temp array twice the size
            capacity *= 2;
            int* temp = new int[capacity];

            // Copy all the elements to new array
            for(int i = 0; i < entries; i++)
                temp[i] = numbers[i];

            // Have "numbers" pointer pointing to the new array
            delete[] numbers;
            numbers = temp;
        }
    }

    for(int i = 0; i < entries; i++)
        cout << numbers[i] << endl;


    delete[] numbers;

    return 0;
}
```

But, we have to never implement this our own, because it is already built in **C++ standard library** with class called
**Vector**.

**Smart Pointers**

Now, in real world, we have 100's or 1000's of functions where we use pointer variables to store in a heap but what if we
forget to free up the memory allocated to them, this will eventually result in memory means constantly increase in memory.
It seems easy to delete the pointer's memory, but in real world, with many function we can get confused where and when 
we have to delete a pointer. That's when we use Smart Pointers.

There are two types of smart pointers which are Unique and Shared pointers.

**Working with Unique Pointers**

A unique pointer is kind of pointer that holds the piece of memory it points to, so we can't have another unique pointer
pointing to the same variable for that we use shared pointers.

```c++
#include <iostream>
#include <memory>

using namespace std;


int main() {
    unique_ptr<int> x(new int);
    auto y = make_unique<int>();
    auto numbers = make_unique<int[]>(5);

    return 0;
}
```

**unique_ptr** is a generic class, so we pass the type in angle brackets and it creates an instance **x** pointing to the
pointer created using **new int**.

Now, this class have several methods so it automatically deletes the allocated memory when execution is finished.

We can also simplify it by using a generic function called **make_unique** and set the type auto to prevent the code from
being verbose.

_We can change the value of variables as same like other pointers, but we can't perform arithmetic operations on that._

**Using Shared Pointers**

Most of the times **unique pointers** are used, but we can use **shared pointers** where two pointers point to same 
memory location.

```c++
auto x = make_shared<int>();
*x = 10;

shared_ptr<int> y(x);

cout << y; // 10
```





