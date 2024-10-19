# OOP Concepts in Java

## Object-Oriented Programming Principles
OOP is based on four main principles, commonly referred to as APIE:

1. **Abstraction**: Aims to hide complexity from users and show them only relevant information.
2. **Encapsulation**: Helps with data security, protecting the data stored in a class from system-wide access.
3. **Inheritance**: Allows the creation of a child class that inherits fields and methods from a parent class. The child can override methods and attributes or add new functionality.
4. **Polymorphism**: Refers to the ability to perform a certain action in different ways, which can be achieved through method overloading and method overriding.

## Key Concepts

1. **Class**: A user-defined type; any concept in Java must be encapsulated within a class.
2. **Members**: The data (variables) defined within a class are called instance variables, and the code is contained within methods. Collectively, they are the members of the class.
3. **Instance**: Variables and methods inside a class are known as the members of that class. Each instance of the class is an object, containing its own unique copy of these variables.
4. **Public Class**: A Java program has one public class, which contains the main method.
5. **Template vs Object**: A class declaration creates a template but does not create an actual object.
6. **Object Declaration and Allocation**: 
   ```java
   Box mybox = new Box(); // Creates a Box object named mybox
   ```
7. Reference vs Primitive: Reference types start with a capital letter, while primitive types are in lowercase.
8. Initialization of Instance: An instance can be initialized and printed in the method.
    ```java
    System.out.println("The name Object " + (obj.name = "Namastey"));
    ```
9. Class Type: Creating a class defines a new data type, which can be used to declare objects.
10. Two Steps of Object Creation:
    - Class obj; (Declares reference)
    - obj = new Class(); (Allocates an object)
11. Memory Allocation: The new keyword may fail to allocate memory if insufficient memory is available, causing a runtime exception.
12. Insufficient Memory: While generally not a concern, consider memory availability in real-world applications.
13. Logical Framework: A class creates a logical framework that defines the relationship between its members.
14. Content vs Directory: Content refers to the text saved in a file, while a directory is a saved structure that can be refreshed.
15. Heap vs Stack: Heap memory is used by all parts of the application, while stack memory is specific to a single thread of execution. Objects are stored in heap memory, with stack memory holding references to them.
16. Overriding / Runtime Polymorphism: Objects can be created at runtime, allowing for dynamic behavior.
17. 
