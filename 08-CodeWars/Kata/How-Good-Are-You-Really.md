#codewars/kata #codewars/8kyu #codewars/lang/c
[Date :: 5-28-2025]
[Link :: [Link](https://www.codewars.com/kata/5601409514fc93442500010b)]

My C Solution:
```c
#include <stdbool.h>

bool better_than_average(const int class_points[], int class_size, int your_points) {
  // Your code here :)
  // Note: class_size is the length of class_points.
  
  int total_points = 0;
  
  // tally all points
  for (int i = 0; i < class_size; i++) {
    total_points += class_points[i];
  }
  
  if (your_points > (total_points / class_size)) {
    return true;
  }
  return false;
}
```