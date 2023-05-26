# Write your MySQL query statement below
SELECT id,
IF(p_id IS NULL,'Root',IF(id IN (SELECT t.p_id FROM tree t),'Inner','Leaf')) type
FROM tree;