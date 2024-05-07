-- The order is random
SELECT 
    e.name as "Employee" 
FROM 
    Employee as e
JOIN 
    Employee as m
ON m.id = e.managerId
WHERE e.salary > m.salary