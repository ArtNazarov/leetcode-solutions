-- select from select
 SELECT * FROM
 (
 SELECT u.name as NAME, (
  SELECT  SUM(t.amount) as b
  FROM Users as u2
  JOIN Transactions as t
   ON u2.account = t.account
   WHERE u2.account = u.account
  GROUP BY u2.account
  HAVING b > 10000  
) as 'BALANCE' 
FROM Users as u ) as sq2
WHERE sq2.BALANCE IS NOT NULL