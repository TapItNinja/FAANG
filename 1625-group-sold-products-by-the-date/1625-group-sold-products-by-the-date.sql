# Write your MySQL query statement below
select sell_date, count(DISTINCT product) as num_sold, GROUP_CONCAT(DISTINCT product ORDER BY PRODUCT) AS products
from Activities
GROUP BY sell_date