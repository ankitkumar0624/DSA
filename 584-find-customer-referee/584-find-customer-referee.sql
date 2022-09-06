SELECT customer.name
FROM customer
WHERE customer.referee_id <> 2 or customer.referee_id IS NULL;
