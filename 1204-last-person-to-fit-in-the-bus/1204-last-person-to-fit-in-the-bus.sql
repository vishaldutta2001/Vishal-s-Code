# Write your MySQL query statement below
WITH t1 AS(
    SELECT turn,person_name,
    sum(weight) over (ORDER BY turn asc) cumulativeWeight
    FROM queue
    GROUP BY turn,person_name
)
SELECT person_name
FROM t1
WHERE turn = (
    SELECT max(turn) FROM t1
    Where cumulativeWeight<=1000
);

