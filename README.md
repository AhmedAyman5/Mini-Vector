# Mini-Vector (Custom Dynamic Array in C++)
A small C++ project where I implemented my own dynamic array class (MiniVector) from scratch. similar to how "std::vector" works internally.

Features:
- Template class supporting any data type (int, float, string, custom class, etc)
- Automatic resizing (doubles capacity when full)
- Indexing operator "[]" overload
- Dynamic memory allocation and cleanup (using "new" and "delete")
- Easy to use "Add()", "Display()" and "Length()" functions

#Example Usage
cpp:
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

#What I Learned:
- How dynamic arrays like std::vector grow and manage memory
- Deep understanding of pointers, templates, and operator overloading
- Object-oriented design and generic programming concepts

#Future Improvements:
- Add iterator support (like STL)
- Add Remove(), Find(), InsertAt()
- Implement exception classes instead of exit(1)
- and more

#Technologies:
- C++

