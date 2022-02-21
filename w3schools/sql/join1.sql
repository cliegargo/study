-- Insert the missing parts in the JOIN clause to join the two tables Orders and
-- Customers, using the CustomerID field in both tables as the relationship between the two tables.

SELECT * FROM Orders
LEFT JOIN Customers
ON Orders.CustomerID = Customers.CustomerID;