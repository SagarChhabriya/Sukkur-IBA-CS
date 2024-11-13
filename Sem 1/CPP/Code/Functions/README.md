# Agenda

1. Brain Storming
2. What are the functions and their characteristics?
3. Types of Functions
   - Pre-Defined
   - User-Defined
4. Creating and using the functions
5. Parameters and Arguments
6. Default and Multiple Parameters
7. Return Keyword
8. Function Overloading
9. Variable Scope: Global vs. Local Variable

**MISC:** Passing Arrays, Exercises: Input from user inside function + main
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


### Take 2 numbers input and show their sum.
```cpp
#include <iostream>
using namespace std;

// 1. Function declaration: add() will be defined later
void add(int a, int b);

int main() {
    // 3. Calling the add function to display the sum of two numbers
    add(5,7);
    
    return 0; // End of the main function
}

// 2. Function definition: This function adds two numbers and prints the result
void add(int a, int b){
    
    // Printing the sum of the two numbers
    cout << a + b << endl; // Output: 12
}

```



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
> Create a function that calculates the area of rectangle.


## 5. Parameter and Argument

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
