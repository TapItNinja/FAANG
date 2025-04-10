# Write your MySQL query statement below
select 
    s.student_id,
    student_name,
    sub.subject_name,
    count(e.student_id) as 'attended_exams'
from Students s
    cross join Subjects sub
    left join Examinations e
    on s.student_id=e.student_id and e.subject_name=sub.subject_name
group by sub.subject_name, s.student_name
order by student_id, subject_name