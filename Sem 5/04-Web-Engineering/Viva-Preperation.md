# Introduction

- **Visual Programming**: A programming paradigm where users create software by manipulating graphical elements instead of writing code.
- **Event-Driven Programming**: A programming model where the flow of execution is determined by events such as user actions or messages from other programs.
- **Introduction to Visual Programming**: Visual programming enables users to interact with software through graphical interfaces, simplifying the coding process.
- **Different Visual Programming Languages**: Visual languages like Scratch, LabVIEW, and others allow users to build applications using visual elements instead of textual code.
- **IDEs Used in Development**: Integrated Development Environments (IDEs) such as Visual Studio and other visual-based tools are used for developing visual programs, offering features like drag-and-drop components and code generation.
- **.NET Framework**: A software development framework developed by Microsoft that provides a controlled environment for building and running applications.
- **.NET Framework Architecture**: A multi-layered architecture consisting of the Common Language Runtime (CLR), the .NET class library, and various application models for building desktop, web, and mobile apps.
- **CLR (Common Language Runtime)**: The execution engine in the .NET framework that manages code execution, including features like garbage collection, security, exception handling, and memory management.


# C# Language Specification

- **Language Features**: C# is a modern, object-oriented, type-safe programming language designed for developing a wide range of applications, including web, mobile, and desktop.
  
- **Language Basic Constructs/Core C#**: Core constructs in C# include variables, operators, methods, classes, interfaces, inheritance, and exception handling that form the building blocks of C# programming.

- **Comments**: In C#, comments are used for documentation and are ignored by the compiler. There are two types:
  - Single-line comment: `// Comment`
  - Multi-line comment: `/* Comment */`
  - XML comment: `/// <summary>Documentation</summary>`

# C# Language Specification

- **Variables**: Variables in C# are used to store data. They must be declared with a data type and can be assigned values.  
  **Example**:  
  ```csharp
  int age = 30;
  string name = "John";
  ```

- **Scalar Variables**: Scalar variables store a single value of a specific data type, such as `int`, `float`, `char`, or `bool`.  
  **Example**:  
  ```csharp
  int count = 5;
  float temperature = 36.6f;
  char grade = 'A';
  bool isActive = true;
  ```

- **Composite Variables**: Composite variables can store multiple values, like arrays, lists, or objects. These types are more complex than scalar types.  
  **Example**:  
  ```csharp
  int[] numbers = { 1, 2, 3, 4 };
  List<string> names = new List<string> { "Alice", "Bob", "Charlie" };
  ```

- **Nullable Type Variables**: Nullable types in C# allow variables to store a value of a given type or `null`. They are defined using `?`, e.g., `int?` can hold `null` or an integer value.  
  **Example**:  
  ```csharp
  int? age = null;
  bool? isVerified = null;
  ```

- **Data Types in C#**: C# has various data types, categorized as follows:
  - **Value Types**: These hold data directly, including `int`, `float`, `double`, `bool`, `char`, etc.  
    **Example**:  
    ```csharp
    int age = 25;
    double price = 19.99;
    bool isAdult = true;
    ```
  - **Reference Types**: These hold references to data rather than the data itself, such as `string`, `array`, and `class`.  
    **Example**:  
    ```csharp
    string greeting = "Hello, World!";
    int[] numbers = { 1, 2, 3 };
    ```

- **Value Types and Reference Types**:
  - **Value Types**: Data is stored directly in the variable. They are typically stored on the stack (e.g., `int`, `float`).  
    **Example**:  
    ```csharp
    int number = 10;
    float height = 5.6f;
    ```
  - **Reference Types**: Data is stored on the heap, and the variable holds a reference (e.g., `class`, `array`, `string`).  
    **Example**:  
    ```csharp
    string name = "Alice";
    int[] numbers = { 1, 2, 3 };
    ```

- **Operators**:  
  - **Primary Operators**: Includes basic operators like `+`, `-`, `*`, `/`, `=`, etc.  
    **Example**:  
    ```csharp
    int sum = 5 + 3; // 8
    int difference = 10 - 3; // 7
    ```

  - **Unary Operators**: Perform operations on a single operand, such as `++`, `--`, `!`, and `~`.  
    **Example**:  
    ```csharp
    int x = 5;
    x++; // Increment, x becomes 6
    bool isTrue = false;
    isTrue = !isTrue; // Negation, isTrue becomes true
    ```

  - **Shift Operators**: Shift bits to the left or right, such as `<<` (left shift) and `>>` (right shift).  
    **Example**:  
    ```csharp
    int x = 8; // 00001000 in binary
    int leftShift = x << 2; // 00100000, result = 32
    int rightShift = x >> 2; // 00000010, result = 2
    ```

  - **Arithmetic Operators**: Operators used for mathematical calculations, including `+`, `-`, `*`, `/`, and `%`.  
    **Example**:  
    ```csharp
    int sum = 10 + 5;  // 15
    int product = 4 * 3; // 12
    int remainder = 10 % 3; // 1
    ```

  - **Short-Circuit Logical Operators**: Logical operators that evaluate expressions lazily (only evaluating the second operand if necessary), like `&&` (AND) and `||` (OR).  
    **Example**:  
    ```csharp
    bool isAdult = true;
    bool hasPermission = false;
    if (isAdult && hasPermission) {
        // This won't be executed because `hasPermission` is false
    }
    ```

  - **Relational Operators**: Used to compare values, including `==`, `!=`, `<`, `>`, `<=`, and `>=`.  
    **Example**:  
    ```csharp
    int a = 10, b = 20;
    bool result1 = a == b;  // false
    bool result2 = a < b;   // true
    ```

  - **Logical (Bitwise) Operators**: Perform bit-level operations, including `&`, `|`, `^`, `~`, and `<<`, `>>`.  
    **Example**:  
    ```csharp
    int a = 5; // 0101 in binary
    int b = 3; // 0011 in binary
    int andResult = a & b; // 0001, result = 1
    int orResult = a | b; // 0111, result = 7
    ```

  - **Assignment Operators**: Assign values to variables, such as `=`, `+=`, `-=`, `*=`, `/=`, `%=` and others for combined operations.  
    **Example**:  
    ```csharp
    int x = 5;
    x += 3;  // x = x + 3, result = 8
    x *= 2;  // x = x * 2, result = 16
    ```

# Control Statements in C#

- **If Statement**: The `if` statement is used to evaluate a condition and execute a block of code if the condition is true.  
  **Example**:  
  ```csharp
  int number = 10;
  if (number > 5) {
      Console.WriteLine("Number is greater than 5.");
  }
  ```

- **Switch Statement**: The `switch` statement is used to select one of many code blocks to be executed based on the value of a variable.  
  **Example**:  
  ```csharp
  int day = 3;
  switch (day) {
      case 1:
          Console.WriteLine("Monday");
          break;
      case 2:
          Console.WriteLine("Tuesday");
          break;
      case 3:
          Console.WriteLine("Wednesday");
          break;
      default:
          Console.WriteLine("Invalid day");
          break;
  }
  ```

### Iteration Statements

- **For Each Loop**: The `foreach` loop iterates over a collection, such as an array or list, and processes each element without needing an index variable.  
  **Example**:  
  ```csharp
  string[] fruits = { "Apple", "Banana", "Cherry" };
  foreach (var fruit in fruits) {
      Console.WriteLine(fruit);
  }
  ```

- **For Loop**: The `for` loop is used to repeat a block of code a specific number of times, with an index variable that is incremented or decremented in each iteration.  
  **Example**:  
  ```csharp
  for (int i = 0; i < 5; i++) {
      Console.WriteLine(i);
  }
  ```

- **While Loop**: The `while` loop repeats a block of code as long as the specified condition is true.  
  **Example**:  
  ```csharp
  int i = 0;
  while (i < 5) {
      Console.WriteLine(i);
      i++;
  }
  ```

- **Do While Loop**: The `do while` loop is similar to the `while` loop but guarantees at least one iteration, as the condition is checked after the block of code is executed.  
  **Example**:  
  ```csharp
  int i = 0;
  do {
      Console.WriteLine(i);
      i++;
  } while (i < 5);
  ```


# Branch or Jump Statements in C#

- **Break Statement**: The `break` statement is used to exit from a loop or a `switch` statement, terminating the current execution flow and continuing from the next statement after the loop or switch.  
  **Example**:  
  ```csharp
  for (int i = 0; i < 5; i++) {
      if (i == 3) {
          break; // Exits the loop when i equals 3
      }
      Console.WriteLine(i);
  }
  ```

- **Continue Statement**: The `continue` statement skips the current iteration of a loop and moves to the next iteration, without terminating the loop.  
  **Example**:  
  ```csharp
  for (int i = 0; i < 5; i++) {
      if (i == 2) {
          continue; // Skips when i equals 2
      }
      Console.WriteLine(i);
  }
  ```

- **Goto Statement**: The `goto` statement transfers control to a labeled statement within the same method, which is generally discouraged as it can make the code harder to follow.  
  **Example**:  
  ```csharp
  int i = 0;
  startLoop:
  if (i < 5) {
      Console.WriteLine(i);
      i++;
      goto startLoop; // Jumps back to startLoop label
  }
  ```

- **Return Statement**: The `return` statement is used to exit from a method and optionally return a value to the calling code.  
  **Example**:  
  ```csharp
  int AddNumbers(int a, int b) {
      return a + b; // Exits the method and returns the sum of a and b
  }
  ```

# Constants in C#

- **Constants**: Constants are variables whose value cannot be changed after initialization. They are defined using the `const` keyword and must be assigned a value at the time of declaration.  
  **Example**:  
  ```csharp
  const int MAX_SIZE = 100; // The value of MAX_SIZE cannot be changed
  ```

# Read-Only Members in C#

- **Read-Only Members**: Read-only members are fields or properties that can be assigned a value only during initialization or in a constructor. Unlike constants, their value can be set dynamically but not modified after that.  
  **Example**:  
  ```csharp
  class Example {
      public readonly int maxSize;
      
      public Example(int size) {
          maxSize = size; // Read-only field can be set in constructor
      }
  }

  var obj = new Example(50);
  Console.WriteLine(obj.maxSize); // Outputs 50
  ```

# Methods in C#

- **Method Parameters vs Arguments**:  
  - **Parameters** are the variables declared in the method definition that act as placeholders for values passed into the method.  
  - **Arguments** are the actual values or expressions passed into the method when it is called.
  
  **Example**:  
  ```csharp
  // Parameters: a, b
  void Add(int a, int b) {
      Console.WriteLine(a + b);  
  }
  
  // Arguments: 5, 10
  Add(5, 10); // Outputs: 15
  ```

- **Passing by Reference and by Value in C#**:
  - **Passing by Value**: When a parameter is passed by value, the method receives a copy of the argument's value. Changes to the parameter do not affect the original argument.  
    **Example**:  
    ```csharp
    void ModifyValue(int x) {
        x = 10;  // This change does not affect the original variable
    }
    
    int num = 5;
    ModifyValue(num);
    Console.WriteLine(num); // Outputs: 5
    ```

  - **Passing by Reference**: When a parameter is passed by reference, the method receives a reference to the original argument, so changes to the parameter affect the original variable.  
    **Example**:  
    ```csharp
    void ModifyReference(ref int x) {
        x = 10;  // This change affects the original variable
    }
    
    int num = 5;
    ModifyReference(ref num);
    Console.WriteLine(num); // Outputs: 10
    ```

- **Named Arguments**: Named arguments allow you to pass arguments to a method by specifying the parameter name, which improves code readability, especially when passing values to only some of the parameters in a method with many parameters.  
  **Example**:  
  ```csharp
  void DisplayInfo(string name, int age) {
      Console.WriteLine($"Name: {name}, Age: {age}");
  }
  
  // Using named arguments
  DisplayInfo(age: 25, name: "John");
  ```

- **Optional Arguments**: Optional arguments are parameters that have a default value, allowing them to be omitted when calling the method. If no argument is provided, the default value is used.  
  **Example**:  
  ```csharp
  void Greet(string name = "Guest") {
      Console.WriteLine($"Hello, {name}");
  }
  
  Greet();        // Outputs: Hello, Guest
  Greet("Alice"); // Outputs: Hello, Alice
  ```

- **Params Keyword**: The `params` keyword allows a method to accept a variable number of arguments, which are treated as an array. This is useful when you don’t know in advance how many arguments will be passed to the method.  
  **Example**:  
  ```csharp
  void SumNumbers(params int[] numbers) {
      int sum = 0;
      foreach (var number in numbers) {
          sum += number;
      }
      Console.WriteLine($"Sum: {sum}");
  }
  
  SumNumbers(1, 2, 3);           // Outputs: Sum: 6
  SumNumbers(4, 5, 6, 7, 8);     // Outputs: Sum: 30
  SumNumbers();                  // Outputs: Sum: 0
  ```




# Extension Methods in C#

**Extension Methods** allow you to add new functionality to existing types (like classes, structs, or interfaces) without modifying their original source code. They are defined as static methods, but are called as if they were instance methods on the type they extend.

### Key Points:
- Extension methods are defined in static classes.
- The first parameter of an extension method specifies the type being extended and is preceded by the `this` keyword.
- They provide a way to add new methods to types that you don't have control over, such as classes in the .NET Framework.

### Example:

```csharp
// Defining an extension method
public static class StringExtensions
{
    // This method extends the string class by adding a method to reverse the string
    public static string ReverseString(this string str)
    {
        char[] charArray = str.ToCharArray();
        Array.Reverse(charArray);
        return new string(charArray);
    }
}

// Using the extension method
class Program
{
    static void Main()
    {
        string original = "Hello";
        string reversed = original.ReverseString(); // Calling the extension method
        Console.WriteLine(reversed);  // Outputs: "olleH"
    }
}
```

### How Extension Methods Work:
1. The method is defined in a static class.
2. The method takes the type you want to extend (in this case, `string`) as the first parameter, using the `this` keyword.
3. When calling the method, it appears to be an instance method of the type, even though it's actually a static method in a separate class.

### Benefits:
- **Improves Readability**: Allows you to add methods directly to existing types, making your code more expressive.
- **Doesn't Modify Original Code**: You don’t need to modify the source code of existing types or create subclasses to add functionality.
- **Reusability**: Once defined, extension methods can be used throughout your application, making your code DRY (Don't Repeat Yourself).

### Important Considerations:
- Extension methods can only be used when the namespace containing the static class is imported.
- They don’t override the existing methods of a class, but they can make the extended type appear to have new methods.
  
### Example with LINQ Extension:
You can use extension methods to extend functionality with LINQ (Language Integrated Query) methods. For example, the `Where` method is an extension of `IEnumerable<T>`:

```csharp
// Example using LINQ's extension method
List<int> numbers = new List<int> { 1, 2, 3, 4, 5 };
var evenNumbers = numbers.Where(n => n % 2 == 0); // Using the extension method 'Where'

foreach (var number in evenNumbers)
{
    Console.WriteLine(number);  // Outputs: 2, 4
}
```

# Properties in C#

**Properties** in C# provide a way to expose the private fields of a class to the outside world, encapsulating the data and allowing controlled access to it. They can have getter and setter methods, and in some cases, can be auto-implemented, making them simpler to define.

### Auto-Implemented Properties

Auto-implemented properties are a shorthand way to create properties when no additional logic is required for getting or setting the property values. The compiler automatically generates a private, anonymous backing field for the property.

#### Syntax:
```csharp
public type PropertyName { get; set; }
```

#### Example:
```csharp
public class Person
{
    public string Name { get; set; }  // Auto-implemented property
    public int Age { get; set; }      // Auto-implemented property
}

class Program
{
    static void Main()
    {
        Person person = new Person();
        person.Name = "Alice";
        person.Age = 30;
        Console.WriteLine($"{person.Name}, {person.Age}");  // Outputs: Alice, 30
    }
}
```

In the above example, the `Name` and `Age` properties are auto-implemented, and you don’t need to explicitly define a private backing field for them. The compiler automatically handles this behind the scenes.

### Properties Overriding

In C#, properties can be overridden in derived classes, just like methods. This is typically done when you have a base class with a property and you want to provide a different implementation in the derived class. To override a property, it must be marked as `virtual` in the base class, and the derived class can then override it using the `override` keyword.

#### Syntax:
```csharp
public virtual type PropertyName { get; set; }
public override type PropertyName { get; set; }
```

#### Example:

```csharp
// Base class
public class Animal
{
    public virtual string Name { get; set; }
}

// Derived class
public class Dog : Animal
{
    private string _name;
    public override string Name
    {
        get { return _name; }
        set { _name = "Dog: " + value; }  // Custom setter implementation
    }
}

class Program
{
    static void Main()
    {
        Animal animal = new Animal();
        animal.Name = "Generic Animal";
        Console.WriteLine(animal.Name);  // Outputs: Generic Animal

        Dog dog = new Dog();
        dog.Name = "Max";
        Console.WriteLine(dog.Name);     // Outputs: Dog: Max (property overridden)
    }
}
```

In this example, the `Name` property in the `Animal` class is overridden in the `Dog` class. The `Dog` class modifies the setter to add a custom prefix "Dog: " to the name.

### Key Points:
- **Auto-Implemented Properties**: Simplifies property creation when no additional logic is required for get/set operations.
- **Overriding Properties**: Allows you to customize or extend the behavior of a base class property in a derived class. The base class property must be marked as `virtual` to be overridden.

### Benefits of Properties:
- **Encapsulation**: They allow controlled access to private fields, ensuring that the values are accessed or modified only through the getter and setter methods.
- **Flexibility**: You can add logic in the getter or setter to control how the property is accessed or modified.
- **Inheritance and Overriding**: You can override properties in derived classes to customize their behavior.


# OOP Aspects of C# 

C# is an object-oriented programming (OOP) language that supports key principles such as encapsulation, inheritance, and polymorphism. It provides several features to help structure code, manage classes, and handle complex programming tasks. Below are important OOP aspects in C#:

### Namespaces

**Namespaces** in C# are used to organize and group related classes, structs, interfaces, and other namespaces. They help avoid naming conflicts and provide a logical grouping for classes. A namespace can span across multiple files, which makes it easier to maintain and organize large codebases.

#### Syntax:
```csharp
namespace MyNamespace
{
    public class MyClass
    {
        // Class members
    }
}
```

#### Example:
```csharp
namespace AnimalKingdom
{
    public class Animal
    {
        public string Name { get; set; }
    }
}

class Program
{
    static void Main()
    {
        AnimalKingdom.Animal myAnimal = new AnimalKingdom.Animal();
        myAnimal.Name = "Lion";
        Console.WriteLine(myAnimal.Name); // Outputs: Lion
    }
}
```

Namespaces ensure that class names don’t clash, even if different developers use the same class names in different parts of the program.

### Class

A **class** is a blueprint for creating objects (instances) and defines properties, methods, and events. It serves as the core building block in OOP. A class can be instantiated to create objects, and objects can have both state (fields) and behavior (methods).

#### Syntax:
```csharp
public class MyClass
{
    public int MyProperty { get; set; }

    public void MyMethod()
    {
        Console.WriteLine("Hello from MyMethod!");
    }
}
```

#### Example:
```csharp
public class Car
{
    public string Model { get; set; }
    public int Year { get; set; }

    public void DisplayInfo()
    {
        Console.WriteLine($"Model: {Model}, Year: {Year}");
    }
}

class Program
{
    static void Main()
    {
        Car car = new Car();
        car.Model = "Tesla";
        car.Year = 2023;
        car.DisplayInfo();  // Outputs: Model: Tesla, Year: 2023
    }
}
```

### Partial Class

A **partial class** allows you to split the definition of a class into multiple files. This is useful in large projects or when working with auto-generated code (e.g., designer files in Windows Forms or ASP.NET).

#### Syntax:
```csharp
// File 1
public partial class MyClass
{
    public void Method1()
    {
        Console.WriteLine("Method 1");
    }
}

// File 2
public partial class MyClass
{
    public void Method2()
    {
        Console.WriteLine("Method 2");
    }
}
```

#### Example:
```csharp
// File 1
public partial class Car
{
    public string Model { get; set; }
}

// File 2
public partial class Car
{
    public int Year { get; set; }
}
```

With partial classes, you can maintain the class across different files, making it easier to manage large projects and avoid cluttering a single file with too much code.

### Static Class

A **static class** cannot be instantiated and is used to store methods and properties that don't require object instances. All members of a static class are static, meaning they belong to the class itself rather than to instances of the class.

#### Syntax:
```csharp
public static class MyStaticClass
{
    public static void MyMethod()
    {
        Console.WriteLine("This is a static method.");
    }
}
```

#### Example:
```csharp
public static class MathUtility
{
    public static int Add(int a, int b)
    {
        return a + b;
    }
}

class Program
{
    static void Main()
    {
        int result = MathUtility.Add(5, 10); // No need to instantiate MathUtility
        Console.WriteLine(result);  // Outputs: 15
    }
}
```

Static classes are typically used for utility methods or constants that don’t depend on object instances.

### Sealed Class

A **sealed class** cannot be inherited. If you mark a class as sealed, it prevents other classes from deriving from it. This can be useful when you want to prevent further inheritance for security or performance reasons.

#### Syntax:
```csharp
public sealed class MySealedClass
{
    // Class members
}
```

#### Example:
```csharp
public sealed class Circle
{
    public double Radius { get; set; }
}

class Program
{
    static void Main()
    {
        Circle c = new Circle();
        c.Radius = 5;
        Console.WriteLine(c.Radius);  // Outputs: 5
    }
}
```

Attempting to inherit from a sealed class will result in a compile-time error.

### Abstract Class

An **abstract class** cannot be instantiated directly. It serves as a base class for other classes. Abstract classes can have both abstract (without implementation) and non-abstract methods. The abstract methods must be implemented in the derived classes.

#### Syntax:
```csharp
public abstract class MyAbstractClass
{
    public abstract void MyAbstractMethod(); // Must be implemented in derived class

    public void MyNonAbstractMethod()
    {
        Console.WriteLine("This is a non-abstract method.");
    }
}
```

#### Example:
```csharp
public abstract class Animal
{
    public abstract void Speak();  // Abstract method

    public void Eat()
    {
        Console.WriteLine("This animal eats food.");
    }
}

public class Dog : Animal
{
    public override void Speak()
    {
        Console.WriteLine("Woof!");
    }
}

class Program
{
    static void Main()
    {
        // Animal animal = new Animal(); // Error: cannot instantiate an abstract class
        Dog dog = new Dog();
        dog.Speak();  // Outputs: Woof!
        dog.Eat();    // Outputs: This animal eats food.
    }
}
```

Abstract classes provide a way to define common functionality in a base class while leaving implementation details to the derived classes.

---

### Summary of Key OOP Concepts in C#:
- **Namespaces**: Organize classes and avoid naming conflicts.
- **Class**: A blueprint for objects, encapsulating data and behavior.
- **Partial Class**: Split class definitions across multiple files.
- **Static Class**: A class with no instances, used for utility methods and constants.
- **Sealed Class**: Prevents inheritance, useful for locking down functionality.
- **Abstract Class**: A base class that cannot be instantiated directly, providing a template for derived classes.

These concepts help structure and manage code, improving maintainability and reusability in object-oriented programming. 


# OOP Concepts in C# 
### Interface
An **interface** defines a contract that classes can implement. It contains method signatures, properties, events, or indexers without providing the implementation. A class that implements an interface must provide the implementation for all its members.

#### Syntax:
```csharp
public interface IMyInterface
{
    void MyMethod();  // Method signature
}
```

#### Example:
```csharp
public interface IDriveable
{
    void Start();
    void Stop();
}

public class Car : IDriveable
{
    public void Start()
    {
        Console.WriteLine("Car started.");
    }

    public void Stop()
    {
        Console.WriteLine("Car stopped.");
    }
}

class Program
{
    static void Main()
    {
        Car myCar = new Car();
        myCar.Start();  // Outputs: Car started.
        myCar.Stop();   // Outputs: Car stopped.
    }
}
```
- Interfaces enable multiple inheritance in C# (as a class can implement multiple interfaces).

---

### Inheritance
**Inheritance** allows a class to derive properties and methods from another class. The derived class inherits all the non-private members of the base class and can extend or modify them.

#### Syntax:
```csharp
public class BaseClass
{
    public void Display()
    {
        Console.WriteLine("Display from BaseClass");
    }
}

public class DerivedClass : BaseClass
{
    public void Show()
    {
        Console.WriteLine("Show from DerivedClass");
    }
}
```

#### Example:
```csharp
public class Animal
{
    public void Eat()
    {
        Console.WriteLine("Animal is eating");
    }
}

public class Dog : Animal  // Inheriting Animal
{
    public void Bark()
    {
        Console.WriteLine("Dog is barking");
    }
}

class Program
{
    static void Main()
    {
        Dog dog = new Dog();
        dog.Eat();  // Inherited method
        dog.Bark(); // Method in the derived class
    }
}
```
- **Base Class**: The class being inherited from.
- **Derived Class**: The class that inherits from the base class.

---

### Method Overloading
**Method overloading** allows you to define multiple methods with the same name, but with different parameters (either in type or number). The correct method is called based on the arguments passed during the method call.

#### Syntax:
```csharp
public void MyMethod(int x) { }
public void MyMethod(string y) { }
```

#### Example:
```csharp
public class Calculator
{
    public int Add(int a, int b)
    {
        return a + b;
    }

    public double Add(double a, double b)
    {
        return a + b;
    }
}

class Program
{
    static void Main()
    {
        Calculator calc = new Calculator();
        Console.WriteLine(calc.Add(5, 10));       // Calls Add(int, int)
        Console.WriteLine(calc.Add(5.5, 10.3));   // Calls Add(double, double)
    }
}
```
- Method overloading helps to reuse method names with different arguments, improving code clarity and reducing duplication.

---

### Method Overriding
**Method overriding** allows a subclass to provide its own implementation of a method that is already defined in its base class. The method in the base class must be marked as `virtual`, and the derived class uses the `override` keyword.

#### Syntax:
```csharp
public virtual void MyMethod() { }
public override void MyMethod() { }
```

#### Example:
```csharp
public class Animal
{
    public virtual void MakeSound()
    {
        Console.WriteLine("Animal makes a sound");
    }
}

public class Dog : Animal
{
    public override void MakeSound()
    {
        Console.WriteLine("Dog barks");
    }
}

class Program
{
    static void Main()
    {
        Animal animal = new Animal();
        animal.MakeSound(); // Outputs: Animal makes a sound

        Dog dog = new Dog();
        dog.MakeSound(); // Outputs: Dog barks
    }
}
```
- **Virtual Method**: The method in the base class that can be overridden.
- **Override**: The derived class method that provides a new implementation for the base class method.

---

### Method Hiding
**Method hiding** occurs when a derived class defines a method with the same name as a method in the base class. This hides the base class method, and the new method in the derived class is called instead. You can hide a method explicitly using the `new` keyword.

#### Syntax:
```csharp
public new void MyMethod() { }
```

#### Example:
```csharp
public class Animal
{
    public void MakeSound()
    {
        Console.WriteLine("Animal makes a sound");
    }
}

public class Dog : Animal
{
    public new void MakeSound()
    {
        Console.WriteLine("Dog barks");
    }
}

class Program
{
    static void Main()
    {
        Animal animal = new Animal();
        animal.MakeSound(); // Outputs: Animal makes a sound

        Dog dog = new Dog();
        dog.MakeSound(); // Outputs: Dog barks
    }
}
```
- **Method Hiding**: The `new` keyword explicitly hides the base class method.
- When using a reference of the base class, the base class method is called, even if the object is an instance of the derived class.

---

### Constructors, `base` Keyword, and `this` Keyword

- **Constructors**: A **constructor** is a special method that is called when an object is created. It initializes the object with default or provided values. Constructors have the same name as the class and do not have a return type.

  ```csharp
  public class Person
  {
      public string Name;
      public int Age;

      public Person(string name, int age)  // Constructor
      {
          Name = name;
          Age = age;
      }
  }
  ```

  **Example**:
  ```csharp
  public class Person
  {
      public string Name;
      public int Age;

      public Person(string name, int age)
      {
          Name = name;
          Age = age;
      }
  }

  class Program
  {
      static void Main()
      {
          Person person = new Person("John", 30);
          Console.WriteLine(person.Name);  // Outputs: John
          Console.WriteLine(person.Age);   // Outputs: 30
      }
  }
  ```

- **`base` Keyword**: The `base` keyword is used to call members of the base class (such as constructors or methods) from within a derived class.

  ```csharp
  public class Animal
  {
      public string Name;

      public Animal(string name)
      {
          Name = name;
      }
  }

  public class Dog : Animal
  {
      public Dog(string name) : base(name)  // Calling base class constructor
      {
      }
  }
  ```

  **Example**:
  ```csharp
  public class Animal
  {
      public string Name;

      public Animal(string name)
      {
          Name = name;
      }
  }

  public class Dog : Animal
  {
      public Dog(string name) : base(name)  // Using base constructor
      {
          Console.WriteLine($"Dog's name is {Name}");
      }
  }

  class Program
  {
      static void Main()
      {
          Dog dog = new Dog("Buddy");  // Outputs: Dog's name is Buddy
      }
  }
  ```

- **`this` Keyword**: The `this` keyword refers to the current instance of the class. It is often used to differentiate between instance variables and parameters with the same name.

  ```csharp
  public class Person
  {
      private string name;

      public Person(string name)
      {
          this.name = name;  // 'this' refers to the instance variable
      }

      public void Display()
      {
          Console.WriteLine(this.name);  // Refers to the instance variable 'name'
      }
  }
  ```

  **Example**:
  ```csharp
  public class Person
  {
      private string name;

      public Person(string name)
      {
          this.name = name;  // 'this' differentiates between the parameter and the field
      }

      public void Display()
      {
          Console.WriteLine(this.name);  // Outputs the instance field 'name'
      }
  }

  class Program
  {
      static void Main()
      {
          Person person = new Person("Alice");
          person.Display();  // Outputs: Alice
      }
  }
  ```

---

### Summary:
- **Interface**: Defines a contract that classes must implement.
- **Inheritance**: Allows a class to inherit from another class and reuse code.
- **Method Overloading**: Multiple methods with the same name but different parameters.
- **Method Overriding**: A derived class redefines a base class method.
- **Method Hiding**: A derived class hides a base class method using the `new` keyword.
- **Constructors, `base`, and `this`**: Constructors initialize objects, `base` accesses base class members, and `this` refers to the current instance.

These OOP concepts in C# promote code reuse, modularity, and maintainability in object-oriented software development.


# Access Modifiers in C#

Access modifiers in C# define the visibility and accessibility of types and their members (fields, methods, properties, etc.). They control how and where a class, method, or field can be accessed. The four main access modifiers in C# are **public**, **private**, **protected**, and **internal**.

### 1. Public
A **public** member is accessible from anywhere, both inside and outside the class or assembly. It has no access restrictions.

#### Example:
```csharp
public class Car
{
    public string Model { get; set; }

    public void DisplayInfo()
    {
        Console.WriteLine($"Model: {Model}");
    }
}

class Program
{
    static void Main()
    {
        Car car = new Car();
        car.Model = "Tesla";
        car.DisplayInfo();  // Outputs: Model: Tesla
    }
}
```
- **Public** allows full access to the member or type from any other code.

---

### 2. Private
A **private** member is accessible only within the class or struct where it is declared. It cannot be accessed from outside the class, not even by derived classes.

#### Example:
```csharp
public class Car
{
    private string model;  // Private field

    public void SetModel(string model)
    {
        this.model = model;
    }

    public void DisplayInfo()
    {
        Console.WriteLine($"Model: {model}");  // Accessing private field within the class
    }
}

class Program
{
    static void Main()
    {
        Car car = new Car();
        car.SetModel("Tesla");
        car.DisplayInfo();  // Outputs: Model: Tesla
        // car.model = "BMW"; // Error: 'model' is private
    }
}
```
- **Private** restricts access to the member or type to only within the class or struct it is defined.

---

### 3. Protected
A **protected** member is accessible within its own class and by derived classes. It cannot be accessed by other classes that do not inherit from the base class.

#### Example:
```csharp
public class Vehicle
{
    protected string model;  // Protected field

    public Vehicle(string model)
    {
        this.model = model;
    }
}

public class Car : Vehicle
{
    public Car(string model) : base(model) { }

    public void DisplayInfo()
    {
        Console.WriteLine($"Model: {model}");  // Accessing protected field from the base class
    }
}

class Program
{
    static void Main()
    {
        Car car = new Car("Tesla");
        car.DisplayInfo();  // Outputs: Model: Tesla
        // car.model = "BMW"; // Error: 'model' is protected and cannot be accessed directly
    }
}
```
- **Protected** provides access to members only within the class and derived classes, but not outside.

---

### 4. Internal
An **internal** member is accessible only within the same assembly (project). It is not visible to other assemblies that are not part of the same project. The internal modifier is often used for members that should be accessible throughout the entire project but not exposed to external assemblies.

#### Example:
```csharp
public class Car
{
    internal string model;  // Internal field

    public Car(string model)
    {
        this.model = model;
    }
}

class Program
{
    static void Main()
    {
        Car car = new Car("Tesla");
        Console.WriteLine($"Model: {car.model}");  // Accessible within the same assembly
    }
}
```
- **Internal** is used when you want to expose members to other classes in the same project, but hide them from external projects.

---

### Summary of Access Modifiers:
- **Public**: Accessible from anywhere (no restriction).
- **Private**: Accessible only within the same class or struct.
- **Protected**: Accessible within the class and derived classes.
- **Internal**: Accessible within the same assembly (project).

These access modifiers allow for fine-grained control over the visibility of types and their members, helping to encapsulate implementation details and promote data security in C# applications.

# Enumerations and Structures in C#

## Enumerations (Enums)
An **enumeration (enum)** is a distinct value type that defines a set of named constants. Enums are used when you have a set of related constants, and they provide a way to represent them with meaningful names rather than numeric values.

### Enum Syntax:
```csharp
public enum EnumName
{
    Value1,
    Value2,
    Value3,
    // ...
}
```

### Example of Enum:
```csharp
public enum Days
{
    Sunday = 1,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
}

class Program
{
    static void Main()
    {
        Days today = Days.Monday;
        Console.WriteLine(today);  // Outputs: Monday

        int dayNumber = (int)today;  // Convert enum to int
        Console.WriteLine(dayNumber);  // Outputs: 2
    }
}
```
- **Explanation**:
  - `Days` is an enum that represents the days of the week.
  - Enums can also be assigned custom integer values (e.g., `Sunday = 1`), or they default to 0 and increment by 1.
  - You can cast an enum value to its underlying type (usually `int`) if needed.

### Enum with Flags (Bitwise Operations)
You can use enums with the `[Flags]` attribute to define a set of values that can be combined using bitwise operators. This is useful for representing multiple options or permissions.

```csharp
[Flags]
public enum Permissions
{
    None = 0,
    Read = 1,
    Write = 2,
    Execute = 4,
    FullControl = Read | Write | Execute
}

class Program
{
    static void Main()
    {
        Permissions myPermissions = Permissions.Read | Permissions.Write;
        Console.WriteLine(myPermissions);  // Outputs: Read, Write

        bool canRead = (myPermissions & Permissions.Read) == Permissions.Read;
        Console.WriteLine($"Can read: {canRead}");  // Outputs: Can read: True
    }
}
```
- **Explanation**: 
  - The `[Flags]` attribute allows combining enum values using bitwise operators, which is useful for defining combinations of options.

---

## Structures (Structs)
A **structure (struct)** is a value type that can encapsulate data and behavior. It is similar to a class but with key differences, like being a value type (stored on the stack), having no inheritance, and being faster for small data structures. Structures are commonly used when you need to group a small amount of data that has a logical meaning.

### Structure Syntax:
```csharp
public struct StructName
{
    public dataType FieldName;
    // Methods, constructors, etc.
}
```

### Example of a Struct:
```csharp
public struct Point
{
    public int X;
    public int Y;

    public Point(int x, int y)
    {
        X = x;
        Y = y;
    }

    public void Display()
    {
        Console.WriteLine($"Point({X}, {Y})");
    }
}

class Program
{
    static void Main()
    {
        Point point = new Point(10, 20);
        point.Display();  // Outputs: Point(10, 20)
    }
}
```
- **Explanation**:
  - `Point` is a structure that holds two `int` fields (`X` and `Y`).
  - Structs are instantiated without using the `new` keyword unless you have a constructor to initialize them.

### Differences Between Structs and Classes:
- **Structs** are value types, and they are stored on the stack. When a struct is passed to a method, a copy of the struct is passed.
- **Classes** are reference types, and they are stored on the heap. When a class is passed to a method, a reference to the object is passed.

---

## Partial Structures
**Partial structures** allow a struct definition to be split across multiple files. This can help in organizing large codebases by separating the implementation of a struct across different parts of the program.

### Syntax of Partial Structs:
```csharp
public partial struct StructName
{
    // Part 1 of the structure
}

public partial struct StructName
{
    // Part 2 of the structure
}
```

### Example of Partial Struct:
```csharp
// File 1
public partial struct Rectangle
{
    public int Width;
    public int Height;

    public void DisplayDimensions()
    {
        Console.WriteLine($"Width: {Width}, Height: {Height}");
    }
}

// File 2
public partial struct Rectangle
{
    public int Area()
    {
        return Width * Height;
    }
}

class Program
{
    static void Main()
    {
        Rectangle rect = new Rectangle();
        rect.Width = 10;
        rect.Height = 20;
        rect.DisplayDimensions();  // Outputs: Width: 10, Height: 20
        Console.WriteLine($"Area: {rect.Area()}");  // Outputs: Area: 200
    }
}
```
- **Explanation**:
  - The `Rectangle` struct is split into two partial definitions. One part defines the properties and method `DisplayDimensions`, and the other part adds a method for calculating the area.
  - Partial structures allow parts of a struct to be defined in different files, which is useful for organizing code, especially when working in larger teams.

---

### Summary:
- **Enum**: A way to define a set of named constants. Useful for representing related values with meaningful names.
- **Struct**: A value type that can hold data and methods. Used for lightweight data structures.
- **Partial Structs**: Allows the definition of a struct to be split across multiple files, improving organization in larger codebases.

These concepts help in organizing and managing data and behavior more effectively, making code cleaner, more maintainable, and easier to understand.


# Strings and Characters in C#

### 1. **Strings as Immutable Objects**
In C#, **strings** are immutable, meaning that once a string is created, it cannot be modified. Any operation that alters a string results in a new string object being created. This ensures that strings are safe from unintended modifications, especially when passed around in multiple parts of the program.

#### Example:
```csharp
string str = "Hello";
str = str.Replace("H", "J");
Console.WriteLine(str);  // Outputs: Jello
```
- **Explanation**: Here, `"Hello"` is not modified directly. Instead, a new string `"Jello"` is created and assigned back to the `str` variable.

---

### 2. **Verbatim Strings**
A **verbatim string** is defined using `@` before the string literal. It allows the string to be written exactly as it appears, which is useful for file paths or regular expressions, where escaping characters (like backslashes) is required.

#### Example:
```csharp
string filePath = @"C:\Users\Documents\file.txt";
Console.WriteLine(filePath);  // Outputs: C:\Users\Documents\file.txt
```
- **Explanation**: The `@` symbol allows for multi-line strings and treats backslashes as literal characters without needing escape sequences.

---

### 3. **Format Strings**
**Format strings** allow for inserting values into a string using placeholders like `{0}`, `{1}`, etc. This is a more flexible way to build strings, especially when combining multiple values.

#### Example:
```csharp
string name = "John";
int age = 25;
string message = string.Format("Name: {0}, Age: {1}", name, age);
Console.WriteLine(message);  // Outputs: Name: John, Age: 25
```
- **Explanation**: The `string.Format` method is used to insert variables into a string at runtime.

---

### 4. **Substrings**
A **substring** is a part of a string that can be extracted using the `Substring()` method.

#### Example:
```csharp
string str = "Hello, World!";
string subStr = str.Substring(7, 5);
Console.WriteLine(subStr);  // Outputs: World
```
- **Explanation**: `Substring(7, 5)` extracts 5 characters starting from index 7.

---

### 5. **Accessing Individual Characters of Strings**
You can access individual characters in a string using indexing.

#### Example:
```csharp
string str = "Hello";
char firstChar = str[0];
Console.WriteLine(firstChar);  // Outputs: H
```
- **Explanation**: Strings in C# are indexed from 0, so `str[0]` accesses the first character.

---

### 6. **Replacing Substrings**
The `Replace()` method allows you to replace occurrences of a substring with another substring.

#### Example:
```csharp
string str = "Hello, World!";
string newStr = str.Replace("World", "C#");
Console.WriteLine(newStr);  // Outputs: Hello, C#!
```
- **Explanation**: `"World"` is replaced with `"C#"`, resulting in a new string.

---

### 7. **Removing Substrings**
You can remove parts of a string using the `Remove()` method, which removes characters starting from a specific index or removes a range of characters.

#### Example:
```csharp
string str = "Hello, World!";
string newStr = str.Remove(5);  // Removes from index 5 onwards
Console.WriteLine(newStr);  // Outputs: Hello
```
- **Explanation**: Removes the substring starting from index 5.

---

### 8. **Removing Trailing and Leading White Spaces**
To remove extra spaces at the beginning or end of a string, you can use the `Trim()` method.

#### Example:
```csharp
string str = "   Hello, World!   ";
string trimmedStr = str.Trim();
Console.WriteLine(trimmedStr);  // Outputs: Hello, World!
```
- **Explanation**: `Trim()` removes all leading and trailing white spaces.

---

### 9. **Finding Index of Substrings and Characters**
The `IndexOf()` method is used to find the index of the first occurrence of a character or substring.

#### Example:
```csharp
string str = "Hello, World!";
int index = str.IndexOf("World");
Console.WriteLine(index);  // Outputs: 7
```
- **Explanation**: `IndexOf("World")` returns the starting index of the substring `"World"`.

---

### 10. **Uppercase, Lowercase Strings**
You can convert a string to uppercase or lowercase using `ToUpper()` and `ToLower()` methods.

#### Example:
```csharp
string str = "Hello, World!";
string upperStr = str.ToUpper();
string lowerStr = str.ToLower();
Console.WriteLine(upperStr);  // Outputs: HELLO, WORLD!
Console.WriteLine(lowerStr);  // Outputs: hello, world!
```
- **Explanation**: `ToUpper()` converts all characters to uppercase, and `ToLower()` converts them to lowercase.

---

### 11. **Copying Strings, Comparing Strings**
- **Copying strings**: The `Copy()` method can be used to create a new string that is a copy of the original.
- **Comparing strings**: Use the `Compare()` or `Equals()` methods to compare strings.

#### Example:
```csharp
string str1 = "Hello";
string str2 = "Hello";
string str3 = "World";

// Copying
string copiedStr = string.Copy(str1);
Console.WriteLine(copiedStr);  // Outputs: Hello

// Comparing
bool areEqual = str1.Equals(str2);  // Returns true
Console.WriteLine(areEqual);  // Outputs: True
```
- **Explanation**: `Equals()` checks for value equality, and `string.Copy()` creates a new string that is identical to the original.

---

### 12. **Concatenating Strings**
To join two or more strings together, you can use the `+` operator or the `Concat()` method.

#### Example:
```csharp
string str1 = "Hello";
string str2 = "World";
string result = string.Concat(str1, ", ", str2);
Console.WriteLine(result);  // Outputs: Hello, World
```
- **Explanation**: `Concat()` is used to join multiple strings into a single string.

---

### 13. **Inserting Strings**
You can insert a substring into a string at a specified position using the `Insert()` method.

#### Example:
```csharp
string str = "Hello, !";
string newStr = str.Insert(7, "World");
Console.WriteLine(newStr);  // Outputs: Hello, World!
```
- **Explanation**: `Insert(7, "World")` inserts `"World"` at position 7 in the string.

---

### 14. **Splitting Strings**
The `Split()` method is used to split a string into an array of substrings based on a delimiter.

#### Example:
```csharp
string str = "apple,banana,cherry";
string[] fruits = str.Split(',');
foreach (var fruit in fruits)
{
    Console.WriteLine(fruit);  // Outputs: apple, banana, cherry
}
```
- **Explanation**: `Split(',')` splits the string at each comma, returning an array of substrings.

---

### 15. **Joining Strings**
The `Join()` method is used to concatenate an array of strings into a single string, with a specified separator.

#### Example:
```csharp
string[] fruits = { "apple", "banana", "cherry" };
string result = string.Join(", ", fruits);
Console.WriteLine(result);  // Outputs: apple, banana, cherry
```
- **Explanation**: `Join(", ", fruits)` combines the elements of the array, with a comma and space separating each element.

---

### Summary:
- **Strings** in C# are immutable and provide a rich set of methods for manipulating text.
- Common operations like **substring extraction**, **string formatting**, **searching**, and **comparison** are easily handled by built-in methods.
- **Verbatim strings** and **string concatenation** offer flexibility for handling complex strings.
- Methods like `Trim()`, `Replace()`, and `Remove()` help manipulate strings by removing or altering specific parts.

These string manipulation techniques are essential for handling textual data efficiently in C# applications.