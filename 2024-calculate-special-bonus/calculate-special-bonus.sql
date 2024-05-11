-- Using CASE in SELECT
SELECT employee_id, 
CASE (SUBSTR(name, 1,1) <> 'M' AND employee_id % 2 <> 0) 
WHEN true THEN salary
ELSE 0
END as bonus 
FROM  Employees
ORDER BY employee_id