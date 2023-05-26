# Write your MySQL query statement below
SELECT employee_id
FROM ( SELECT * FROM employees LEFT JOIN salaries USING(employee_id)
      UNION
      SELECT * FROM employees RIGHT JOIN salaries USING(employee_id)
) t
WHERE t.salary IS NULL OR t.name IS NULL
ORDER BY employee_id; 