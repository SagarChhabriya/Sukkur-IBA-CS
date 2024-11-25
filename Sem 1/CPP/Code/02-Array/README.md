# C++ Arrays 

Arrays in C++ are used to store multiple values in a single variable, instead of declaring separate variables for each value. This helps manage data more efficiently when dealing with large sets of similar values.

## Declaring an Array

To declare an array, you need to define the `type` of elements it will hold, give it a `name`, and specify how many elements it should store inside square brackets `[]`.

**Syntax**
> _dataType_ **name**[size];


Example:

```cpp
string fruits[5];
```

This creates an array called `fruits` that can hold five string values.

## Initializing an Array
You can initialize an array at the time of declaration by providing a list of values inside curly braces `{}`.

Example:
```cpp
string fruits[5] = {"Apple", "Banana", "Cherry", "Date", "Elderberry"};
```

This array now contains five string values: `"Apple"`, `"Banana"`, `"Cherry"`, `"Date"`, and `"Elderberry"`.

For numeric arrays:
```cpp
int numbers[4] = {10, 20, 30, 40};
```

This creates an array `numbers` with four integers: 10, 20, 30, and 40.

## Accessing Array Elements
Array elements are accessed using their index, which starts from 0. For example, to access the first element of the `fruits` array:

```cpp
cout << fruits[0];  // Outputs Apple
```

> Note: In C++, array indices start at 0. So, fruits[0] refers to the first element, fruits[1] to the second element, and so on.

## Modifying Array Elements
You can modify an array element by referring to its index and assigning a new value to it.

Example:

```cpp
fruits[0] = "Grapes";  // Changes the first element to "Grapes"
cout << fruits[0];  // Now outputs Grapes
```

This updates the first element in the array `fruits` from `"Apple"` to `"Grapes"`.

---

# C++ Arrays and Loops

In C++, arrays allow you to store multiple values in a single variable. You can loop through the elements of an array using either the traditional `for` loop or the modern `for-each` loop introduced in C++11.

## Loop Through an Array Using a `for` Loop

A `for` loop is commonly used to iterate over the elements of an array. Below is an example showing how to loop through an array using a `for` loop:

### Example 1: Loop through an array of city names

```cpp
// Create an array of city names
string cities[4] = {"New York", "Los Angeles", "Chicago", "Miami"};

// Loop through city names
for (int i = 0; i < 4; i++) {
  cout << cities[i] << "\n";
}
```

This example prints out all the elements of the `cities` array.

### Example 2: Display each city's index along with its name
```cpp
string cities[4] = {"New York", "Los Angeles", "Chicago", "Miami"};

for (int i = 0; i < 4; i++) {
  cout << i << " = " << cities[i] << "\n";
}
```

This example will display the index of each city in the array along with the city name.

### Example 3: Loop through an array of temperatures (in Celsius)

```cpp
float temperatures[4] = {22.5, 19.3, 28.4, 15.7};

for (int i = 0; i < 4; i++) {
  cout << temperatures[i] << " °C\n";
}
```

This example will output all the elements in the `temperatures` array, each followed by the Celsius symbol.

## The for-each Loop (C++11 and Later)
The `for-each` loop, introduced in C++11, provides a more convenient way to loop through the elements in an array. It is best suited for iterating over collections like arrays, vectors, and lists.

**Syntax**
```cpp
for (type variableName : arrayName) {
  // code block to be executed
}
```

### Example 4: Loop through an array of prices using the `for-each` loop
```cpp
// Create an array of prices
float prices[3] = {199.99, 299.49, 149.75};

// Loop through prices
for (float price : prices) {
  cout << "$" << price << "\n";
}
```

This example prints all prices in the `prices` array, prefixed by the dollar sign.

### Example 5: Loop through an array of student names using the `for-each` loop

```cpp
// Create an array of student names
string students[3] = {"Alice", "Bob", "Charlie"};

// Loop through student names
for (string student : students) {
  cout << student << "\n";
}

```
This example will output all elements in the `students` array using the `for-each` loop.

### Example 6: Take Inputs from User and Store Them in an Array
```cpp
#include <iostream>
using namespace std;

int main() {

  int numbers[5];

  cout << "Enter 5 numbers: " << endl;

  //  store input from user to array
  for (int i = 0; i < 5; ++i) {
    cin >> numbers[i];
  }

  cout << "The numbers are: ";

  //  print array elements
  for (int n = 0; n < 5; ++n) {
    cout << numbers[n] << "  ";
  }

  return 0;
}
```

### Example 7: Passing One-dimensional Array to a Function
```cpp
// C++ Program to display marks of 5 students

#include <iostream>
using namespace std;

const int ARRAY_SIZE = 5;

// declare function to display marks
// take a 1d array as parameter
void display(int m[]) {
    cout << "Displaying marks: " << endl;

    // display array elements    
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        cout << "Student " << i + 1 << ": " << m[i] << endl;
    }
}

int main() {

    // declare and initialize an array
    int marks[ARRAY_SIZE] = {88, 76, 90, 61, 69};
    
    // call display function
    // pass array as argument
    display(marks);

    return 0;
}
```
---
# C++ Omit Array Size and Vectors

## Omit Array Size

In C++, you don't always have to specify the size of the array. The compiler can infer the size of the array based on the number of elements you provide.

### Example: Implicit Array Size

```cpp
// Create an array without specifying the size
string fruits[] = {"Apple", "Banana", "Cherry"}; // Three elements in the array
```
This is equivalent to:

```cpp
string fruits[3] = {"Apple", "Banana", "Cherry"}; // Also three elements
```

> However, it is usually considered a better practice to explicitly specify the size for clarity and to avoid errors later in your program.


## Omit Elements on Declaration
You can also declare an array without assigning values initially, and then assign values later.

### Example: Assigning Values After Declaration

```cpp
string fruits[5];  // Declare an array of 5 elements
fruits[0] = "Apple";
fruits[1] = "Banana";
fruits[2] = "Cherry";
fruits[3] = "Date";
fruits[4] = "Elderberry";
```

> Note: The size of the array must be declared when using this approach. You cannot omit the size like in the first example.

### Example: Error when size is not specified
```cpp
string fruits[];  // Array size is not specified
fruits[0] = "Apple";  // Error: Array size missing in 'fruits'
```

## Fixed Size (Arrays) vs. Dynamic Size (Vectors)
In C++, the term fixed size refers to arrays, which cannot change their size once they are defined. You cannot add or remove elements after the array is created.

### Fixed Size Array Example

```cpp
// A fixed-size array with 3 elements
string fruits[3] = {"Apple", "Banana", "Cherry"};

// Trying to add another element (a fourth element) will result in an error
fruits[3] = "Date";  // Error: Out of bounds for array size
```


## Vectors - Dynamic Size
In contrast, vectors in C++ are dynamic arrays. Their size can grow or shrink as needed during program execution.

### Using Vectors for Dynamic Arrays
Vectors are part of the `<vector>` library and provide various functions to add, remove, and modify elements in a dynamic array.

```cpp
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main() {
    // Create a vector with initial elements
    vector<string> fruits = {"Apple", "Banana", "Cherry"};
    
    // Dynamically adding another element to the vector
    fruits.push_back("Date");  // Adds "Date" to the vector

    // Output all elements in the vector
      // Using a traditional for loop with indices
    for (int i = 0; i < fruits.size(); i++) {
        cout << fruits[i] << "\n";
    }

    return 0;
}

```
#### Explanation:
The `push_back()` function is used to add new elements to the end of the vector. Vectors grow dynamically as needed, which makes them more flexible than fixed-size arrays.


---
## C++ Array Size
In C++, to determine the size of an array, you can use the sizeof() operator.

### Example

```cpp
int temperatures[4] = {32, 45, 28, 30};
cout << sizeof(temperatures);
```

**Output**
```cpp
16
```

### Explanation:
The `sizeof()` function returns the total size of the array in bytes. Since each `int` typically occupies 4 bytes, and there are 4 elements in the array, the total size is `4 x 4 = 16` bytes.

To calculate the number of elements in the array, divide the total size by the size of one element:

### Example
```cpp
int temperatures[4] = {32, 45, 28, 30};
int arrayLength = sizeof(temperatures) / sizeof(temperatures[0]);
cout << arrayLength;
```

**Output**
```cpp
4
```

### Loop Through an Array with sizeof()
Previously, we used a fixed array size in loops, like this:

```cpp
int temperatures[4] = {32, 45, 28, 30};
for (int i = 0; i < 4; i++) {
  cout << temperatures[i] << "\n";
}
```

However, hardcoding the array size (e.g., `4`) is not ideal, as it limits the flexibility of the loop. Instead, we can use the `sizeof()` approach to make loops that work with arrays of any size:

### Example
```cpp
int temperatures[4] = {32, 45, 28, 30};
for (int i = 0; i < sizeof(temperatures) / sizeof(temperatures[0]); i++) {
  cout << temperatures[i] << "\n";
}
```

This will dynamically adjust the loop to the size of the array, making it more maintainable and reusable.<br>

In C++11 (2011) and later, you can also use the "for-each" loop, which is even simpler and cleaner:

### Example
```cpp
int temperatures[4] = {32, 45, 28, 30};
for (int temp : temperatures) {
  cout << temp << "\n";
}
```

## Real-Life Example : Finding the Highest Score
In this example, we will create a program that finds the highest score among a group of students.

### Example
```cpp

// An array storing the scores of students
int scores[6] = {88, 91, 76, 85, 99, 94};

int i;

// Get the length of the array
int length = sizeof(scores) / sizeof(scores[0]);

// Create a variable and assign the first array element (first score) to it
int highestScore = scores[0];

// Loop through the elements of the scores array to find the highest score
for (int score : scores) {
  if (highestScore < score) {
    highestScore = score;
  }
}

// Print the highest score
cout << "The highest score is: " << highestScore << "\n";
```


---
## C++ Multi-Dimensional Arrays
A multi-dimensional array is essentially an array of arrays, where each element of the main array can itself be another array.

To declare a multi-dimensional array, you define the variable type, specify the name of the array followed by square brackets. The first set of square brackets indicates how many elements the main array has, while the second set indicates the size of the sub-arrays.

### Example

```cpp
// A 2x3 matrix
int matrix[2][3];
```

In the example above, `matrix` is a 2D array with 2 rows and 3 columns. You can initialize a multi-dimensional array in a similar manner as a single-dimensional array, except that each element in the main array is an array itself.

```cpp
// A 2x3 array with values
int matrix[2][3] = {
  {1, 2, 3},
  {4, 5, 6}
};
```

In this case, `matrix` has 2 rows and 3 columns, where each row contains 3 integers.

## Accessing Elements in a Multi-Dimensional Array
To access an element of a multi-dimensional array, you need to specify the index number in each dimension.

### Example

```cpp
int matrix[2][3] = {
  {1, 2, 3},
  {4, 5, 6}
};

cout << matrix[0][2];  // Outputs 3
```

In the above example, `matrix[0][2]` accesses the element in the first row and the third column, which is `3`.

### Changing Elements in a Multi-Dimensional Array
To modify an element in a multi-dimensional array, you simply refer to the indices in each dimension and assign a new value.

### Example
```cpp
int matrix[2][3] = {
  {1, 2, 3},
  {4, 5, 6}
};

matrix[0][0] = 7;

cout << matrix[0][0];  // Outputs 7
```

Here, the element at `matrix[0][0]` was originally `1`, but it was changed to `7`.

### Looping Through a Multi-Dimensional Array
To loop through a multi-dimensional array, you need one loop for each dimension.

### Example
```cpp
int matrix[2][3] = {
  {1, 2, 3},
  {4, 5, 6}
};

for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 3; j++) {
    cout << matrix[i][j] << "\n";
  }
}
```

This will output all the elements in the 2x3 matrix.

### Example with Three Dimensions
Here’s how to loop through a 3-dimensional array:

```cpp
int cube[2][2][2] = {
  {
    {1, 2},
    {3, 4}
  },
  {
    {5, 6},
    {7, 8}
  }
};

for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 2; j++) {
    for (int k = 0; k < 2; k++) {
      cout << cube[i][j][k] << "\n";
    }
  }
}
```


### Practical Use of Multi-Dimensional Arrays: A Tic-Tac-Toe Game
A great real-world example of using multi-dimensional arrays is representing a Tic-Tac-Toe game board. A 3x3 grid is perfect for this purpose:

### Example
```cpp
// A 3x3 Tic-Tac-Toe game board
char board[3][3] = {
  {'X', 'O', 'X'},
  {'O', 'X', 'O'},
  {'X', 'O', 'X'}
};

// Display the Tic-Tac-Toe board
for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 3; j++) {
    cout << board[i][j] << " ";
  }
  cout << "\n";
}
```

