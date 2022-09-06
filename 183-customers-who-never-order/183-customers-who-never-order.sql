SELECT customers.name AS customers
FROM customers
WHERE customers.id NOT IN(
    SELECT orders.customerID
    FROM orders
    );
