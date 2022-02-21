-- Use the BETWEEN operator to select all the records where the value of the 
-- ProductName column is alphabetically between 'Geitost' and 'Pavlova'.


SELECT * FROM Products
WHERE ProductName BETWEEN 'Geitost' AND 'Pavlova';