-- # Write your MySQL query statement below
with cte_lc as (select product_id, max(change_date) as lc_date from Products where change_date<='2019-08-16' group by product_id)

select b.product_id,b.new_price as price from cte_lc a,Products b where a.product_id=b.product_id and lc_date=change_date

union

select product_id,
case
    when min(change_date)>'2019-08-16' then 10
end as price
from Products
group by product_id
having price is not null