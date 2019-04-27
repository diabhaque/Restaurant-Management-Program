# Restaurant-Management-Program
Computer Programming 2 Course Code ENGG1340 Group 38 Project

## The Problem We Are Trying To Solve
We are planning to make a restaurant management system to handle table reservations and food ordering.

## How Does Our Program Set Up A Restaurant?
It begins with setting up a specific restaurant. Which, according to user input, records the number of tables and the seating capacity of each table. We then set up a menu through input from a file or manual input that contains all info about the menu including prices. The number of items in the menu must be stated before it one can use a file to input the values. A sample of how the file should be designed is shown through the "menutestfile.txt". The menu is an array of structs called food which stores the food name (which will have no spaces), the food price and the waiting time on it. These inputs are assumed to be from the restaurant manager/owner. The program is then able to display the tables and the menu on command.

## How Does Our Program Implement A System For Customers?
* We allow customers to book a table.
* They input the number of seats they need. And we assign them a suitable table and the table will be occupied.
* We then take orders from that table and we allow them to order as many items as they want.
* Once they're done ordering, their given their bill and a customer number which is necessary for checking out.
* The program then allows other people to check in as long as there're enough tables.
* Once they're done eating, they checkout. They enter their customer no. and we show them their bill. After they've checked out, the occupied table will become free again
* All the earnings are added from each customer and can be viewed from the command.

## How Does Our Program Fulfill The Requirements Of The Project?
The menu can be uploaded from a file, so File I/O will be implemented. Searching for available tables will be done. Adding/editing/deleting will be implemented in both tables and customer orders. We have dynamic memory management with arrays of structs. We've used multiple files for separate functions like menu.cpp, TableManagement.cpp, finance.cpp, etc. The in-code documentation is done before almost every function describing how they work. We've also made a make file to allow the compilation to be simpler and more efficient. The code will be efficiently documented so that it is easy to understand.
