#codewars/kata #codewars/7kyu #codewars/lang/c 
[Date::1-15-2026]
[Link :: [Link](https://www.codewars.com/kata/578553c3a1b8d5c40300037c/c)]

## Solution:
---

```c
#include <stddef.h>

unsigned binary_array_to_numbers(const unsigned bits[/*count*/], size_t count)
{
  // counter for each 1
  unsigned counter_1s = 0;
  
  // iterate through each element, counting 1s
  for (size_t i = 0; i < count; i++){
    // if bit is a 1...
    // 2 ^ [pow] of (size_of_array - curr. index - 1;
    if (bits[i] == 1) counter_1s += (1 << (count - i - 1));
  }
  
  // hopefully I did it right??? :3
  return counter_1s;    
}
```

## What I learned?
---
- `1 << [int]` is the important piece here.
- The `<<` is called the `bitwise-left-shift` operator, and it shifts the bits of the L operand to the number of positions specified by the R
- `1` in binary is `0001`
- So if we ran `1 << 2` we would get `0100` because it shifted it left, twice
- Giving us the number `4` after two shifts
- To succeed in this challenge, I am counting where I am in the bits array (which is the number backwards in binary, which is why `-i` is important) and subtracting `-1` because the parameter `count` is total elements, not array size.
- So I'm shifting `1` by the current index in our binary number, `for` however many numbers there are
- In the end, giving us our answer!