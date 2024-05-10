-- Solution with group and having
    SELECT MAX(num) as num from (
    SELECT num FROM MyNumbers
    GROUP BY num
    HAVING COUNT(num) = 1) as t