-- The order should be random
SELECT  
    DISTINCT  email AS Email FROM (
SELECT 
    email, 
    ROW_NUMBER() OVER ( 
        PARTITION BY   email
        ORDER BY   email
        ) AS "RN"
FROM Person  
) AS R WHERE R.RN > 1 