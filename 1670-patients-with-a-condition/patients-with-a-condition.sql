-- Solution with two likes and or
SELECT patient_id, patient_name, conditions
FROM Patients 
WHERE
UCASE(conditions) LIKE 'DIAB1%'
OR UCASE(conditions) LIKE '% DIAB1%'
