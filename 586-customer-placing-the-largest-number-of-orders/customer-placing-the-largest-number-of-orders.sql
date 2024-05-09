-- Solution with nested select
SELECT customer_number FROM (
SELECT customer_number, count(order_number) as orn
FROM orders
GROUP BY customer_number
ORDER BY orn  DESC
LIMIT 1) AS drv