 SELECT Prices.product_id, 
       COALESCE(ROUND(SUM(price * units) / SUM(units), 2), 0) AS average_price
FROM Prices

LEFT JOIN UnitsSold
ON Prices.product_id = UnitsSold.product_id  
WHERE purchase_date BETWEEN start_date AND end_date
GROUP BY product_id

UNION ALL

SELECT Prices.product_id,
       COALESCE(ROUND(SUM(price * units) / SUM(units), 2), 0) AS average_price  
FROM Prices
LEFT JOIN UnitsSold
ON Prices.product_id = UnitsSold.product_id
WHERE purchase_date IS NULL
GROUP BY product_id
