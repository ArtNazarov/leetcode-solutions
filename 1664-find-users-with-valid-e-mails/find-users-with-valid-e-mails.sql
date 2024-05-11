-- Using regexp
SELECT * FROM Users WHERE
REGEXP_LIKE(mail, '^[a-zA-Z]{1,1}[a-zA-Z0-9_.-]*@leetcode[.]com$')