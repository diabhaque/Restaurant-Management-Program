# Restaurant-Management-Program
Computer Programming 2 Course Code ENGG1340 Group 38 Project

## The Problem We Are Trying To Solve
We are planning to make a restaurant management system to handle table reservations and food ordering.

## How Does Our Program Set Up A Restaurant?
It begins with setting up a specific restaurant. Which, according to user input, records the number of tables and the seating capacity of each table. We then set up a menu through input from a file that contains all info about the menu including prices. The menu will most likely be an array of structs called food which stores the food name, the food price and the waiting time on it. These inputs are assumed to be from the restaurant manager/owner. The tabling system changes seasonally. Also, the system will be able to detect tables that have been occupied for too long.

## How Does Our Program Implement A System For Customers?
* We allow customers to book a table.
* They input the number of seats they need. And we assign them a suitable table.
* We start a seperate process for each customer.
* We then take orders from that table for each person and store all this data in a class object or a struct.
* They wait for the food
* They finish eating
* Once process ends, the table is free again.

## How Does Our Program Fulfill The Requirements Of The Project?
Most of the data will be stored in files, so File I/O will be implemented. Searching for available tables will be done. Customers will be sorted in queues. Adding/editing/deleting will be implemented in both tables and customer orders. The code will be efficiently documented so that it is easy to understand.

##Compilation and execution instructions
To compile and run, type:
```
make
./myrestaurant
```

##Setting up restaurant
First you will be prompted to enter the number of tables you want in your restaurant. This field will accept only integers.
Then, you will be prompted to enter the number of seats for each table. This field will accept only integers.
Then, you will be prompted to enter the number of items you want in your menu. If you will be fetching your menu from a text file, you still need to specify how many items the file contains.

##Menu Commands
At this stage, you will be given two options:

1. Manual:
You can enter the item name (please no spaces!), price in HKD, and preparation time in minutes for each item.

2. File:
You can specify the file path for your menu file. The files should contain lines following the following format:
```
food-name x y
```
where food-name is the name of the food (again, no spaces!), x is price in HKD, and y is preparation time in minutes.
There should not be empty lines between lines.
We have included a test file "menutestfile.txt" as an example input case.

##Restaurant commands
After initiating the restaurant and the menu, you will see new available commands:

1. Check-in:
Lets customers specify the number of people in their group.
Suggests best possible table choice
Brings up the menu and lets customer choose items
Prints a receipt for the customer

2. Check-out:
Lets customers check out by specifying their receipt number.
Adds revenue to the restaurant's balance

3. Display tables:
Displays a layout of the tables.
Tables show an 'X' if they're occupied, otherwise they show the number of seats.

4. Display menu:
Displays the menu for reference.

5. Display money:
Displays the current amount of money made by the restaurant ever since it was initiated.

6. Exit:
Terminates the program and clears the dynamically allocated memory.
