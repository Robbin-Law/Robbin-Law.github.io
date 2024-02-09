---
layout: page
title: SQL Views
---

## SQL Views
* Simplify data retrieval from complex queries
* Hiding the underlying table structure
* Controlling access to data for different users

### Data Modification
* Modifying records through a view must meet all rules/constraints on the table(s) the view is based on.
* An `INSERT` or `UPDATE` from a view cannot affect more than one table in the view.
* You cannot `DELETE` from a view that is based on more than one table.
* If the `SELECT` statement contains `GROUP BY`, `DISTINCT`, `TOP`, or `UNION`, you cannot modify data in that view.

### Syntax

```sql
CREATE VIEW ViewName
AS
SELECT …
```

Retrieving the definition:

```sql
SP_HELPTEXT ViewName
```

### Altering or Dropping Views

```sql
ALTER VIEW ViewName
AS
SELECT …
```

```sql
DROP VIEW ViewName
```

#### [DMIT1508 Home](../)