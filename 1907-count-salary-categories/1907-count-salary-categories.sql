# Write your MySQL query statement below
SELECT 'Low Salary' category,
SUM(IF(income < 20000, 1,0)) accounts_count
FROM accounts
UNION
SELECT 'Average Salary' category,
SUM(IF(income >= 20000 AND income <= 50000, 1,0)) accounts_count
FROM accounts
UNION
SELECT 'High Salary' category,
SUM(IF(income > 50000, 1,0)) accounts_count
FROM accounts;