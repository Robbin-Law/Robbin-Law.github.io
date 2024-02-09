---
layout: page
title: DDL - ALTER and Indexes
---

## Topics on this page:
* [ALTER TABLE](#alter)
* [Indexes](#indexes)

## <a ID="alter">ALTER TABLE</a>
The `ALTER TABLE` statement is used to:
* Add a column to an existing table
* Modify the datatype or null status of an existing column
* Modify the seed and increment value of an existing identity property
* Drop an existing column
* Add a constraint to an existing column / table
* Drop an existing constraint
* Disable or enable an existing constraint (foreign key or check only; you cannot disable/enable a default or primary key constraint)
* Disable or enable an existing database trigger

### Syntax

```sql
[ WITH { CHECK | NOCHECK } ]
{
  [ { CHECK | NOCHECK } CONSTRAINT  ConstraintName]
    | [ ADD ColumnName column_properties [column_constraints ]
    | [ ADD TableConstraint] 
    | [ ( ALTER ColumnName
      { datatype {NULL|NOT NULL} | IDENTITY (seed, increment) 
        | DROP DEFAULT | SET DEFAULT expression} ) ]
    | [ DROP COLUMN ColumnName]
    | [ DROP CONSTRAINT ConstraintName]
    | [ {ENABLE | DISABLE } TRIGGER TriggerName]
}
```

**Examples**:
To add a `Semester` to the `Marks` table:

```sql
ALTER TABLE Marks
  ADD Semester     CHAR(1)              NULL
```

To add the `Semester` column to the `Marks` table and make it a `FK` referencing the `Schedule` table:

```sql
ALTER TABLE Marks
  ADD Semester     CHAR(1)              NULL
    CONSTRAINT FK_MarksToSchedule
    REFERENCES Schedule (Semester)
```

### Important Notes:
1. When adding a new column to an existing table, your new column must accept `NULL` or have a `DEFAULT CONSTRAINT`.
2. If the table is empty, you can add a column that is `NOT NULL`.

**Examples**:
To add a `FK` constraint to the existing `CourseID` column in the `Marks` table, making it reference the `Courses` table:

```sql
ALTER TABLE Marks
  ADD CONSTRAINT FK_CourseId 
    FOREIGN KEY (CourseId) 
    REFERENCES Courses (CourseId)
```

To add a check constraint to the existing `PhoneNo` column in the `Students` table to ensure the phone number is in the format `(nnn) nnn-nnnn`:

```sql
ALTER TABLE Students
  ADD CONSTRAINT CK_PhoneNo
    CHECK (PhoneNo LIKE '([0-9][0-9][0-9]) [0-9][0-9][0-9]-[0-9][0-9][0-9][0-9]')
```

To add a default constraint to the existing `OrderDate` column in the `Sales` table to default to the current date:

```sql
ALTER TABLE Sales
  ADD CONSTRAINT DF_OrderDate DEFAULT GETDATE() FOR OrderDate
```

To disable the check constraint named `CK_PhoneNo` in the `Students` table:

```sql
ALTER TABLE Marks
  NOCHECK CONSTRAINT CK_PhoneNo
```

To enable the default constraint named `CK_PhoneNo` in the `Students` table:

```sql
ALTER TABLE Students
  CHECK CONSTRAINT CK_PhoneNo
```

To delete the default constraint named `DF_Mark` from the `Marks` table:

```sql
ALTER TABLE Marks
  DROP CONSTRAINT DF_Mark
```

## <a ID="indexes">Indexes</a>
An index is an object stored in the db. It is associated with 1 or more columns, in a specific table, that act as **the key for the index**. This helps the DBMS look up (retrieve) the data quicker.

**Index Example**:
We could create an index for the `Employee` table, using the `EmployeeID` column as the key.

Each row in the `Employee` table would have an entry in the index, with `EmployeeID` defining the order in which the entries are maintained in the index.

Each entry in the index contains info (pointers) to where the associated row in the `Employee` table is located. The DBMS uses this info to speed up its retrieval of data.

### Types of Indices
There are 2 types in indices:
* **Clustered**:
  * A table has its rows physically stored in the same order as the order of the entries. (Therefore, one clustered index per table.)
  * The `PK` is often the key.
* **Non-clustered**:
  * Provides a method to use a 2nd-hand criteria for quickly finding/retrieving rows.
  * For example: we could define a non-clustered index for the `Employee` table that uses the `DepartmentNumber` as the key. The DBMS uses this to quickly retrieve the rows of employees who work for a specific department.
  * We can have a max of 249 non-clustered indexes per table.

### Considerations
* Indexes **speed up data retrieval**, but **slow down operations** to modify data in a table.
* Consider a table with a clustered index and 3 non-clustered indices:
  * To insert a new row, the DBMS must add the row AND update four indices.
  * To update a row: the DBMS deletes the old row, updates each index, adds a new row, and updates each index again. Updating the index might mean adding/deleting several items.
  * That is a lot of overhead!

### Choosing a Key
* Since we can only have one clustered index, how do we choose?
* By default, the clustered index is created using the `PK` of the table. In many instances, this is the best choice. If another column is frequently used in the `ORDER BY` clause, or passed to the `COUNT`, `MIN`, or `MAX` aggregate functions, it is also a good candidate.
* Some designers create a non-clustered index for each `FK`. This increased overhead needs to be weighed against the improved performance of retrieving data.

### Syntax

```sql
CREATE [UNIQUE] [ CLUSTERED | NONCLUSTERED ] INDEX IndexName
ON TableName ( ColumnName [ ASC | DESC] [, …n] )
```

The **column name** is the key for the index (one or more columns may act as the key). All indexes must have a unique name. We normally use the prefix `IX` when naming an index.

**Examples**:
To create a non-clustered index associated with the `Marks` table using `CourseID` (a `FK` referencing the `Course` table) as the index key:

```sql
CREATE NONCLUSTERED INDEX IX_CourseId ON Marks (CourseId)
```

To drop a non-clustered index:

```sql
DROP INDEX IX_CourseID ON Marks
```

#### [DMIT1508 Home](../)