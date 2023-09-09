# Write your MySQL query statement below
Select p.product_name,s.year,s.price from Sales s left join product p using(product_id);
