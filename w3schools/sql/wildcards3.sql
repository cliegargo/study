-- Select all records where the first letter of the City starts with anything from an "a" to an "f

SELECT * FROM Customers
WHERE City LIKE '[a-f]%';