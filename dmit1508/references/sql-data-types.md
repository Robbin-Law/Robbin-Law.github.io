---
layout: page
title: DMIT1508 SQL Data Types
---
## String Data Types

Data Type | Description | Max Size
----------|-------------|---------
`CHAR(n)` | Fixed width characater string | 8,000 characters
`VARCHAR(n)` | Variable width character string | 8,000 characters
`VARCHAR(max)` | Variable width character string | 1,073,741,824 characters
`TEXT` | Variable width character string | 2GB of text data
`NCHAR(n)` | Fixed width Unicode string | 4,000 characters
`NVARCHAR(n)` | Variable width Unicode string | 4,000 characters
`NVARCHAR(max)` | Variable width Unicode string | 536,870,912 characters
`NTEXT` | Variable width Unicode string | 2GB of text data
`BINARY(n)` | Fixed width binary string | 8,000 bytes
`VARBINARY` | Variable width binary string | 8,000 bytes
`VARBINARY(max)` | Variable width binary string | 2GB
`IMAGE` | Variable width binary string | 2GB

## Numeric Data Types

Data Type | Description 
----------|------------
`BIT` | Integer that can be 1, 0, or `NULL`
`TINYINT` | Allows whole numbers from 0 to 255
`SMALLINT` | Allows whole numbers between -32,768 and 32,767
`INT` | Allows whole numbers between -2,147,483,648 and 2,147,483,647
`BIGINT` | Allows whole numbers between -9,223,372,036,854,775,808 and 9,223,372,036,854,775,807
`DECIMAL(p,s)` | Fixed precision and scale numbers<br>Allows numbers from -10^38 +1 to 10^38 –1<br>The `p` parameter indicates the maximum total number of digits that can be stored (both to the left and to the right of the decimal point). `p` must be a value from `1` to `38`. Default is `18`.<br>The `s` parameter indicates the maximum number of digits stored to the right of the decimal point. `s` must be a value from `0` to `p`. Default value is `0`
`NUMERIC(p,s)` | Fixed precison and scale numbers<br>Allows numbers from -10^38 +1 to 10^38 –1.<br>The `p` parameter indicates the maximum total number of digits that can be stored (both to the left and to the right of the decimal point). `p` must be a value from `1` to `38`. Default is `18`.<br>The `s` parameter indicates the maximum number of digits stored to the right of the decimal point. `s` must be a value from `0` to `p`. Default value is `0`
`SMALLMONEY` | Monetary data from -214,748.3648 to 214,748.3647
`MONEY` | Monetary data from -922,337,203,685,477.5808 to 922,337,203,685,477.5807
`FLOAT(n)` | Floating precision number data from -1.79E + 308 to 1.79E + 308.<br>The `n` parameter indicates whether the field should hold 4 or 8 bytes. float(24) holds a 4-byte field and float(53) holds an 8-byte field. Default value of n is `53`.
`REAL` | Floating precision number data from -3.40E + 38 to 3.40E + 38

## Date and Time Data Types

Data Type | Description 
----------|------------
`DATETIME` | From January 1, 1753 to December 31, 9999 with an accuracy of 3.33 milliseconds
`DATETIME2` | From January 1, 0001 to December 31, 9999 with an accuracy of 100 nanoseconds
`SMALLDATETIME` | From January 1, 1900 to June 6, 2079 with an accuracy of 1 minute
`DATE` | Store a date only. From January 1, 0001 to December 31, 9999
`TIME` | Store a time only to an accuracy of 100 nanoseconds
`DATETIMEOFFSET` | The same as datetime2 with the addition of a time zone offset
`TIMESTAMP` | Stores a unique number that gets updated every time a row gets created or modified. The timestamp value is based upon an internal clock and does not correspond to real time. Each table may have only one timestamp variable

#### [References Home](index.md)
#### [DMIT1508 Home](../)