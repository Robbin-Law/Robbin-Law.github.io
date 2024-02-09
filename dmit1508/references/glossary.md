---
layout: page
title: DMIT1508 Glossary
---

## A
* **Attributes** are pieces of data that describe an entity. For example, a _Customer_ entity may have the following attributes: customer number, last name, first name, address, and phone number.
<br><br>
Attributes are either _atomic_ or _composite_. Composite attributes are attributes that could be sub-divided. For example, _CustomerName_ is composite, but _CustomerFirstName_ and _CustomerLastName_ would be atomic.
<br><br>
_Derived_ attributes are those that are not actually stored in the database, but could be calculated, like _OrderAmount_ could be derived by multiplying Quantity and Price.

## C
* **Cardinality** refers to the number of instances of one entity that are associated with an instance of another entity.
<br><br>
In general, there may be one-to-one, one-to-many, or many-to-many relationships. 

## D
* Attributes have a **data type** which describes the kind of data it can hold (e.g. numeric).
* Attributes also have a **domain** which are the legitimate values it can hold (e.g., “greater than zero”).

## E
* An **entity** is a person, place, thing, or concept. Also called an entity class or entity type.
<br><br>
_Associative entities_ are entities which connect two other entities who have a many:many relationship, and they usually contain the primary key attributes of both the other entities.

## F
* A **Foreign Key (FK)** is how we define relationships between entities. A foreign key is the primary key of another entity (the parent) that appears as an attribute of this entity (the child).

## O
* **Ordinality** relates to whether an entity is mandatory or optional with another associated entity. 

## P
* **Primary Key**s are unique identifiers for each instance of an entity. Sometimes there is not a naturally occuring identifier, so we make one up. These are called _technical_ keys, and are created in SQL using `IDENTITY`.
<br><br>
A combination of 2 or more attributes acting as the primary key is called a _concatenated key_ or _composite key_.

## R
* A **relationship** is the association that describes the interaction between entities. 

#### [References Home](index.md)
#### [DMIT1508 Home](../)
