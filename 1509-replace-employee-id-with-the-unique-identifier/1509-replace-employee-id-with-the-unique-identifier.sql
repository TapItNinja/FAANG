# Write your MySQL query statement below
SELECT unique_id as 'unique_id', name
FROM Employees e
LEFT JOIN EmployeeUNI ei
ON e.id=ei.id