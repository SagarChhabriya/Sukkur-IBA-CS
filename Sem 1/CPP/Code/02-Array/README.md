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
