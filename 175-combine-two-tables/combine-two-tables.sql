-- Return the result table in any order
SELECT 
    p.firstName, p.lastName, a.city, a.state  
FROM Person AS p
LEFT JOIN Address AS a
ON
a.personId = p.personId
