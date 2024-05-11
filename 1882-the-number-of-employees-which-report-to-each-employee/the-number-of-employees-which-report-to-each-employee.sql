-- Using right join
SELECT e.employee_id, e.name,
sb.reports_count, sb.average_age
FROM Employees as e
RIGHT JOIN 
   (SELECT x.reports_to as rep, COUNT(*) as reports_count, COALESCE(ROUND(AVG(x.age), 0), -9999) 
   as average_age
   FROM Employees as x
   RIGHT JOIN Employees as e
   ON x.reports_to = e.employee_id
   GROUP BY x.reports_to) AS sb
 ON sb.rep = e.employee_id
WHERE sb.average_age <> -9999
ORDER BY e.employee_id