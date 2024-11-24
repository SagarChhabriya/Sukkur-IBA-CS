# C++ File Handling

In C++, the `fstream` library provides functionality for working with files. To use it, you need to include both the standard `<iostream>` and `<fstream>` header files.

## Header Files

```cpp
#include <iostream>
#include <fstream>
```

# C++ File Handling with `fstream` Library

In C++, the `fstream` library provides three main classes to handle file operations:

| Class      | Description                           |
|------------|---------------------------------------|
| `ofstream` | Creates and writes to files           |
| `ifstream` | Reads from files                     |
| `fstream`  | Combines `ofstream` and `ifstream` for creating, reading, and writing files |

## Creating and Writing to a File

To create a file and write to it, you can use either the `ofstream` or `fstream` class. Here’s an example using the `ofstream` class:

### Example:
- In this example, we create and open a file for writing, then write some content to it and close the file after the operation.

```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Create and open a file for writing
  ofstream outputFile("output.txt");

  // Write text to the file
  outputFile << "File handling in C++ is quite interesting!";

  // Close the file after writing
  outputFile.close();
}

```

# File Handling in C++ - Best Practices

## Why Close the File?

Closing a file after performing file operations is considered good practice for several important reasons:

1. **Proper Release of System Resources:**
   - When a file is opened, the operating system allocates resources for it. Closing the file ensures that these resources are released, preventing unnecessary consumption of system memory or file handles.
   
2. **Prevent Memory Leaks:**
   - Failing to close a file could lead to memory leaks or other system-level issues, as file buffers may not be flushed properly, and file handles may not be released.
   
3. **Ensure Data Integrity:**
   - Closing the file ensures that all buffered data is written to the file properly. If a file is not closed, there is a risk that data may not be saved as expected.



## Reading from a File

To read from a file in C++, you can use the `ifstream` or `fstream` class. The `ifstream` class is specifically designed for reading, while `fstream` can be used for both reading and writing to files.

### Key Steps to Read from a File:
1. **Open the File:**
   - Use `ifstream` (or `fstream`) with the filename to open the file in read mode.

2. **Read Content:**
   - The `getline()` function is commonly used to read the file line by line. This function reads each line from the file until a newline character is encountered.

3. **Close the File:**
   - After reading, close the file to release resources and ensure proper data handling.

### Example Workflow:
1. Open the file with `ifstream` or `fstream`.
2. Use `getline()` or other input functions to read the content.
3. Process the content as needed.
4. Close the file once the operations are completed.

This process ensures that you are able to safely and efficiently read from files while following best practices for resource management.




```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // String to hold the content read from the file
  string line;

  // Open the file for reading
  ifstream inputFile("output.txt");

  // Read the file line by line using a while loop
  while (getline(inputFile, line)) {
    // Display the content of the file
    cout << line << endl;
  }

  // Close the file after reading
  inputFile.close();
}

```
