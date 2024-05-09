-- With two selections
 
SELECT w1.name, w1.population, w1.area FROM World as w1
WHERE  w1.population >= 25000000
UNION
SELECT w2.name, w2.population, w2.area FROM World as w2
WHERE w2.area >= 3000000 
 