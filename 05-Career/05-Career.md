#hallway
[Date :: 05-27-2025]

```dataview
TABLE
  date as "Created",
  choice(
    length(file.inlinks) > 0,
    join(file.inlinks, ", "),
    "NA"
  ) as "Mentions", Link
FROM "05-Career"
```

## Needs Tag!
```dataview
TABLE
FROM "05-Career"
WHERE length(file.tags) = 0
```

## Needs Date!
```dataview
TABLE
FROM "05-Career"
WHERE !Date
```