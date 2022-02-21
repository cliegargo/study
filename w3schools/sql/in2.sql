-- Use the IN operator to select all the records where Country is NOT "Norway" and NOT "France".

SELECT * FROM Customers
WHERE Country NOT IN('Norway', 'France');