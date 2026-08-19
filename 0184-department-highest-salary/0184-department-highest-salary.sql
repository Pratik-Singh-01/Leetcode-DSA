# Write your MySQL query statement below
select Department,
    Employee,
    salary
from (
    select d.name as Department,
        e.name as Employee,
        e.salary,
        rank() over (
        partition by d.id 
        order by e.salary desc
    ) as rnk 
    from Employee as e
    left join Department as d
    on e.departmentId = d.id
) as result
where rnk=1;