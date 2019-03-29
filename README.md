# Restaurant-Management-Program
Computer Programming 2 Course Code ENGG1340 Group 38 Project

## The Problem We Are Trying To Solve
We are planning to make a restaurant management system to handle table reservations and food ordering.

## How Does Our Program Set Up A Restaurant?
It begins with setting up a specific restaurant. Which, according to user input, records the number of tables and the seating capacity of each table. We then set up a menu through input from a file that contains all info about the menu including prices. The menu will most likely be an array of structs called food which stores the food name, the food price and the waiting time on it. These inputs are assumed to be from the restaurant manager/owner. The tabling system changes seasonally. Also, the system will be able to detect tables that have been occupied for too long.

## How Does Our Program Implement A System For Customers?
*We allow customers to book a table. 
*They input the number of seats they need. And we assign them a suitable table.
*We start a seperate process for each customer.
*We then take orders from that table for each person and store all this data in a class object or a struct. 
*They wait for the food
*They finish eating
*Once process ends, the table is free again.

## How Does Our Program Fulfill The Requirements Of The Project?
Most of the data will be stored in files, so File I/O will be implemented. Searching for available tables will be done. Customers will be sorted in queues. Adding/editing/deleting will be implemented in both tables and customer orders. The code will be efficiently documented so that it is easy to understand.
