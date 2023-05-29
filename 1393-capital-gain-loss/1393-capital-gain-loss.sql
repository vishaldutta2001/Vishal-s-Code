# Write your MySQL query statement below
SELECT stock_name,SUM(
    if(operation='buy',-price,price) 
) capital_gain_loss
FROM stocks
GROUP BY stock_name;
