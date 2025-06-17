# Write your MySQL query statement below

select employee_id, department_id   
from Employee
group by employee_id
having count(employee_id) = 1

union

select employee_id, department_id   
from Employee
where primarY_flag = 'Y'
order by 1 asc