# Write your MySQL query statement below
with cte as(
    select min(year) as min_year, product_id from sales group by product_id
)
select
s.product_id,
s.year as first_year,
s.quantity,
s.price
from sales s
join cte c
where year = c.min_year and s.product_id = c.product_id