# Write your MySQL query statement below
WITH distinctDates AS(
    SELECT visited_on,SUM(amount) amount
    FROM customer
    GROUP BY visited_on
)
SELECT d1.visited_on,Sum(d2.amount) amount,ROUND(AVG(d2.amount),2) average_amount
FROM distinctDates d1
INNER JOIN distinctDates d2 
ON DATEDIFF(d1.visited_on,d2.visited_on) >=0 AND  DATEDIFF(d1.visited_on,d2.visited_on)<=6
GROUP BY d1.visited_on
having COUNT(*)=7;