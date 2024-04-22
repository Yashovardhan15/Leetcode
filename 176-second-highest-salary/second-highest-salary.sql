# Write your MySQL query statement below
-- select ifnull((
--     select distinct salary
--     from Employee
--     order by salary desc
--     limit 1 offset 1),
--     null)
--     as SecondHighestSalary;

# Write your MySQL query statement below

SELECT MAX(salary) AS SecondHighestSalary
FROM Employee
WHERE salary < (SELECT MAX(salary) FROM Employee);