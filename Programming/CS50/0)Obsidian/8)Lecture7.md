# Flat file database
It is a database in which data is stored in simple files (like txt and csv) and values are stored in orderly manner using some type of delimiter. Most common of this type of database are CSV databases which use comma to separate the values.
## CSV (Comma Separated Values)
This is a type of flat file database in which the data is stored as a table with data of each column being separated by a comma.
We can perform CRUD (Create Read Update Delete) actions on CSV files using `csv` library in python.

---
# Relational Database
These are databases that are used with specialized software that manages the database. Relational database is a type of database where multiple databases can be related to each other. These databases use a language called SQL (Structured Query Language). There are different database systems that use this language for working with databases some coming with there own additional functionality to the SQL.

---
# SQL
- `CREATE` keyword is used to create new database or tables
	- `CREATE DATABASE`  followed by the name of the database will create that database. A database can have multiple tables inside it.
	- `CREAT TABLE` followed by the name of the tables will create that table
- `SELECT` keyword is used to read data from a table
- SQL has different functions like `MIN`, `MAX`, `COUNT` etc. These functions can also be nested.
- `*` is used to represent "all" in the context of SQL.
- All lines in SQL must end with a semicolon `;`.
- `NULL` is used in place where there is no data.
- We can also create aliases which are like temporary variable using `AS` keyword. For example `COUNT(*) AS n` will create an alias `n` storing value of `COUNT(*)`.
- `INSERT INTO` is used to insert data into a table. The syntax is `INSERT INTO table_name (COLUMN_1, COLUMN_2...) VALUE (VALUE_1, VALUE_2...);
- `DELETE` keyword is used to delete data from the table. `DELETE FROM table_name` will delete everything from the table hence to delete specific data `WHERE` clause must be used.
## Clause
- `FROM` keyword specifies which tables to use to read
- `WHERE` keyword specifies condition to select specific data when reading it from a table
- `AND` and `OR` keyword do as the word suggest i.e. provide logical comparison between two values
- `LIMIT` keyword is used to specify the amount of data (number of rows) to be displayed at once
- `GROUP BY` is used to perform actions based on groups of data of specified column
- `ORDER BY` is used to order the data based on specified column. By default data is order in ascending order `ASC` but can be changed to descending order by specifying `DESC`.
- `JOIN` is used to combine data of multiple table.
---
