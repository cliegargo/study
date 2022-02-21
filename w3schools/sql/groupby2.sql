-- List the number of customers in each country, ordered by the country with the most customers first.


SELECT COUNT(CustomerID), Country
FROM Customers
GROUP BY Country ORDER BY COUNT(CustomerID) DESC;