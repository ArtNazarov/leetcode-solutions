-- Solution with case
SELECT x, y, z, 
CASE ( (x + y) > z) AND ( ( x + z ) > y ) AND ( (y+z)  > x)
WHEN false THEN "No"
ELSE "Yes"
END as triangle
FROM Triangle