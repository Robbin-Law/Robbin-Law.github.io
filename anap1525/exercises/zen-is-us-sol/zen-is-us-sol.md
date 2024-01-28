---
layout: page
title: Zen is Us Yoga Scheduling System
---

The local yoga studio `Zen Is Us` has a class schedule system.  Zen Is Us runs a beginner class when there are enough interested students.  This class is always offered on a Monday at 10am.  

Students will submit a class request by sending us an email.  Upon receipt of an email the receptionist will add the class registration info to the system.  

At noon every day she will check if there are more than 15 students looking for a beginner class via existing registration info.  If there is, the receptionist will look for available studio space and then book the available studio space for the upcoming Monday at 10am.  Next, she will search for a teacher.  There is a list of teachers we will use for this class.  She will look up their phone number and start calling to see who is available to teach.  Once she has the teacher scheduled, she will create a new class list.  She will also change the statuses of the class registrations to "scheduled".

The next day she will send confirmation emails to the students and send the class list info to the teacher.


<hr>

## Required: SDLC (System Development Life Cycle)
1.	`ADEPT` (Activities, Data, Environment, People, Technology) Framework 
2.	`Context DFD` (Data Flow Diagram)
3.	`System DFD` (Data Flow Diagram)
4.	`System Level Data Flow Narratives`
5.	`ERD` (Entity Relationship Diagram)

<hr>

## SOLUTION

### ADEPT

Activities/Processes
- Student Registration (1.0)
- Class Registration (2.0)
- Confirmation (3.0)

Data (Information Sources)
- Registration
- Teacher
- Class List
- Studio Schedule

Environment
- Products/Services
  - Class Scheduling Management System
  - Competition - other yoga studios
- Nature of Industry
  - Year Round, Private

People
  - External
    - Student
    - Teacher
  - Internal
    - Reception

Technology
  - Mix of Manual and Electronic Processes

<hr>

![system-dfd](system-dfd.png)

<hr>

![context-dfd](context-dfd.png)

<hr>

#### [Exercise Home](../index.md)
