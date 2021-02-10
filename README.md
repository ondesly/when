# days
Tiny C++ lib to iterate through days

## Example
```cpp
const auto begin = 1612952892;
const auto end = 1613210092;

for (const auto &day : oo::days{begin, end}) {
    std::cout << day.get_begin() << " - " << day.get_end() << std::endl;
}
```

## Requirements

This library requires a C++17 compiler and standard library.
