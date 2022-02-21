-- Set the value of the City columns to 'Oslo', but only the ones where the
-- Country column has the value "Norway".

UPDATE Customers SET City = 'Oslo' WHERE Country = 'Norway';