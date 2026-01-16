#codewars/kata #codewars/8kyu #codewars/lang/c 
[Date :: 01-16-2026]
[Link :: [Link](https://www.codewars.com/kata/57eae20f5500ad98e50002c5/train/c)]

## Solution:
---

```c
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// I felt like creating my own length function, :] 
unsigned lengt(const char *str){
  int length = 0;
  while (str[length] != '\0'){
    length += 1;
  }
  
  return length;
}

char *no_space(const char *str_in) {
  
  // copy string, because the input is read-only
  char *dupe_str = NULL;
  dupe_str = calloc(lengt(str_in) + 1, sizeof(char));
  strcpy(dupe_str, str_in);
  
  // create a "read" and "write" counter variable
  // note: this is not a n^2 for loop, see that is only O(n)
  int i, j;
  
  // end loop if null char is scanned
  for (i = 0, j = 0; dupe_str[i] != '\0'; i++) {
    // if [i] is a white-space...
    if (dupe_str[i] != ' ') {
      // make j = i, then (after) increase j by +1, this shifts every letter to the left by -1...
      // except at white-spaces
      dupe_str[j++] = dupe_str[i];
    }
  }
  
  // j is set to the last index at the end-of-loop, set as null char
  dupe_str[j] = '\0';
  
  return dupe_str;
}
```

## What I Learned?
---

- This one was tricky! I was quite perplex in the beginning, I ended up resolving to online-help for this one, which is okay sometimes!
- At first, I attempted to count all the white-spaces and their indexes, then create a sub-string result, just don't include the indexes where there were white spaces.
- This was proving to be silly and a lot of O(n) for loops, which I was unhappy with.
- After looking online for some help, I found this!
- The solution moves every character to the left, regardless of a white-space.
- If we bump into a white-space, we hop over it, and continue shifting everything to the left.
- Once we hit the last character, we just plop a null char there.
- That's it!
- Learned to use `calloc(str, sizeof(str));` , was originally screwing that up for a bit
- Learned to use `strcpy` from `#include <string.h>` 
- Created my own length function :]