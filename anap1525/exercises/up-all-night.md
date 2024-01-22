---
layout: page
title: Up All Night Online School Inventory System
---

The Online school UP ALL NIGHT has an inventory of books students will borrow for their courses.  These books are shipped to the student.

When a student registers for a class there is a list of books that go with each course.  In the inventory file, there is a field that will designate which course the book is associated to.  If a student creates a registration for Social 20, the system will pull up all active inventory items associated with Social 20.  A new book order is created when the student registers for classes for the school year.  An invoice is sent to the student.  The student will pay for their courses, a receipt issued, then the book order can be processed when shipping and receiving start their process. 

Every morning, Shipping and Receiving will pull up the orders that are ready to be processed.  The order is picked, packed and shipped.  The order status is changed to shipped. Inventory items are then updated to show the items are with a particular student.

When the year is done, the books are expected to be returned.  They will arrive at the shipping and receiving office and the book bar code is scanned.  The student they are signed out to will come up.  The book is evaluated and may be “written off” if not in good condition.  The student record is updated as having returned the book and the student is sent an email confirming receipt of the books.

<hr>

## Required: SDLC (System Development Life Cycle)
1.	Apply the `ADEPT` (Activities, Data, Environment, People, Technology) Analysis Framework to this case
2.	Draw the `Context DFD` (Data Flow Diagram) for this case 
3.	Draw the `System DFD` (Data Flow Diagram) for this case 
4.	Write the `System Level Data Flow Narratives`
5.	Draw the `ERD` (Entity Relationship Diagram) for this case

<hr>

## SOLUTION

### ADEPT

Activities/Processes
- 1.0 book order creation
- 2.0 send orders
- 3.0 return books

Data (Information Sources)
- Registration
- Inventory
- Book Order
- Invoice

Environment
- Products/Services
  - Inventory Management System
  - Competition - other book stores
- Nature of Industry
  - Year Round, Private

- People
  - External
    - student
  - Internal
    - shipping and receiving

- Technology
  - Mix of Manual and electronic processes
#### [Exercise Home](index.md)
#### [ANAP1525 Home](../index.md)