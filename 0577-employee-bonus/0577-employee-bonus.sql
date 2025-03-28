# Write your MySQL query statement below
SELECT e.name, b.bonus
FROM Employee e
LEFT JOIN Bonus b
on e.empId=b.empId
WHERE bonus<1000 || bonus is null