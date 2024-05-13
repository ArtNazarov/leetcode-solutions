-- Using join
SELECT user_id, COALESCE(ROUND(c / t, 2), 0) as confirmation_rate
FROM (
SELECT user_id, COALESCE(confirmed, 0) as c, COALESCE(total, 0) as t
FROM (
SELECT user_id, (
SELECT COUNT(*) as confirmed from Signups as s
LEFT JOIN Confirmations as c
ON s.user_id = c.user_id
WHERE action = 'confirmed' AND c.user_id = sg.user_id
GROUP BY c.user_id
) as confirmed,
(SELECT COUNT(*) as total from Signups as s
LEFT JOIN Confirmations as c
ON s.user_id = c.user_id
WHERE c.user_id = sg.user_id
GROUP BY c.user_id ) as total
FROM Signups as sg
) as sq
) as main