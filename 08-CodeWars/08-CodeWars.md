#hallway
[Date :: 05-27-2025]

[Link to my CodeWars profile](https://www.codewars.com/users/the_sun)

```dataview
TABLE

Date as "Created",

filter(file.tags, (tag) => endswith(tag, "kyu")) as "Kyu",

filter(file.tags, (tag) => startswith(tag, "#codewars/lang/")) as "Language Solved",

Link
FROM "08-CodeWars/Kata"
SORT filter(file.tags, (tag) => endswith(tag, "kyu")) asc
```

## Needs Tag!
```dataview
TABLE
FROM "08-CodeWars"
WHERE length(file.tags) = 0
```

## Needs Date!
```dataview
TABLE
FROM "08-CodeWars"
WHERE !Date
```


