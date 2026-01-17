#codewars/collection
{{date:MM-DD-YYYY}}
[Link :: link]

## Description
---
{{description}}

{{organize dataview table below to include problems in this collection}}

```dataview
TABLE
Date as "Created",
filter(file.tags, (tag) => endswith(tag, "kyu")) as "Kyu",
filter(file.tags, (tag) => contains(tag, "codewars/collection/")) as "Collection",
Link
FROM "08-CodeWars/Kata" AND #codewars/collection
SORT filter(file.tags, (tag) => endswith(tag, "kyu")) asc
```
