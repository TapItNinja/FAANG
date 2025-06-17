# Write your MySQL query statement below
select a.employee_id
from Employees a
left join Employees b on b.employee_id   = a.manager_id  
where  (a.salary < 30000) and (b.employee_id  is null) and (a.manager_id is not null)
order by 1 asc