# Write your MySQL query statement below
SELECT m.name
FROM employee e
INNER JOIN employee m ON e.managerId=m.id
GROUP BY m.name
HAVING COUNT(*)>=5;