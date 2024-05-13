-- Using SELECT FROM SELECT
SELECT 
CASE (
SELECT COUNT(*) FROM  
(SELECT DISTINCT salary 
FROM Employee
ORDER BY salary DESC 
LIMIT 1 OFFSET 1) as sq)
 
WHEN 1 THEN (SELECT salary FROM 
 (SELECT DISTINCT salary 
FROM Employee
ORDER BY salary DESC 
LIMIT 1 OFFSET 1) as sq2)                    
else NULL
END AS SecondHighestSalary