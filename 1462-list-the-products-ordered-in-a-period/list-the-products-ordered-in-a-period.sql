-- Using left join
SELECT Products.product_name,  SUM(Orders.unit) as unit
FROM Products
left join Orders on Products.product_id = Orders.product_id
WHERE MONTH(Orders.order_date) = 2 AND YEAR(Orders.order_date) = 2020
GROUP BY Products.product_name
HAVING unit >= 100