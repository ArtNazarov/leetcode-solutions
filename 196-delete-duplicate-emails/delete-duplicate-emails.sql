-- Delete duplicates
DELETE 
    FROM Person 
WHERE id NOT IN (
    SELECT 
        id FROM  (
            SELECT 
                email, MIN(id) AS id 
            FROM Person
            GROUP BY email ) AS REQ);