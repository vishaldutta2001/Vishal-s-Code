# Write your MySQL query statement below
SELECT name Customers
FROM Customers c
WHERE c.id NOT IN(
    SELECT Customers.id
    FROM Customers
    INNER JOIN Orders
    ON Customers.id=Orders.customerId
);