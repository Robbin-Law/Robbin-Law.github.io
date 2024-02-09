---
layout: page
title: SQL Transactions
---

## Topics on this page:
* [Transactions](#transactions)
* [Create Transactions](#create)

## <a ID="transactions">Transactions</a>
Transactions are SQL structures that ensure that a complete Logical Unit of Work is complete.

Let us consider an example of registering for a course:
1. Add a record to `Grade` table
2. Update student's `BalanceOwing`

What if #2 worked but #1 did not?

## <a ID="create">Create Transactions</a>
How do we create Transactions?
* `BEGIN TRANSACTION` **marks the beginning** of the transaction
* `COMMIT TRANSACTION` marks the end of the transaction, and **makes the changes permanent**.
* `ROLLBACK TRANSACTION` marks the end of the transaction, and **"undoes" the changes**; we go back to the state we were in when the transaction began.

**Examples**:

```sql
BEGIN TRANSACTION -- starts the transaction

SELECT * FROM Registration -- See the data in the table
DELETE FROM Registration 
-- Delete all the records in the table

ROLLBACK TRANSACTION -- "undo" the transaction

SELECT * FROM Registration
 	-- see that the records are still there!
```

```sql
BEGIN TRANSACTION -- starts the transaction

SELECT * FROM Registration -- See the data in the table
DELETE FROM Registration 
-- Delete all the records in the table

COMMIT TRANSACTION 
-- make the transaction permanent

SELECT * FROM Registration -- no more registrations
```

### Putting it all together ...
_**Note**: You will need to review the [Stored Procedures](topics/stored-procedures.md) notes._

Creating an Stored Procedure to register a student:
* Check to see if parameters are `NULL`. If so, `RAISERROR`.
Otherwise:
  * `BEGIN TRANSACTION` 
  * `INSERT INTO Registration`
  * Check if the `INSERT` failed. If so, `RAISERROR` & `ROLLBACK`.
  * Otherwise:
    * `UPDATE Student.BalanceOwing`
    * Check if the `UPDATE` failed. If so, `RAISERROR` & `ROLLBACK`.
    * Otherwise, `COMMIT`.

#### [DMIT1508 Home](../)