-- Select from select
SELECT contest_id, ROUND(SUM(s) / cnt * 100.00, 2) as percentage FROM (
      SELECT r.contest_id ,   COUNT(u.user_id) as s , 
   ( SELECT COUNT(*) FROM Users) as cnt
    FROM Users as u
    JOIN Register as r ON u.user_id = r.user_id
    GROUP BY contest_id
	  ) as sb
  GROUP BY contest_id
  ORDER BY percentage DESC, contest_id ASC