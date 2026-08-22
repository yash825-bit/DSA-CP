# Write your MySQL query statement below
SELECT Department.name AS Department, Employee.name AS Employee, Employee.salary AS Salary
FROM Employee JOIN Department ON Employee.departmentId = Department.id
WHERE Employee.salary = (
    SELECT MAX(Employee.salary) FROM Employee
    WHERE Employee.departmentId = Department.id
);