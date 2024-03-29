---
layout: page
title: Up All Night Online School Inventory System
---

The Online school `Up All Night` has an inventory of books students will borrow for their courses.  These books are shipped to the student.

When a student registers for a class there is a list of books that go with each course. In the inventory file, there is a field that will designate which course the book is associated to. If a student creates a registration for a particular course, the system will pull up all active inventory items (books) associated with that course. A new book order is created for each book related to the course, when the student registers for classes for the school year. An invoice is sent to the student for all classes registered for. The student will pay for their registered courses. Upon payment a receipt is issued to the student, and the invoice is updated to a status of "paid". Also upon payment the registration info is to be updated to reflect that the student is registered, and each related book order is to be updated to a status of "ready to send".

Every morning, Shipping and Receiving will pull up the orders that are ready to be sent.  The order is picked, packed and shipped via shipping info in the registration file. The order status is then changed to "shipped". Inventory items are then updated to show which items are with a particular student. A separate system is used to order books from suppliers. Only when all books are available is an order filled and sent to a student.

When the year is done, the books are expected to be returned. They will arrive at the shipping and receiving office and the book bar code is scanned.  The student they are signed out to will come up. The book is evaluated and may be “written off” if not in good condition.  The student record is updated as having returned the book and the student is sent an email confirming receipt of the books.

<hr>

## Required: SDLC (System Development Life Cycle)
1.	`ADEPT` (Activities, Data, Environment, People, Technology) Framework 
2.	`Context DFD` (Data Flow Diagram)
3.	`System DFD` (Data Flow Diagram)
4.	`System Level Data Flow Narratives`
5.	`ERD` (Entity Relationship Diagram)

<hr>

#### [Exercise Home](index.md)