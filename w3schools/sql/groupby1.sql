-- List the number of customers in each country.

SELECT COUNT(CustomerID), Country
FROM Customers
GROUP BY Country;