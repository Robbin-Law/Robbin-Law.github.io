---
layout: page
title: SQL Queries
---

## Topics on this page:
* [Queries](#queries)
* [UNION](#union)
* [Aggregate Functions](#aggregate)
* [JOINs](#joins)
* [Subqueries](#subqueries)

## <a ID="queries">Queries</a>
Queries are used to retrieve data from the database. We can choose which columns we want to see, which rows we want, and which aggregate calculations we want. Queries are written with a `SELECT` statement.

### Query Syntax

```sql
SELECT [ALL | DISTINCT] ColumnList	
  [INTO [NewTableName]]
  [FROM TableName] 
  [INNER, FULL OUTER, LEFT OUTER, RIGHT OUTER JOIN]
  [WHERE clause] 
  [GROUP BY clause] 
  [HAVING clause] 
  [ORDER BY clause] 
  [COMPUTE clause]
```

### Simple Queries
A simple query can select data from one table. It can select many rows, calculated data, or even hard coded data.

We can do mathematical calculations (`SubTotal * 1.05`) or combine strings (`FirstName + ' ' + LastName`), or both (`'total: ' + SubTotal * 1.05`).


### WHERE
What if we only want to return certain records?

```sql
SELECT FirstName, LastName 
  FROM STUDENT
  WHERE City = 'Edmonton'
```

### Search Criteria Operators
* `=` is used when looking for an exact match
* `<>` or `!=` is used for something that does **NOT** match
* Other operators we can use include `<`, `<=`, `>`,and  `>=`
* `AND` is used if both expressions must be true
* `OR` is used if either expression must be true
* `BETWEEN` returns all records between 2 values (inclusive)
* `IN` lets you list a number of values
* `NOT BETWEEN`, `NOT IN`, …
* `LIKE` 

## <a ID="union">UNION</a>
The `UNION` operation lets you combine the data retrieved by multiple `SELECT` statements:

```sql
SELECT ...
UNION [ALL]
SELECT ...
```

## <a ID="aggregate">Aggregate Functions</a>

```sql
aggregate_function_name ([ ALL | DISTINCT ] expression)
```

* `AVG` returns the average of numeric values. `NULL` is ignored.
* `SUM` returns the sum of a column containing numeric values.
* `MIN` and `MAX` returns the minimum & maximum values from a column of numeric, date, or character values.
* `COUNT` returns the number of non-null values _OR_ the number of records that match the WHERE criteria.

### ALL and DISTINCT
`ALL` and `DISTINCT` can be in a query or with a `COUNT` function. `ALL` is the default and usually not explicitly declared.

`DISTINCT` removes any duplicate rows from the query results. When `DISTINCT` is used with the `COUNT` function it only counts the unique values.

### GROUP BY
The `GROUP BY` clause is used with aggregate functions to provide subtotals. For example:

```sql
SELECT CourseID, AVG(Mark) AS AverageMark
  FROM Registration
  GROUP BY CourseID
```

This calculates the average mark per course.

### HAVING
`HAVING` is like the `WHERE` clause, except it applies its criteria after `GROUP BY`. For example:

```sql
SELECT CourseID, AVG(Mark) AS AverageMark
  FROM Registration
  GROUP BY CourseID
  WHERE AVG(Mark) > 80
```

However, the following will work:

```sql
SELECT CourseID, AVG(Mark) AS AverageMark
  FROM Registration
  GROUP BY CourseID
  HAVING AVG(Mark) > 80
```

### ORDER BY
The `ORDER BY` clause sorts by one or more columns, in `ASC`ending or `DESC`ending order (`ASC` is the default).

```sql
SELECT FirstName, LastName
  FROM Student
  ORDER BY FirstName ASC, LastName DESC
```

### String Functions
* `LEN(column | expression)` 
* `LEFT(column | expression, length)` 
* `RIGHT(column | expression, length)` 
* `SUBSTRING(column | expression, start, length)` 
* `REVERSE(column | expression)` 
* `UPPER(column | expression)` 
* `LOWER(column | expression)` 
* `LTRIM(column | expression)` 
* `RTRIM(column | expression)` 

### Date Functions
* `GETDATE()` returns the system date
* `DATEADD(xx, n, date1)` adds `n` `xx` to `date1` (`n` may be negative)
* `DATEDIFF(xx, date1, date2)` returns the number of `xx` from `date1` to `date2`
* `DATENAME(xx, date1)` returns string representation of the `xx` of `date1`
* `DATEPART(xx, date1)` returns integer representation of the `xx` of `date1`
  * `YEAR(date1)` functions the same as `DATEPART(yy, date1)`
  * `MONTH(date1)` functions the same as `DATEPART(mm, date1)`
  * `DAY(date1)` functions the same as `DATEPART(dd, date1)`

Where `xx` represents `DATEPART`

DATEPART | Abbreviation | Minimum | Maximum
---------|--------------|---------|---------
Year | `yy` | 1753 | 9999
Quarter | `qq` | 1 | 4
Month | `mm` | 1 | 12
Week | `wk` | 1 | 53
Day of year | `dy` | 1 | 366
Weekday | `dw` | 1 (Sunday) | 7 (Saturday)
Day | `dd` | 1 | 31
Hour | `hh` | 0 | 23
Minute | `mi` | 0 | 59
Second | `ss` | 0 | 59
Millisecond | `ms` | 0 | 999

## <a ID="joins">JOINs</a>
How do we connect data in one table to its related record(s) in another?

```sql
SELECT field1, field2, … 
  FROM table1
  [INNER, FULL OUTER, …] JOIN table2
  ON table1.joinfield = table2.joinfield
```

### Types of JOINs
![join-types.png](images/join-types.png)

* `INNER JOIN` returns only records that exist in both tables
* `FULL OUTER JOIN` returns all records that exist in either table
* `LEFT JOIN` returns all records in `table1`, regardless of whether they exist in `table2`
* `RIGHT JOIN` returns all records in `table2`, regardless of whether they exist in `table1`

### Selecting from 3+ tables

```sql
SELECT field1, field2, … 
  FROM table1
  INNER JOIN table2
  ON table1.joinfield = table2.joinfield
  INNER JOIN table3
  ON table.joinfield = table3.joinfield
  INNER JOIN table4
  ON table.joinfield = table4.joinfield
…
```

## <a ID="subqueries">Subqueries</a>
A subquery is a `SELECT` statement inside of another statement. It is a full and complete `SELECT` statement that could execute on its own.

There are nested and correlated subqueries, and in this course we will focus on nested subqueries only.

### ANY, SOME, and ALL Operators
What if want something other than an exact match?

```sql
WHERE StudentID IN (SELECT StudentID … )
```

`ANY` or `SOME` compares against any of the values:

```sql
WHERE Grade > SOME (SELECT Grade … )
```

`ALL` compares against all of the values:

```sql
WHERE Grade > ALL (SELECT Grade …)
```

#### [DMIT1508 Home](../)