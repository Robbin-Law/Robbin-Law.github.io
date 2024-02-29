This is a small Holistic business that performs spa-like sessions for its customers. The business is growing and has a plan to move into a bigger space. Currently the owner is doing all tasks (booking, session, sales, accounting).
The new space will have an internal receptionist that interacts directly with a new computerized system with a database. Also, an external part-time bookkeeper will be hired. The bookkeeper will require information from the new computer system to be able to complete bookkeeping tasks.
To have the capital to take on this expansion the owner has found 3 investors (Paul Williams, Sharon Cloek, and Kassandra Pi). They are merely investors and will have no say in the running of the business but will receive free products and services for the first 3 years or until their investment has been paid back. Payments are monthly if profit is more than 12%.
Our new location is in a mall that has a hair dressing shop, Hair and Self Care, that also provides spa services.
The current system has the owner using Schedule-Me for appointments, a ledger book for sales and expenses, and a filing cabinet for customer information.
Here is what the owner sees for processes once the new shop is open.
1.  The scheduling and completing of appointments:
  - a.	The client calls in for a booking time.
  - b.	The receptionist will look up the clients account to see if they are an existing client or new, for existing clients reception will pull the session package info from the session package file.
  - c.	The client will find a suitable time through the receptionist suggesting open times and the client accepting or rejecting.
  - d.	Confirmation of booking time will be sent to the client and the schedule file will be updated.
  - e.	If the client does not have a session package, reception will suggest the purchase of one. If the client does have a session package, reception will tell the client how many sessions they have left from that package.

2.	Perform session:
  - a.	Client checks in with reception.
  - b.	Reception pulls client history and appointment info to ensure the client is there at the right time and day.  Reception validates the client info with the client and updates the records as needed.
  - c.	Reception places a paper record about the client outside the door for the owner to review prior to the session.
  - d.	The owner performs the session and makes notes on the record that is then given to the receptionist to enter into the system.
 
3.	Pay for services:
  - a.	A client will either pay for services or purchase packages of sessions. When session packages are purchased, reception will ask who referred them.
  - b.	If there is a referral, reception will look up the referring client and add a new credit to the client. The reason we track this is because a client who refers 2 friends who purchase packages will receive a free session. There is a referral status flag (None, One, Free). This status is updated to indicate their new referral status.
  - c.	In cases of payment for session, reception pulls the session info and then will figure out:
    - i.	If client is in a package they can use for this session payment.
    - ii.	If the client has enough referrals to get a free session.
    - iii.	If there was any “add-on’s” to the session that they need to be charged for.
    - iv.	If the client is also an investor the session may be free.
  - d.	Based on the above info reception will update the client and session package files and relay the cost information to the client.
  - e.	Reception will take payment and give a receipt to the client.

4.	Monthly processes:
  - a.	Bookkeeping monthly duties:
    - i.	Reception pulls listing of all income and expenses, investor info and rental data (renter info and dates used) and forwards to bookkeeper.
    - ii.	Once calculated the bookkeeper creates investor payment cheques and sends to investors if profits exceed 12%.
    - iii.	GST payments are calculated and paid.
    - iv.	Investor and GST info are returned to reception for filing.
  - b.	Reception updates investor payment in sales, updates investor balance and GST payment info.
  - c.	Package usage check:
    - i.	Reception will look up who has not used a package in more than 30 days and send out a email reminder. They then record this contact under the client info area. This may prompt a client to book an appointment.
  - d.	The spa also has 1 room they will rent out to people to use for a variety of purposes (card readings, massage, other modalities).  The management of the booking is outside of the scope of this project, but the request for payment is done as a monthly process.  The bookkeeper will use the data sent from the receptionist to generate and send a bill to the renters.  They will then send the information back to the receptionists who will file it in the rental file.
