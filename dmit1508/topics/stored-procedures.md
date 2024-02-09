---
layout: page
title: SQL Stored Procedures
---

## Topics on this page:
* [Variables](#variables)
* [Flow Control](#flowcontrol)
* [Stored Procedures](#procedures)
* [Raising Errors](#errors)
* [Global Variables](#global)
* [DML Logic](#logic)

## <a ID="variables">Variables</a>
* Variables are used to hold values.
* Variables must be declared before they can be used.
* Variables can be assigned a literal value or a value from a query.
  * To assign **a literal to a single variable**, use `SET`.
  * To assign **literal values to many variables**, use `SELECT`.
  * To assign **values from a query**, use `SELECT`.

### Declaring Variables

```sql
DECLARE 
  @VariableName datatype,
  @VariableName datatype,
  @VariableName datatype
...
```

### Assigning Values

```sql
DECLARE @FirstName VARCHAR(40)
SET @FirstName = 'Allan'
```

```sql
DECLARE @FirstName VARCHAR(40),
        @LastName VARCHAR(40)
SELECT  @FirstName = 'Allan',
        @LastName = 'Anderson'
```

```sql
DECLARE @FirstName VARCHAR(40)
SELECT  @FirstName = FirstName 
  FROM Staff 
  WHERE StaffID = 1
```

```sql
DECLARE @FirstName VARCHAR(40),
        @LastName VARCHAR(40)
SELECT  @FirstName = FirstName,
        @LastName = LastName
  FROM Staff
  WHERE StaffID = 1
```

## <a ID="flowcontrol">Flow Control</a>
We can use `IF ELSE` statements to write code that is only executed in a certain condition.

### Controlling the flow of SQL

```sql
IF condition
    BEGIN
        statements -- this only runs if condition is true
    END
ELSE
    BEGIN
        statements -- otherwise this runs
    END
```

**Example**:

```sql
DECLARE @Total INT, @Result VARCHAR(10)
SET @Total = 100
IF @Total = 100
    BEGIN
        SET @Result = 'IS'
    END
ELSE
    BEGIN
        SET @Result = 'IS NOT'
    END
PRINT 'The total ' + @Result + ' 100.'
```

### PRINT
This is **not** how we should return messages to the user: it is primarily used for testing/debugging.

### IF EXISTS

```sql
IF EXISTS (SELECT * FROM Staff WHERE StaffID = 5)
    BEGIN
        PRINT 'There is a record for that StaffID'
    END
ELSE
    BEGIN
        PRINT 'There is NOT a record for that StaffID'
    END
```

### Batches & GO
A **batch** is a **series of SQL statements**.

`GO` is a batch terminator. It causes the batch to go to the server for execution.

It is recommended to use `GO` between batches to ensure they work properly: for example, if we are changing a `CONSTRAINT` and then running a related `INSERT`, I want to make sure my `CONSTRAINT` is in place before `INSERT`ing, so I will put them in separate **batches**.

## <a ID="procedures">Stored Procedures</a>
A **stored procedure** is a **set of SQL statements**. They are compiled into machine language and stored in the database.

After it has been created, a Stored Procedure can be executed without having to be re-compiled each time as a script would.

```sql
CREATE PROCEDURE ProcedureName AS
SQL statements go here
RETURN
```

Stored procedures can include (but are not limited to):
* DML statements
* Flow control
* Transactions
* Exception handling
* `SELECT` statements
* Variable declarations & assignments

### Updating Stored Procedures
You cann use either:
* `DROP` the stored procedure then recreate it:<br>

```sql
DROP PROCEDURE ProcedureName
```

* Use an `ALTER` statement to update it.<br>

```sql
ALTER PROCEDURE ProcedureName
SQL statements go here
RETURN
```

### Executing & Viewing Stored Procedures
To execute:

```sql
EXEC ProcedureName
```

To view the statements in a stored procedure:

```sql
EXEC sp_helptext ProcedureName
```

### Parameters

```sql
CREATE PROCEDURE LookupStudent (@StudentID INT) AS
SQL statements
RETURN
```

In this class, we will **always** give a default value to our parameters:

```sql
CREATE PROCEDURE LookupStudent (@StudentID INT = NULL) AS
SQL statements
RETURN
```

### Executing a Stored Procedure with parameters
Parameters are passed by listing them after the procedure name, separated by commas.

```sql
EXEC LookupStudent 2001234
```

**Example**:

```sql
CREATE PROCEDURE LookupStudent (@StudentID INT = NULL)
AS
IF @StudentID IS NULL
    BEGIN
        PRINT 'Missing StudentID'
    END
ELSE
    BEGIN
        -- DO SOMETHING
    END
RETURN
```

## <a ID="errors">Raising Errors</a>
`RAISERROR` lets us send error messages back to the user.

In this class we will always use a severity of `16` and a state of `1`.

```sql
RAISERROR('A parameter is missing', 16, 1)
```

## <a ID="global">Global Variables</a>
* `@@ERROR` returns the **error code for the last statement** executed.
  * If the last statement did not error, it has a value of 0.
  * We will check it after each DML statement so we can raise an error if it failed.
* `@@IDENTITY` returns the **last-inserted identity value**.
* `@@ROWCOUNT` returns the **number of rows affected** by the last statement.

## <a ID="logic">DML Logic</a>
### DML Structure
DML statements in our stored procedures should follow this structure:
1. DML statement
2. Check if the DML statement failed<br>
    <ol type="a">
        <li>If it did, raise an error with a "nice" message.</li>
    </ol>

```sql
CREATE PROCEDURE AddClub (
    @ClubID VARCHAR(10) = NULL, @ClubName VARCHAR(50) = NULL)
AS
IF @ClubID IS NULL OR @ClubName IS NULL
    BEGIN
        RAISERROR ('You must provide a ClubID and ClubName',16,1)
    END
ELSE
    BEGIN
        INSERT INTO CLUB (ClubID,ClubName) VALUES (@ClubID,@ClubName)
        IF @@ERROR <> 0
            BEGIN
                RAISERROR ('Club Insert Failed',16,1)
            END
    END
RETURN
```

```sql
CREATE PROCEDURE AddPaymentType (
    @PaymentTypeDescription VARCHAR(40) = NULL)
AS
IF PaymentTypeDescription IS NULL
    BEGIN
        RAISERROR ('You must provide a Payment Type Description',16,1)
    END
ELSE
    BEGIN
        INSERT INTO PaymentType (PaymentTypeDescription)
		VALUES (@PaymentTypeDescription)
        IF @@ERROR <> 0
            BEGIN
                RAISERROR ('Payment Type Insert Failed',16,1)
            END
        ELSE
            BEGIN
                SELECT @@IDENTITY AS 'New Payment Type ID'
            END
    END
RETURN
```

```sql
CREATE PROCEDURE DeleteClub (@ClubID VARCHAR(10) = NULL)
AS
IF @ClubID IS NULL
    BEGIN
        RAISERROR ('You must provide a ClubID',16,1)
    END
ELSE
    BEGIN
        IF NOT EXISTS (SELECT * FROM Club WHERE ClubID = @ClubID)
            BEGIN
                RAISERROR ('That Club does not exist',16,1)
            END
        ELSE
            BEGIN
                DELETE FROM Club WHERE ClubID = @ClubID
                IF @@ERROR <> 0
                    BEGIN
                        RAISERROR ('Club Insert Failed',16,1)
                    END
            END
    END
RETURN
```

#### [DMIT1508 Home](../)