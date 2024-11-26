# Table of Contents

1. [Introduction](#introduction)
   - 1.1 [What is a File?](#what-is-a-file)
   - 1.2 [Why Use Files in Programming?](#why-use-files-in-programming)
2. [Streams and File Handling in C++](#streams-and-file-handling-in-c++)
   - 2.1 [Stream](#stream)
   - 2.2 [`fstream` Library](#fstream-library)
     - 2.2.1 [Classes of `fstream`](#classes-of-fstream)
   - 2.3 [Common File Operations in C++](#common-file-operations-in-c++)
3. [Opening a File](#opening-a-file)
   - 3.1 [File Modes](#file-modes)
4. [Writing to a File](#writing-to-a-file)
   - 4.1 [Example: Writing to a File](#example-writing-to-a-file)
5. [Reading Data from a File](#reading-data-from-a-file)
   - 5.1 [Example: Reading from a File](#example-reading-from-a-file)
6. [Opening a File with `fstream`](#opening-a-file-with-fstream)
7. [Using `ios::app` Mode](#using-iosapp-mode)
8. [Writing an Array to a File](#writing-an-array-to-a-file)
9. [Conclusion](#conclusion)
10. [Exercises](#exercises)
    - 10.1 [Task 1: Write an Array of Integers to a File](#task-1-write-an-array-of-integers-to-a-file)
    - 10.2 [Task 2: Append Data to a File](#task-2-append-data-to-a-file)
    - 10.3 [Task 3: Read Data from a File Line by Line](#task-3-read-data-from-a-file-line-by-line)
    - 10.4 [Task 4: Copy the Content of One File to Another](#task-4-copy-the-content-of-one-file-to-another)
    - 10.5 [Task 5: Count the Number of Lines in a File](#task-5-count-the-number-of-lines-in-a-file)
    - 10.6 [Task 6: Find and Replace Text in a File](#task-6-find-and-replace-text-in-a-file)
    - 10.7 [Task 7: Create a Program that Writes Multiple Strings to a File](#task-7-create-a-program-that-writes-multiple-strings-to-a-file)
    - 10.8 [Task 8: Read Words from a File into an Array](#task-8-read-words-from-a-file-into-an-array)
    - 10.9 [Task 9: Write the Current Date and Time to a File](#task-9-write-the-current-date-and-time-to-a-file)
    - 10.10 [Task 10: Store Employee Information in a File](#task-10-store-employee-information-in-a-file)
    - 10.11 [Task 11: Write Numbers 1-100 to a File](#task-11-write-numbers-1-100-to-a-file)
    - 10.12 [Task 12: Calculate the Average of Numbers in a File](#task-12-calculate-the-average-of-numbers-in-a-file)
    - 10.13 [Task 13: Read the First N Lines from a File](#task-13-read-the-first-n-lines-from-a-file)
    - 10.14 [Task 14: Merge Two Files into One](#task-14-merge-two-files-into-one)
    - 10.15 [Task 15: Check if a File Exists](#task-15-check-if-a-file-exists)
    - 10.16 [Task 16: Reverse the Content of a File](#task-16-reverse-the-content-of-a-file)
    - 10.17 [Task 17: Store the Grades of Students in a File](#task-17-store-the-grades-of-students-in-a-file)
    - 10.18 [Task 18: Calculate the Total of Numbers in a File](#task-18-calculate-the-total-of-numbers-in-a-file)





# File Handling in C++

## Introduction

### What is a File?
A file is a unit of stored data identifiable by a unique name and stored in a filesystem. It can contain various types of information, such as text, images, videos, executable code, or any other form of data. For the purposes of this document, we will primarily work with text files.

### Why Use Files in Programming?
While arrays and variables can store data temporarily during the execution of a program, files help store data permanently on a storage device. File handling allows a program to read from and write to files, enabling data persistence across program executions.

## Streams and File Handling in C++

### Stream
A stream refers to the flow of data. In file handling, data can flow from the program to a file (output stream) or from a file to the program (input stream).

### `fstream` Library
The `fstream` library provides access to file handling methods in C++. It contains three primary classes:

- **`ofstream`**: Used for writing data to files (output stream).
- **`ifstream`**: Used for reading data from files (input stream).
- **`fstream`**: A combination of both `ifstream` and `ofstream`, providing both read and write capabilities.

### Common File Operations in C++

- **`open()`**: Opens or creates a file.
- **`read()`**: Reads data from a file.
- **`write()`**: Writes data to a file.
- **`close()`**: Closes a file.

## Opening a File

Before reading from or writing to a file, we need to open it. The syntax to open a file is:

```cpp
open(filename, mode);
```


## File Modes
- `ios::in`: File opened in read mode.
- `ios::out`: File opened in write mode.
- `ios::app`: File opened in append mode.

## Writing to a File
To write data to a file, we use the `ofstream` class. Here's an example:
```cpp
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    // Create and open a file named "Filename.txt"
    ofstream MyFile("Filename.txt");

    // Write data to the file
    MyFile << "Hello Filing" << endl;
    MyFile << "We are doing good" << endl;

    // Close the file
    MyFile.close();

    return 0;
}
```

**Explanation:**
- We create an ofstream object(consider it variable for now) named MyFile and open the file `Filename.txt.`
- We write two lines of text to the file.
- We close the file after writing to it.


## Reading Data from a File
To read data from a file, we use the `ifstream` class. Here's an example:
```cpp
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream ReadFile("Filename.txt", ios::in);
    string text = "";

    // Read the file line by line
    while (getline(ReadFile, text)) {
        cout << text << endl;
    }

    // Close the file
    ReadFile.close();

    return 0;
}
```

**Explanation:**
- We declare an `ifstream` object named `ReadFile` and open the file Filename.txt in read mode (ios::in).
- We read the file line by line using `getline()` and print each line to the console.
- After reading the file, we close it.

  

### Opening a file
```cpp
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    fstream File;

    // Open the file "A.txt" in read mode
    File.open("A.txt", ios::in);

    if (!File) {
        cout << "Error opening file" << endl;
    } else {
        cout << "File Found" << endl;
        File.close();
    }

    return 0;
}
```

**Explanation:**
- We declare a `fstream` object named `File`.
- We attempt to open the file `A.txt` in input mode (`ios::in`).
- If the file is not found or cannot be opened, the program will display an error message.
- If the file is opened successfully, the program will display a success message and then close the file.


## Using `ios::app` Mode
The `ios::app` mode allows us to append data to the end of a file, rather than overwriting it. This is useful when we want to add new content to an existing file. In simple, adding/writing new content at the end of file.

```cpp
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    // Open the file in append mode
    ofstream MyFile("Filename.txt", ios::app);
    
    // Write more data to the file
    MyFile << "Appending new data!" << endl;
    
    // Close the file
    MyFile.close();

    return 0;
}
```

**Explanation:**
In this case, we open the file Filename.txt in append mode and add new content at the end of the file without affecting the existing data.

## Writing an Array to a File
To write the contents of an array to a file, we can use a loop to write each element of the array on a new line in the file.
```cpp
#include<iostream>
#include<fstream>
using namespace std;

void writeArrayToFile(string arr[], int size) {
    // Open the file for writing
    ofstream MyFile("Emp_names.txt");

    // Write each element of the array to the file
    for (int i = 0; i < size; i++) {
        MyFile << arr[i] << endl;
    }

    // Close the file
    MyFile.close();
}

int main() {
    string employeeNames[] = {"Alice", "Bob", "Charlie", "David"};
    int size = sizeof(employeeNames) / sizeof(employeeNames[0]);

    // Write the employee names to the file
    writeArrayToFile(employeeNames, size);

    return 0;
}
```
**Explanation:**
The function `writeArrayToFile` takes an array of employee names and writes each name on a new line in the file `Emp_names.txt.`
In the `main()` function, we define an array of employee names and call `writeArrayToFile()` to store them in the file.





## Conclusion
File handling in C++ allows programs to interact with data stored in files, whether reading from or writing to them. The `fstream` library and its associated classes (`ofstream`, `ifstream`, and `fstream`) provide flexible and powerful tools to perform file operations such as opening, reading, writing, and closing files.

## Exercises

### Task 1: Write an Array of Integers to a File
- Write a program that takes an array of integers and writes each integer to a file called `Integers.txt`. Each integer should be written on a new line.

### Task 2: Append Data to a File
- Write a program that appends the text "Appending data to the file!" to the file `AppendFile.txt`.

### Task 3: Read Data from a File Line by Line
- Write a program that reads the contents of the file `Data.txt` line by line and displays each line on the console.

### Task 4: Copy the Content of One File to Another
- Write a program that reads the contents of the file `source.txt` and copies it to a new file called `destination.txt`.

### Task 5: Count the Number of Lines in a File
- Write a program that reads a text file called `Lines.txt` and counts the number of lines it contains.

### Task 6: Find and Replace Text in a File
- Write a program that finds a specific word in the file `TextFile.txt` and replaces it with another word.

### Task 7: Create a Program that Writes Multiple Strings to a File
- Write a program that writes five different strings to a file called `Strings.txt`, one string per line.

### Task 8: Read Words from a File into an Array
- Write a program that reads words from a file called `Words.txt` and stores them in an array of strings.

### Task 9: Write the Current Date and Time to a File
- Write a program that gets the current date and time and writes it to a file called `Timestamp.txt`.

### Task 10: Store Employee Information in a File
- Write a program that takes the name, age, and job title of employees as input and stores this information in a file called `Employees.txt`. Each employee's information should be on a new line.

### Task 11: Write Numbers 1-100 to a File
- Write a program that writes numbers from 1 to 100 to a file called `Numbers.txt`. Each number should be written on a new line.

### Task 12: Calculate the Average of Numbers in a File
- Write a program that reads a file `Numbers.txt` containing integers and calculates and prints the average of the numbers.

### Task 13: Read the First N Lines from a File
- Write a program that reads the first `N` lines from a file called `TextFile.txt`, where `N` is a user input.

### Task 14: Merge Two Files into One
- Write a program that reads the contents of two files, `file1.txt` and `file2.txt`, and merges them into a third file called `merged.txt`.

### Task 15: Check if a File Exists
- Write a program that checks whether a file called `check.txt` exists. If it does, display "File exists." Otherwise, display "File does not exist."

### Task 16: Reverse the Content of a File
- Write a program that reads the content of a file called `TextFile.txt`, reverses the content, and writes the reversed content to a new file called `Reversed.txt`. Reverse the lines.

### Task 17: Store the Grades of Students in a File
- Write a program that takes the names and grades of 5 students as input and writes this information to a file called `Grades.txt`. Each student's name and grade should be written on a new line.

### Task 18: Calculate the Total of Numbers in a File
- Write a program that reads numbers from a file called `Numbers.txt` and calculates and prints the sum of those numbers.

---

These tasks cover a variety of file handling operations, from basic reading and writing to more complex tasks.


