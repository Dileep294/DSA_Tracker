select e2.name as Employee
from Employee e1 join Employee e2
on e1.id = e2.managerId
where e1.salary < e2.salary


-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna