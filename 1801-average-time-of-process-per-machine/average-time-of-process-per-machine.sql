-- Using left join
SELECT a.machine_id as machine_id, 
ROUND(AVG(b.timestamp - a.timestamp), 3) as processing_time
FROM Activity as a
LEFT JOIN Activity as b
ON a.machine_id = b.machine_id AND a.process_id = b.process_id
WHERE 
(a.activity_type = 'start') AND (b.activity_type = 'end')
GROUP BY machine_id 