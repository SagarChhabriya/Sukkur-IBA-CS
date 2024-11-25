![image](https://github.com/user-attachments/assets/ff842595-ad33-405f-9cd7-57aa51cfa92b)![image](https://github.com/user-attachments/assets/617aca96-d0ca-4224-9f3b-1b517c215971)![image](https://github.com/user-attachments/assets/f7c6d652-8c13-472f-a609-969d41f69394)![image](https://github.com/user-attachments/assets/1869cd98-aedf-41cc-b4f3-f4a1476b766b)## Table of Contents

1. [Brain Storming](#1-brain-storming)
2. [What are the functions and their characteristics?](#2-what-are-the-functions-and-their-characteristics)
3. [Types of Functions](#3-types-of-functions)
   - [Pre-Defined](#pre-defined)
   - [User-Defined](#user-defined)
4. [Creating and using the functions](#4-creating-and-using-the-functions)
5. [Parameters and Arguments](#5-parameters-and-arguments)
6. [Default and Multiple Parameters](#6-default-and-multiple-parameters)
7. [Return Keyword](#7-return-keyword)
8. [Variable Scope: Global vs. Local Variable](#8-variable-scope-global-vs-local-variable)
9. [Assessment](#9-assessment)

<br><br><br><br><br>    
    



## 1. Brain Storming

> Take 2 numbers as input and show their sum. The program should ask for input 5 times during one run. Avoid using loop.

> Later, we'll solve the above by defining a function.

### Understanding the Function Concept

1. **Variable Flow**:
   - **Declaration**: Declaring a variable creates its identity and type.
   - **Initialization**: Assigning a value to the variable for the first time.
   - **Usage**: Using the variable in expressions or logic.

2. **Function Flow**:
   - **Function Declaration**: This tells the program about the function's name, return type, and parameters (if any).
   - **Function Definition**: The body of the function is defined here, which contains the code that performs the function's task.
   - **Function Call**: This is where the function is used in the program to execute the code inside the function body.


> ## Syntax
```cpp
returnType functionName(parameter1, parameter2, ..., parameter n ) {
	// function body or definition
}
```

> Return Type, Function name are mandatory
> Parameters are optional


### Let's greet the users.

```cpp
#include <iostream>
using namespace std;

// 1. Function declaration: greet() will be defined later
void greet();


int main() {
    // 3. Calling the greet function to display a greeting
    greet();
    
    return 0; // End of the main function
}

// 2. Function definition: This function will print a greeting message
void greet(){
    cout << "Hello dear!" << endl; // Display the greeting message
}
```
Here,
- the name of function is `greet`
- the return type of function is `void`
- the empty parentheses mean it doesn't have any parameters
- the function body is written inside `{ }`


### What if I want to greet 5 times?
> A function can be called multiple times.

### Let's add two numbers
```cpp
#include <iostream>
using namespace std;

// 1. Function declaration: add() will be defined later
void add();

int main() {
    // 3. Calling the add function to display the sum of two numbers
    add();
    
    return 0; // End of the main function
}

// 2. Function definition: This function adds two numbers and prints the result
void add(){
    int a = 5; // Declaring the first number
    int b = 7; // Declaring the second number
    
    // Printing the sum of the two numbers
    cout << a + b << endl; // Output: 12
}

```

Here, 
- the function name is `add`
- the return type of function is `void`
- the function has no parameters

## Function Declaration and Definition in C++

In C++, a function is defined in two parts:

1. **Declaration**: This part specifies the return type, function name, and parameters (if any).
2. **Definition**: This part contains the actual body of the function, which includes the code to be executed.

### Example of Declaration and Definition Together

```cpp
#include <iostream>  // Include necessary library for input/output

using namespace std;

// Function Definition
void myFunction() {
    // Function body (code to execute)
    cout << "I just got executed!" << endl;
}

int main() {
    // Call the function
    myFunction();
    
    return 0;
}

```

### Common error example

```cpp
#include <iostream>  // Include necessary library for input/output

using namespace std;


int main() {
    // Call the function
    myFunction();
    
    return 0;
}

// Function Definition
void myFunction() {
	
    // Function body (code to execute)
    
	cout << "I just got executed!" << endl;
}


```

- the declaration has been omitted

### Take 2 numbers input and show their sum.
```cpp
#include <iostream>
using namespace std;

// 1. Function declaration: add() will be defined later
void add(int a, int b);

int main() {
    // 3. Calling the add function to display the sum of two numbers
	int first, second;
	cout<<"Enter first number"<<endl;
	cin>>first;
	cout<<"Enter second number"<<endl;
	cin>>second;
	add(first, second);
    
    return 0; // End of the main function
}

// 2. Function definition: This function adds two numbers and prints the result
void add(int a, int b){
    
    // Printing the sum of the two numbers
    cout << a + b << endl; // Output: 12
}

```

Here,
- the function name is `add`
- the function has two parameters `a` and `b`
- the function prints the sum of `a` and `b`
- the function is called with arguments `first` and `second` via user input 

## 2. What are the functions and their characteristics?
- A function is a block of code that performs a task.
- It can take input (parameters).
- It can return an output (result).

### Characteristics of Functions:

- **Name**: Every function has a name, used to call it.
- **Parameters** (optional): Inputs the function needs to do its work.
- **Return Type**: Specifies the type of value the function returns, if any.
- **Function Body**: Contains the code that defines what the function does.
- **Return Statement**: Used to return a result from the function (if applicable).

### Function Anatomy
<p align="center"><img src="https://github.com/user-attachments/assets/311db1f4-8357-418b-9a56-ecc43118b62e" alt="image"></p>



## 3. Types of Functions

1. **According to Modularity**  
   - Pre-defined  
   - User-defined  

2. **According to Type**  
   - Void (void)  
   - Non-Void (int, float, string, double, long, etc)

3. **According to Arguments**  
   - With arguments  
   - Without arguments

| With Arguments       | Without Arguments  |
|----------------------|--------------------|
| With return type     | With return type   |
| Without return type  | Without return type|



<p align="center"><img  src="https://github.com/user-attachments/assets/c3b576de-a6f5-4b3f-a5bc-42f69d15cce7" alt="image"></p>

1. **Without Return Type and Without Arguments**
- A function that doesn't return anything and doesn't take any arguments.
- `void` means no type.

```cpp
#include <iostream>
using namespace std;

// Function without return type and without arguments
void printHello() {
    cout << "Hello, World!" << endl;  // prints a message
}

int main() {
    printHello(); // calling the function without arguments
    return 0;
}

```
Here,
- the function name is `printHello`
- the function has no return type i.e., `void`
- the function has no parameters

2. **Without Return Type and With Arguments**
- A function that doesn't return anything and takes arguments. Here, the function accepts two integers and prints their sum.
```cpp
#include <iostream>
using namespace std;

// Function without return type and with arguments
void printSum(int a, int b) {
    cout << "The sum is: " << a + b << endl;  // prints the sum of a and b
}

int main() {
    printSum(5, 3);  // calling the function with arguments 5 and 3
    return 0;
}
```
Here,
- the function name is `printSum`
- the function has no return type
- the function has two parameters `int a` and `int b` respectively
- the function has two arguments `5` and `3`. An argument is the value you give to a function when you call it.

3. **With Return Type and Without Arguments**
- A function that returns a value but doesn't take any arguments. It returns a fixed integer value.
```cpp
#include <iostream>
using namespace std;

// Function with return type and without arguments
int getNumber() {
    return 42;  // returns a fixed number
}

int main() {
    int number = getNumber();  // calling the function without arguments
    cout << "The number is: " << number << endl;  // Output: 42
    return 0;
}
```
Here,
- the function name is `getNumber`
- the function has `int` return type
- the function has no parameters


4. With Return Type and With Arguments
- A function that takes arguments and returns a value. It accepts two integers and returns their product.
```cpp
#include <iostream>
using namespace std;

// Function with return type and with arguments
int multiply(int a, int b) {
    return a * b;  // returns the product of a and b
}

int main() {
    int result = multiply(5, 3);  // calling the function with arguments 5 and 3
    cout << "The product is: " << result << endl;  // Output: 15
    return 0;
}

```
Here,
- the function name is `multiply`
- the function has `int` return type
- the function has two parameters `a` and `b`



**Summary of above Functions:**
- Without Return Type and Without Arguments: `void printHello()`
- Without Return Type and With Arguments: `void printSum(int a, int b)`
- With Return Type and Without Arguments: `int getNumber()`
- With Return Type and With Arguments: `int multiply(int a, int b)`

### Example of predefined function pow(base,power)
```cpp
#include <iostream>
#include <cmath> // Include cmath for the pow function

using namespace std;

int main() {
    cout << pow(2, 3) << endl; // This will calculate 2^3
    return 0;
}

```

## 4. Creating and using the functions
> Define a function that returns the area of rectangle.
> Define a function that returns the area of square.
> Define a function that returns the area of circle.
> Define a function that returns the max of two numbers.


### Function Prototype (or signature, declaration)
A function should be always defined before it is called. However if you want to define a function later on you can use function prototype

```cpp
void add(int a, int b);

int main(){
	// calling the function
	add(5,3);

	return 0;
}

// function definition
void add(int a, int b){
	cout<<(a+b)<<endl;
}

```


## Parameters and Arguments
1. Parameters are variables or values that are passed into a function.
2. They provide a way to send data to a function so that the function can perform a task or computation based on that data.
3. Parameters are defined in the function's signature, and the values passed as arguments when the function is called are assigned to these parameters.


### Parameters vs Arguments

- **Parameter**: Variable in the function declaration header.
- **Argument**: Value passed to the function when called.

```cpp
#include <iostream>
#include <string>
using namespace std;

void welcome(string name) {
  cout << "Hello, dear "<< name <<endl;
}

int main() {
  welcome("Sagar");
  welcome("sagar");
  welcome("SAGAR");
  return 0;
}

``` 


## 6. Default and Multiple Parameters

```cpp
#include <iostream>
using namespace std;

void displayDepartment(string dept = "CS") {
    cout << dept << endl;
}

int main() {
    displayDepartment("BBA");  // Output: BBA
    displayDepartment("AI");   // Output: AI
    displayDepartment();          // Output: CS
    displayDepartment("SE");     // Output: SE
    return 0;
}

```
> This type of parameter is referred to as an optional parameter, since it doesn't need to be provided by the caller. If no value is given, the default value is used.

## Multiple Parameters
```cpp
#include<iostream>
using namespace std;

// 1. Declare the function
void employee(int id, string name, double salary);

int main() {
    // 3. Call the function
    employee(1, "Sagar Chhabriya", 000.0);
}

// 2. Define the function
void employee(int id, string name, double salary) {
    cout << "Employee ID: " << id << endl;
    cout << "Employee Name: " << name << endl;
    cout << "Employee Salary: " << salary << endl;
}

```
When working with functions that accept multiple parameters, you must ensure that the function call provides the exact number of arguments that match the number of parameters. Additionally, the arguments must be passed in the same order as the parameters are defined in the function declaration.

## 7. Return Keyword

The `void` keyword indicates that the function does not return a value. To return a value, specify a data type (e.g., `int`, `string`) instead of `void`, and use the `return` keyword inside the function.

```cpp
#include<iostream>
using namespace std;

// Function to calculate bonus
int bonus(double salary) {
    double result = 100 + salary;  // Calculate bonus
    cout << result << endl;        // Print result
    return result;                 // Return result
}

int main() {
    bonus(1000.0);  // Call the function with a salary of 1000
}

```




## 8. Variable Scope: Global vs. Local Variable

### C++ Variable Scope
In C++, the scope of a variable refers to the region of code where the variable is accessible. Variables can be local (accessible only within a function) or global (accessible throughout the program).

- Local Scope
A local variable is declared inside a function and can only be accessed within that function.

```cpp
#include<iostream>
using namespace std;

void displayValue() {
    // Local variable inside displayValue function
    int num = 10;
    cout << "Local variable num: " << num << endl;
}

int main() {
    displayValue();  // Calling the function
    return 0;
}

```

- num is a local variable within displayValue.
- It can only be used inside the displayValue function. Trying to access it outside of that scope will result in an error.

#### Attempting to Access Local Variable Outside the Function:
```cpp
#include<iostream>
using namespace std;

void displayValue() {
    int num = 10;  // Local variable inside displayValue function
}

int main() {
    displayValue();
    
    // Trying to access num outside its scope will result in an error:
    cout << num;  // Error: 'num' was not declared in this scope
    return 0;
}

```

- Global Scope
A global variable is declared outside of any function, making it accessible from any part of the program, including inside functions.

```cpp
#include<iostream>
using namespace std;

// Global variable accessible in all functions
int globalNumber = 50;

void printGlobal() {
    cout << "Global variable: " << globalNumber << endl;
}

int main() {
    printGlobal();  // Accessing global variable inside the function
    cout << "Global variable in main: " << globalNumber << endl;
    return 0;
}

```

- Local vs Global Variable Names
When a function defines a local variable with the same name as a global variable, the local variable will shadow or hide the global variable within the function's scope. This is called variable shadowing.

```cpp
#include<iostream>
using namespace std;

// Global variable
int globalVar = 100;

void checkVariable() {
    // Local variable with the same name as the global variable
    int globalVar = 200;
    cout << "Local variable globalVar inside function: " << globalVar << endl;
}

int main() {
    checkVariable();  // Print the local variable
    cout << "Global variable globalVar in main: " << globalVar << endl;  // Print the global variable
    return 0;
}

```



## 9. Assessment 
1. What is a function in C++?
2. What is the purpose of the main() function in C++?
3. What does the void keyword mean in a function?
4. How do you declare a simple function that takes no parameters and returns nothing?
5. How do you call a function in C++?
6. What is a return type of a function? Give an example.
7. Can a function in C++ have multiple parameters? Give an example.
8. What will happen if you call a function without passing the required arguments?
9. Can you declare a function inside another function in C++? Why or why not?
10. What is the difference between a function declaration and a function definition?
11. How can you return a value from a function in C++?
12. How do you declare a function with default arguments?
13. How do you pass an array to a function in C++?
14. How can you return multiple values from a function in C++?
15. What is function overloading in C++? Can you give an example?
16. How many functions we can define?



## 10. Array as argument to function

### Example 1 

```cpp
#include<iostream>
using namespace std;

void printArray(int arr[5]){
	for(int i=0; i<5; i++){
		cout<<arr[i]<<endl;
	}

}

int main(){

	int arr[5]={1,2,3,4,5};
	printArray(arr);
	cout<<sumArray(arr)<<endl;

}

```

### Example 2
```cpp
#include<iostream>
using namespace std;

int sumArray(int arr[5]){
	int sum = 0;
	for(int i=0; i<5; i++){
		sum = sum + arr[i];
	}	
	
	return sum;
}


int main(){

	int arr[5]={1,2,3,4,5};
	printArray(arr);
	cout<<sumArray(arr)<<endl;

}

```


> Write a C++ code to create a function which can find count of even numbers from an array of 10 elements
