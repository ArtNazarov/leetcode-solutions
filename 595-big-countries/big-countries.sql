# Write your MySQL query statement below
SELECT name, population, area FROM World
WHERE NOT(population < 25000000 AND area < 3000000) 