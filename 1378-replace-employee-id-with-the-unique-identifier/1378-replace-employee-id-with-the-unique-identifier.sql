# Write your MySQL query statement below
Select e.name, u.unique_id from Employees e Left Join EmployeeUNI u using(id);