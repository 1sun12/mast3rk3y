#codewars/kata #codewars/8kyu #codewars/lang/c 
[Date :: 5-28-2025]
[Link :: [Link](https://www.codewars.com/kata/574b1916a3ebd6e4fa0012e7)]

My C Solution:
```c
#include <stdbool.h>
#include <string.h>
#include <ctype.h> // tolower() and toupper()

bool is_opposite(const char *s1, const char *s2) {

  int length1 = strlen(s1);
  int length2 = strlen(s2);
  
  // empty cases
  if (length1 != length2) {
    return false;
  }
  
  if ((length1 == 0) || (length2 == 0)) {
    return false;
  }
  
  // iterate each character
  for (int i = 0; i < length1; i++) {
    if (s1[i] != s2[i]) {
      if ((s1[i] == tolower(s2[i])) || (s1[i] == toupper(s2[i]))) {
        continue;
      }
    } 
    return false;
  }
  
  return true;    
}
```