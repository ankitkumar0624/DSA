SELECT person.firstname,person.lastname,address.city,Address.state
FROM person
LEFT JOIN Address
USING (personId);