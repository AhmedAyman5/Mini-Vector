# Mini-Vector - A C++ Template-Based Dynamic Array Implementation (like std::vector)
### A small C++ project where I implemented my own dynamic array class (MiniVector) from scratch.
similar to how "std::vector" works internally.
Supports resizing, generic types and operator overloading.

Features:
- Template class supporting any data type (int, float, string, custom class, etc)
- Automatic resizing (doubles capacity when full)
- Indexing operator "[]" overload (Element access via [] operator)
- Safe bounds checking
- Dynamic memory allocation and cleanup (using "new" and "delete") (Destructor for memory cleanup)
- Easy to use "Add()", "Display()" and "Length()" functions

#Example Usage
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
#What I Learned:
- How dynamic arrays like std::vector grow and manage memory
- Deep understanding of pointers, templates, and operator overloading
- Object-oriented design and generic programming concepts

#word:
- This project helps me to real understanding of data structure fundamentals, object-oriented design and system-level programming.

#Future Improvements:
- Add iterator support (like STL)
- Add Remove(), Find(), InsertAt()
- Add copy/move constructors for safe object copying
- and more

#Technologies:
- C++

#Author:
- Ahmed Ayman
- Software Engineering Student, Mansoura University
- Passionate about systems programming and data structures.




# 🧱 Mini-Vector  
### A C++ Template-Based Dynamic Array Implementation (like `std::vector`)

A small C++ project where I implemented my own **dynamic array class (`MiniVector`)** from scratch — similar to how `std::vector` works internally.  
It supports **resizing, generic types, and operator overloading**, giving a deep understanding of how containers manage memory under the hood.

---

## 🚀 Features
- 🧩 **Template class** supporting any data type (`int`, `float`, `string`, or custom classes)
- 📈 **Automatic resizing** — doubles capacity when full  
- 🎯 **Indexing operator (`[]`) overload** for element access  
- 🧠 **Safe bounds checking**  
- ⚙️ **Dynamic memory management** using `new` and `delete`  
- 🧹 **Destructor** for proper memory cleanup  
- 💬 Easy-to-use methods: `Add()`, `Display()`, and `Length()`

---

## 🧩 Example Usage

```cpp
#include "MiniVector.h"
#include <iostream>
using namespace std;

int main() {
    MyList<int> nums(5);
    for (int i = 0; i < nums.Length(); ++i) {
        nums.Add(i + 1);
    }

    nums.Add(6);
    nums.Add(7);
    nums.Display(); // Output: 1 2 3 4 5 6 7
}


