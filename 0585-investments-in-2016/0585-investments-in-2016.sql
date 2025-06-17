# Write your MySQL query statement below
Select ROUND(SUM(a.tiv_2016),2) as 'tiv_2016' from
Insurance as a 
where a.tiv_2015 in (Select b.tiv_2015 from insurance as b where a.pid<>b.pid)
and 
(a.lat,a.lon) not in (Select c.lat,c.lon from insurance as c where a.pid<>c.pid)