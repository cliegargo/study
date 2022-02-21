-- Select all records where the first letter of the City is NOT an "a" or a "c" or an "f".


SELECT * FROM Customers
WHERE City LIKE '[!acf]%';