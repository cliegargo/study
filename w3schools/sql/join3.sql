-- Choose the correct JOIN clause to select all the records from the Customers
-- table plus all the matches in the Orders table.


SELECT * FROM Orders
RIGHT JOIN Customers
ON Orders.CustomerID = Customers.CustomerID;