# Write your MySQL query statement below
with query_1 as (
select b.name as Department,  a.name as Employee, a.salary as Salary
    ,dense_RANK() OVER (PARTITION BY b.name  ORDER BY a.salary DESC) AS ranked_dat
from Employee a
left join Department b on a.departmentId = b.id
order by b.name  asc)

select Department, Employee, Salary #,ranked_dat
from query_1
where ranked_dat <=3