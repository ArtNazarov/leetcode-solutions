-- Solution using JOIN
SELECT Product.product_name,
Sales.year,
Sales.price
FROM Product
JOIN Sales
ON Product.product_id = Sales.product_id
