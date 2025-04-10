# Write your MySQL query statement below
select a.machine_id, 
    round(
        (select avg(timestamp) from Activity a1 where activity_type='end' and a1.machine_id=a.machine_id)-
        (select avg(timestamp) from Activity a1 where activity_type='start' and a1.machine_id=a.machine_id)
    ,3) as processing_time
    from Activity a 
    group by machine_id