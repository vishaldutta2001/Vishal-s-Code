# Write your MySQL query statement below
SELECT employee_id,
IF(employee_id%2 = 1 AND name NOT REGEXP '^m', salary ,0) bonus 
FROM employees
ORDER BY employee_id;