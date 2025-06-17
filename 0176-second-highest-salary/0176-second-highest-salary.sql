#Finding the second highest number using window functions(rank(), dense_rank() usage of advanced sql).

SELECT 
    MAX(salary) AS SecondHighestSalary
FROM (
    SELECT 
        salary,
        DENSE_RANK() OVER (ORDER BY salary DESC) AS rnk
    FROM 
        Employee
) AS ranked
WHERE rnk = 2;
