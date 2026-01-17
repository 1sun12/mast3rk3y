#codewars/kata #codewars/8kyu #codewars/lang/c 
#codewars/collection/c-daily-boss-rush
[Date :: 01-17-2026]
[Link :: [Link](https://www.codewars.com/kata/551b4501ac0447318f0009cd/train/c)]

## Solution:
---

```c
#include <stdbool.h>

//The returned string should be statically allocated and it won't be freed
const char *boolean_to_string(bool b)
{
    return b ? "true" : "false";
}
```

## What I Learned?
---

- Got some conditional operator `?` practice