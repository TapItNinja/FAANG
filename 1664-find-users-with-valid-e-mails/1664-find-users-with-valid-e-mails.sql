# Write your MySQL query statement below
SELECT * 
FROM Users
WHERE REGEXP_LIKE(mail, '^[a-zA-Z][a-zA-Z0-9._-]*@leetcode\\.com$', 'c');



#. (dot) alone means "any character" (except newline).

#[.] means "a literal dot character" — it's the same as \\.