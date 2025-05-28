#hallway
[Date :: 05-27-2025]
```dataview
TABLE
  date as "Created",
  choice(
    length(filter(file.tags, (tag) => startswith(tag, "#language/"))) > 0,
    join(filter(file.tags, (tag) => startswith(tag, "#language/")), ", "),
    "NA"
  ) as "Language",
  choice(
    length(file.inlinks) > 0,
    join(file.inlinks, ", "),
    "NA"
  ) as "Mentions"
FROM "01-Languages"
```

