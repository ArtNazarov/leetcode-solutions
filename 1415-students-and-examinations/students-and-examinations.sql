-- Solution using UNION

SELECT s.student_id, s.student_name, e.subject_name, COUNT(*) as attended_exams
FROM Students as s
JOIN Examinations as e
ON s.student_id = e.student_id
GROUP BY student_id, student_name, subject_name

UNION

SELECT s1.student_id, s1.student_name, sj.subject_name, 0 as attended_exams
FROM Students as s1
CROSS JOIN Subjects as sj
WHERE sj.subject_name NOT IN (
   SELECT subject_name FROM Examinations as e2 WHERE s1.student_id = e2.student_id
  ) 
  
ORDER BY student_id , subject_name 
 
 