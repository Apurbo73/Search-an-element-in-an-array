### Search an element in an array


```cpp
#include <iostream>
using namespace std;
```

This includes the necessary header file for input/output operations and brings standard names into scope.

---

```cpp
int main() {
    int N, X;
    cin >> N >> X;
```

* `N` is the number of elements in the array.
* `X` is the element we are searching for.
* We read both from standard input.

---

```cpp
    while (N--) {
        int a;
        cin >> a;
```

* `while (N--)` means: loop N times (decreasing N each time).
* `a` is a temporary variable used to store each input number one at a time.

---

```cpp
        if (a == X) {
            cout << "YES" << endl;
            return 0;
        }
```

* If the current number `a` matches `X`, we print `"YES"` and immediately exit the program (`return 0;`).

---

```cpp
    }

    cout << "NO" << endl;
    return 0;
}
```

* If the loop finishes without finding `X`, we print `"NO"` and exit.


This simplified C++ program reads the size of the array N and the target value X. It then reads each element one by one in a loop, checking if it matches X. If a match is found, it prints "YES" and exits immediately, making the code efficient and avoiding unnecessary checks.

If no match is found after checking all elements, the program prints "NO". This approach avoids using extra storage for the array and uses a simple while loop for compactness, making it ideal for quick element searches in input data.
