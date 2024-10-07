# Write your MySQL query statement below
SELECT c.id, c.movie, c.description, c.rating
FROM Cinema c
WHERE c.description != 'boring' AND (c.id % 2 != 0)
ORDER BY c.rating DESC