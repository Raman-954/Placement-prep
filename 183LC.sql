Select name as Customers from Customers LEFT JOIN Orders on Customers.id=Orders.customerId where Orders.customerId is NULL;
