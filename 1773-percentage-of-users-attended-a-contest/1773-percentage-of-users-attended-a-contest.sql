WITH cte AS (
    SELECT r.contest_id, COUNT(DISTINCT r.user_id) AS count1
    FROM Register r 
    JOIN Users u ON r.user_id = u.user_id
    GROUP BY r.contest_id
),
total AS (
    SELECT COUNT(*) AS total_users FROM Users
)
SELECT 
    cte.contest_id,
    ROUND((cte.count1 / total.total_users) * 100, 2) AS percentage
FROM cte, total
ORDER BY percentage DESC, contest_id ASC;