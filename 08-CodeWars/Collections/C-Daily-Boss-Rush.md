#codewars/collection
[Date :: 01-17-2026]
[Link :: [Link](https://www.codewars.com/collections/c-daily-boss-rush-1)]

## Description
---
10 problems to complete in less than (~20) minutes. A daily practice of the C fundamentals.

```dataview
TABLE
Date as "Created",
filter(file.tags, (tag) => endswith(tag, "kyu")) as "Kyu",
filter(file.tags, (tag) => contains(tag, "codewars/collection/")) as "Collection",
Link
FROM "08-CodeWars/Kata" AND #codewars/collection/c-daily-boss-rush
SORT filter(file.tags, (tag) => endswith(tag, "kyu")) asc
```
