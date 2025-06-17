with cte as((
    select name      results      
    from   Users 
    join MovieRating 
    using (user_id )
    group by user_id      
    order by count(user_id)desc,1
    limit 1)
    union all
    (select title             results      
    from   Movies  
    join MovieRating 
    using (movie_id  )
    where year(created_at)=2020 and month(created_at  )=02
    group by movie_id          
    order by avg(rating)desc,1
    limit 1)
)
select * from cte