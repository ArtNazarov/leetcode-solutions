-- Using SELECT FROM SELECT
SELECT teacher_id , COUNT(subject_id) AS cnt
FROM (
  SELECT DISTINCT teacher_id, subject_id
  FROM Teacher
  ORDER BY teacher_id, subject_id
  ) as sb
GROUP BY teacher_id