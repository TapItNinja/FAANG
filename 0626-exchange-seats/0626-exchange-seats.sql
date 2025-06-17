# Write your MySQL query statement below

with cte as (
    select *, 
    lag(student) over(order by id) as prev_name,
    lead(student) over(order by id) as next_name
    from seat
)
select id, case when id%2!=0 and id = (select max(id) from seat) then student
when id%2 = 0 then prev_name
when id%2 != 0 then next_name
else null end as student
from cte