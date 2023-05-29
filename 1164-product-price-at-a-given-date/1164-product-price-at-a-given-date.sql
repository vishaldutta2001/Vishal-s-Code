# Write your MySQL query statement below
WITH latestDates AS(
SELECT product_id,MAX(change_date) latestDate
    FROM products
    WHERE change_date <= '2019:08:16'
    GROUP BY product_id
    
)
SELECT p.product_id, p.new_price price
FROM products p INNER JOIN latestDates l 
ON p.product_id=l.product_id AND  p.change_date=l.latestDate
UNION 
SELECT p2.product_id, 10 price
FROM products p2 WHERE p2.product_id NOT IN (SELECT product_id FROM latestDates); 