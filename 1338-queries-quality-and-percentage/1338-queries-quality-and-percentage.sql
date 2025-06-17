with cte as(
    select query_name ,
    rating *1.0/position  ratio,
    case when rating <3 then 1 else 0 end as pct
    from queries
)
select query_name ,round(avg(ratio),2) quality ,round(100.0*avg(pct) ,2)poor_query_percentage 
from cte
group by 1