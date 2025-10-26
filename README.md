# Mini-Vector - A C++ Template-Based Dynamic Array Implementation (like `std::vector`)
### A small C++ project where I implemented my own **dynamic array class (`MiniVector`)** from scratch - similar to how `std::vector` works internally.  
It supports **resizing, generic types, and operator overloading**, giving a deep understanding of how containers manage memory under the hood.

---

## Features
- **Template class** supporting any data type (`int`, `float`, `string`, custom class, etc)
- **Automatic resizing** — doubles capacity when full  
- **Indexing operator (`[]`) overload** for element access
- **Safe bounds checking**
- **Dynamic memory management** using `new` and `delete`
- **Destructor** for memory cleanup 
- Easy to use `Add()`, `Display()` and `Length()` functions

---

## Example Usage
```cpp
#include "MiniVector.h"
#include <iostream>
using namespace std;

int main() {
    MyList<int> nums(5);
    for (int i = 0; i < nums.Length(); ++i) {
        nums.Add(i + 1);
    }
    nums.Display(); // Output: 1 2 3 4 5 6 7 8
}
```

---

## What I Learned
- How dynamic arrays like `std::vector` grow and manage memory
- Deep understanding of pointers, templates, and operator overloading
- Object-oriented design and generic programming concepts
- The importance of manual memory management and resource cleanup

## Purpose
- This project helped me to deeply understanding of data structure fundamentals, object-oriented design and system-level programming concepts.

## Future Improvements
- Add iterator support (like STL)
- Add `Remove()`, `Find()`, `InsertAt()` and more.
- Add copy constructors for safe object copying.
- and more

## Technologies:
- C++

## Author:
- Ahmed Ayman
- Software Engineering Student, Mansoura University
- Passionate about systems programming, data structures, and low-level software design.






