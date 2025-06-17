-- Select the user ID (as `id`) and the total number of requests (as `num`)
SELECT r AS id, SUM(c) AS num
FROM (
    -- Subquery 1: Count how many requests each user has sent
    SELECT requester_id AS r, COUNT(accepter_id) AS c
    FROM RequestAccepted
    GROUP BY requester_id

    UNION ALL

    -- Subquery 2: Count how many requests each user has received
    SELECT accepter_id AS r, COUNT(requester_id) AS c
    FROM RequestAccepted
    GROUP BY accepter_id
) AS combined  -- Combine sent and received counts into one table
GROUP BY r      -- Group by user ID
ORDER BY num DESC  -- Sort users by total number of requests in descending order
LIMIT 1;        -- Return only the top user with the highest number of requests