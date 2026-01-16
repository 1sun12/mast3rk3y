```dataview
TABLE
  date as "Created",
  choice(
    length(file.inlinks) > 0,
    join(file.inlinks, ", "),
    "NA"
  ) as "Mentions", Link
FROM "a"
```

## Needs Tag!
```dataview
TABLE
FROM "a"
WHERE length(file.tags) = 0
```

## Needs Date!
```dataview
TABLE
FROM "a"
WHERE !Date
```