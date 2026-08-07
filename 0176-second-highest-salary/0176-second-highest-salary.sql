# Write your MySQL query statement below
SELECT(
SELECT DISTINCT SALARY 
    FROM(
    SELECT salary , 
    DENSE_RANK() OVER(order by salary Desc) AS RNK
    FROM EMPLOYEE
)t 
where rnk=2
)as secondhighestsalary