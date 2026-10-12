# Write your MySQL query statement below
SELECT e.name
FROM Employee e
RIGHT JOIN Employee m
ON e.id = m.managerId
GROUP BY e.id,e.name
HAVING COUNT(e.id)>=5;