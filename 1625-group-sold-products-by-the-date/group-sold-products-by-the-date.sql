-- using nested select
SELECT 
    sell_date, 
    COUNT(product) AS num_sold, 
    GROUP_CONCAT(product ORDER BY product ASC SEPARATOR ',')  AS products
 FROM 
 ( SELECT DISTINCT product, sell_date FROM
 (SELECT sell_date, product, 
    ROW_NUMBER()  OVER (PARTITION BY sell_date ORDER BY sell_date)  as RN 
  FROM Activities) as prts ORDER BY sell_date) AS sq
 GROUP BY sell_date
 ORDER BY sell_date