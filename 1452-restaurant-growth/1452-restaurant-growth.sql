SELECT visited_on,
       rolling_7_day_sum AS amount,
       ROUND(rolling_7_day_sum / 7, 2) AS average_amount
FROM (
    SELECT
        visited_on,
        amount,
        SUM(amount) OVER (
            ORDER BY visited_on
            ROWS BETWEEN 6 PRECEDING AND CURRENT ROW
        ) AS rolling_7_day_sum,
        COUNT(*) OVER (
            ORDER BY visited_on
            ROWS BETWEEN 6 PRECEDING AND CURRENT ROW
        ) AS day_count
    FROM (
        SELECT
            visited_on,
            SUM(amount) AS amount
        FROM Customer
        GROUP BY visited_on
    ) daily_totals
) rolling_result
WHERE day_count = 7
ORDER BY visited_on;