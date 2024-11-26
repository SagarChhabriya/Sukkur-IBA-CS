
## 1. `push_back()`
Adds an element to the end of the vector.
  
```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    
    for (int val : vec) {
        cout << val << " ";
    }
    return 0;
}
```

**Output:**
`10 20 30`

## 2. `pop_back()`
Removes the last element from the vector.


```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {10, 20, 30};
    vec.pop_back(); // Removes 30
    
    for (int val : vec) {
        cout << val << " ";
    }
    return 0;
}
```

**Output:**
`10 20`


3. `size()`
Returns the number of elements in the vector.

```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {10, 20, 30};
    cout << "Size: " << vec.size() << endl;
    return 0;
}
```
**Output:**
  `3`



## 4.  `empty()`
Checks if the vector is empty.
```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {10, 20};
    if (vec.empty()) {
        cout << "Vector is empty";
    } else {
        cout << "Vector is not empty";
    }
    return 0;
}
```

**Output:**
`Vector is not empty`


## 5. `resize()`
Changes the size of the vector.

```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {10, 20, 30};
    vec.resize(5, 100); // Resize to 5 elements, fill new elements with 100
    
    for (int val : vec) {
        cout << val << " ";
    }
    return 0;
}
```


**Output:**
`10 20 30 100 100`

## 6. `insert()`
Inserts elements at a specified position.

```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {10, 20, 30};
    vec.insert(vec.begin() + 1, 15); // Insert 15 at position 1
    
    for (int val : vec) {
        cout << val << " ";
    }
    return 0;
}

```

**Output:**
 `10 15 20 30` 

  
##  7. `erase()`
Removes elements at a specific position or a range of positions.

```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40};
    vec.erase(vec.begin() + 2); // Erase the element at index 2 (30)
    
    for (int val : vec) {
        cout << val << " ";
    }
    return 0;
}
```

**Output:**
`10 20 40`

 ## 8. `clear()`
Removes all elements from the vector.


```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {10, 20, 30};
    vec.clear();
    
    cout << "Size after clear: " << vec.size() << endl;
    return 0;
}
```

**Output:**
`Size after clear: 0`


## 9. `front()`
Returns the first element in the vector.

```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {10, 20, 30};
    cout << "First element: " << vec.front() << endl;
    return 0;
}
```

**Output:**
 `First element: 10`



  
## 10. `back()`
Returns the last element in the vector.
```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {10, 20, 30};
    cout << "Last element: " << vec.back() << endl;
    return 0;
}
```


**Output:**
`Last element: 30`


## 11. `at()`
Accesses an element at a specific position, with bounds checking.
```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {10, 20, 30};
    cout << "Element at index 1: " << vec.at(1) << endl;
    return 0;
}
```

**Output:**
`Element at index 1: 20`

## 12. `begin()`
Returns an iterator to the first element.
```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {10, 20, 30};
    cout << "First element: " << *vec.begin() << endl;
    return 0;
}
```

**Output:**
`First element: 10`


## 13. `end()`
Returns an iterator to one past the last element.
```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {10, 20, 30};
    cout << "Last element: " << *(vec.end() - 1) << endl;
    return 0;
}
```  

**Output:**
`Last element: 30` 

## 14. `swap()`
Swaps the contents of two vectors.

```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec1 = {10, 20};
    vector<int> vec2 = {30, 40};
    
    vec1.swap(vec2);
    
    for (int val : vec1) {
        cout << val << " ";
    }
    return 0;
}
```  


**Output:**
`30 40`
  
## 15. `shrink_to_fit()`
Requests the reduction of capacity to fit the size of the vector.  
```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {10, 20, 30};
    vec.reserve(100); // Reserve space for 100 elements
    cout << "Capacity before shrink: " << vec.capacity() << endl;
    
    vec.shrink_to_fit(); // Reduces capacity to match the size
    cout << "Capacity after shrink: " << vec.capacity() << endl;
    
    return 0;
}
```

**Output:**
```yaml
Capacity before shrink: 100
Capacity after shrink: 3
```  
  


