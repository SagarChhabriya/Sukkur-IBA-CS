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

