# Write your MySQL query statement below
select score,
    t as 'rank'
from (
    select 
        score,
        dense_rank() over(
            order by score desc
        ) as t
        from Scores
) x
order by score desc;
