# Write your MySQL query statement below
select Distinct l1.num as ConsecutiveNums
from Logs l1
join Logs l2
on l1.id = l2.id+1
join Logs l3
on l2.id = l3.id+1
where l1.num = l2.num AND l2.num = l3.num;


