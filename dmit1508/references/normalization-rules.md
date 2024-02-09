---
layout: page
title: Normalization Rules
---
This is a quick reference for creating a 3NF database.

## Terms:
* **Repeating Group**: An attribute that cannot be uniquely identified by the Primary Key in the table.
* **Partial Dependency**: An attribute(s) that can be uniquely identified by just part of a tables composite Primary Key. A table must have a composite Primary Key for a Partial Dependency to exist.
* **Trasitive Dpendency**: Non key Attribute(s) that can be uniquely identified by another non key attribute. A table must have 2 or more non key attributes for a Transitive Dependency to exist.

## For Each View
1. **Create the initial Table**:<br>
    <ol type="a">
        <li>List all the attributes in the view</li>
        <li>Designate the Primary Key</li>
        <li>Show any repeating groups in parenthesis</li>
    </ol>
2.	**First Normal Form (all atomic attributes and no repeating groups)**:<br>
    <ol type="a">
        <li>If composite attributes exist replace them with atomic attributes</li>
        <li>If repeating groups exist:<br>
            <ol type="i">
                <li>Remove the repeating groups and place them in a new table</li>
                <li>Duplicate the Primary Key from the original table and place it in the new table as a Foreign Key joining the new table to the original table</li>
                <li>Designate a Primary Key for the new table</li>
            </ol>
        </li>
    </ol>
3.	**Second Normal Form (No Partial Dependencies)**:<br>
    <ol type="a">
        <li>If Partial Dependencies exist:<br>
            <ol type="i">
                <li>Remove the attribute(s) that could be uniquely identified by another non key attribute and place them in a new table</li>
                <li>Duplicate the non key field that could uniquely identify those attribute(s) and place it in the new table as the Primary Key</li>
                <li>The non key field that uniquely identified the attributes (the primary key in the new table) becomes a foreign key in the original table</li>
            </ol>
        </li>
    </ol>
4.	**Third Normal Form (No Transitive Dependencies)**:<br>
    <ol type="a">
        <li>If Transitive Dependencies exist:<br>
            <ol type="i">
                <li>Remove the attribute(s) that could be uniquely identified by another non key attribute and place them in a new table</li>
                <li>Duplicate the non key field that could uniquely identify those attribute(s) and place it in the new table as the Primary Key</li>
                <li>The non key field that uniquely identified the attributes (the primary key in the new table) becomes a foreign key in the original table</li>
            </ol>
        </li>
    </ol>

#### **It is possible to have more than one new table created in second and third normal form if there are multiple Partial or Transitive dependencies. Having more than one repeating group table from first normal form is only possible under certain circumstances since the repeating group table(s) will be directly related to the original table (which may not be the case according to the business rules).

## Merging Views
As you apply the rules of normalization to each view you will uncover more attributes and entities that need to be in the database. After each view has been normalized and you have a database schema (design) for each view you must merge them together to create the final database schema to satisfy the requirements of the organization.

Entities that have the same primary key must be merged into one table. Consider the example where you normalized 2 views and uncovered the following entities.

#### [References Home](index.md)
#### [DMIT1508 Home](../)