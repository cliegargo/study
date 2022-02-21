-- When displaying the Customers table, make an ALIAS of the PostalCode column,
-- the column should be called Pno instead.

SELECT CustomerName, Address, PostalCode AS Pno FROM Customers;