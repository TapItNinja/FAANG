# Write your MySQL query statement below
SELECT customer_id, count(v.visit_id) as 'count_no_trans'
FROM Visits v
LEFT JOIN Transactions t
ON v.visit_id=t.visit_id
where t.transaction_id is null
group by customer_id