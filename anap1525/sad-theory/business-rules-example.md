---
layout: page
title: Business Rules Example
---

In a hotel system, the reception clerk will check in a guest.
The reception clerk will look up the guest reservation.
A guest can only check in if they have a reservation.
Once found the reception clerk will verify the guest details, including those of the guest demographics and reservation information.
The reception clerk works a 12 hour shift every day.
If it is past 1pm the reception clerk will do a regular check in for the guest.
If it is earlier than 1pm the reception clerk will charge the guest $35 for early check in.
If a reservation is not found as the guest is a walk in, a reservation is created in the system if there is availability.

Which of the following statements are valid business rules, and which are not?

- Check in starts at 1pm otherwise a fee is charged. YES
- The reception staff work 12 hour shifts. NO
- A reservation is required prior to check in. YES
- The reception clerk looks up a reservation. NO

#### [Theory Home](index.md)
#### [ANAP1525 Home](../index.md)