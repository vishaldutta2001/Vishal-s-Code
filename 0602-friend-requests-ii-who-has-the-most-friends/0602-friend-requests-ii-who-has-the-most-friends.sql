# Write your MySQL query statement below
SELECT  id,COUNT(*) num
FROM
(
    SELECT requester_id id FROM RequestAccepted
    UNION ALL
    SELECT accepter_id id FROM RequestAccepted
) t
GROUP BY id ORDER BY num DESC LIMIT 1;