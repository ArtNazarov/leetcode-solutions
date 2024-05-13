-- Using GROUP and HAVING with aggregate function
WITH cte AS 
(SELECT COUNT(*) as cnt FROM Product)
SELECT customer_id FROM Customer
GROUP BY customer_id
HAVING COUNT(DISTINCT product_key) = ( SELECT cnt FROM cte ) 