-- Using HAVING
SELECT user_id, MAX(time_stamp) as last_stamp
FROM Logins
WHERE YEAR(time_stamp) = 2020
GROUP by user_id
HAVING MAX(YEAR(time_stamp)) >=2020