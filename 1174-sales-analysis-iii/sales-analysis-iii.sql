-- Solution with nested SELECT
SELECT sq.product_id, sq.product_name  FROM (
 
     SELECT Product.product_id, Product.product_name, 
          CASE  Sales.sale_date < '2019-01-01' OR Sales.sale_date > '2019-03-31'
          WHEN true THEN 1
          ELSE 0
          END as excl,
           CASE   Sales.sale_date BETWEEN '2019-01-01' AND '2019-03-31'
          WHEN true THEN 1
          ELSE 0
          END as incl
   FROM Product
LEFT JOIN Sales ON Product.product_id = Sales.product_id
) as sq 
 GROUP BY sq.product_id,  sq.product_name
 HAVING SUM(sq.excl) = 0 AND  SUM(sq.incl) > 0