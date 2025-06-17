# Write your MySQL query statement below

with mycts as (
    select *, sum(weight) over(order by turn) as running_total
    from Queue q
    
)
select person_name
    from mycts
        where running_total <=1000 order by turn desc limit 1;