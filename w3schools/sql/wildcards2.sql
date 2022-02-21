-- Select all records where the first letter of the City is an "a" or a "c" or an "s".

SELECT * FROM Customers
WHERE City LIKE '[acs]%';