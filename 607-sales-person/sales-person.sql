-- Solution with nested select 
SELECT name from SalesPerson 
WHERE SalesPerson.sales_id NOT IN (
select sales_id from Orders 
 WHERE Orders.com_id IN
 (select com_id FROM Company WHERE name = "RED")
 )