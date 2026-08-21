# Write your MySQL query statement below
Select id 
from (
    Select id,
    recordDate,
    temperature,
    lag(recordDate) over(order by recordDate) as PrevDate,
    lag(temperature) over(order by recordDate) as PrevTemp
    from Weather
    ) t
where PrevDate < recordDate AND PrevTemp<temperature
        AND
        DateDiff(recordDate,PrevDate) = 1;
