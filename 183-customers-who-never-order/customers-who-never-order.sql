-- Return the result table in any order.
SELECT 
    customers.name AS Customers
FROM 
    Customers
WHERE customers.id NOT IN (
  SELECT customerId
  FROM Orders
  LEFT JOIN Customers 
  ON orders.id = customers.id
)