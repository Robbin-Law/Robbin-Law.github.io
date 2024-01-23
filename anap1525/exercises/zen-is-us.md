---
layout: page
title: Zen is Us Yoga Scheduling System
---

The local yoga studio `Zen Is Us` has a class schedule system.  Zen Is Us runs a beginner class when there are enough interested students.  This class is always offered on a Monday at 10am.  

Students will submit a class request by sending us an email.  Upon receipt of an email the receptionist will add the students registration info to the Registration data store.  

At noon every day she will check the Registration data store to see if there are more than 15 students looking for a beginner class.  If there is, the receptionist will look up the availability of studio space from the Studio-Schedule data store, and if a studio is available she will book the studio space for the upcoming Monday at 10am with another system.  Once the studio booking is confirmed, she will update the Studio-Schedule data store to reflect the fact that the booked studio is no longer available on that particular Monday at 10am. Next, she will search for a teacher.  There is a list of teachers available to teach this class.  She will look up their phone number and start calling to see who would like to teach this course.  Each possible teacher will accept or reject the offer to teach the course. Once she has a teacher confirmed, she will create a new class list of students and teacher.  She will also change the statuses of the students registration info to "scheduled" in the Registration data store.

The next day she will send confirmation emails to the students and send the class list info to the teacher.


<hr>

## Required: SDLC (System Development Life Cycle)
1.	`ADEPT` (Activities, Data, Environment, People, Technology) Framework 
2.	`Context DFD` (Data Flow Diagram)
3.	`System DFD` (Data Flow Diagram)
4.	`System Level Data Flow Narratives`
5.	`ERD` (Entity Relationship Diagram)

<hr>

#### [Exercise Home](index.md)