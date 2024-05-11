 -- Using UNION
 SELECT employee_id, department_id FROM Employee WHERE primary_flag = "Y"
 UNION
 SELECT employee_id, department_id FROM Employee WHERE 
  employee_id NOT IN (
     SELECT employee_id FROM Employee WHERE primary_flag = "Y"
    )
   AND employee_id IN (
     SELECT employee_id FROM Employee WHERE primary_flag = "N" 
     GROUP BY employee_id HAVING COUNT(*) <= 1
   )