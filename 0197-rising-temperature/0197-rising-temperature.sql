# Write your MySQL query statement below
SELECT w2.id
FROM Weather w1
LEFT JOIN Weather w2
ON datediff(w2.recordDate, w1.recordDate)=1
where w2.temperature>w1.temperature