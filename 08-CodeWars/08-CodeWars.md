#hallway
[Date :: 05-27-2025]

[Link to my CodeWars profile](https://www.codewars.com/users/the_sun)

```dataview
TABLE
filter(file.tags, (tag) => endswith(tag, "kyu")) as "Kyu",

filter(file.tags, (tag) => startswith(tag, "#codewars/lang/")) as "Language Solved",

Link
FROM "08-CodeWars/Kata"
SORT filter(file.tags, (tag) => endswith(tag, "kyu")) asc
```

