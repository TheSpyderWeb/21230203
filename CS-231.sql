DROP DATABASE IF EXISTS CS_231R;
CREATE DATABASE CS_231R;
USE CS_231R;
show tables;
/*USER TABLE */
Create table user(ID int(11) unsigned auto_increment primary key not null, 
				  UserName varchar(25) not null, Password varchar(25) not null, 
                  Email varchar(40) not null);
Describe User;

insert into user(UserName, Password, Email) values("Reeham", "Pass123","R.Imam@snhu.edu");
insert into user(UserName, Password, Email) values("Maheer", "Pass123","I.mami@snhu.edu");
insert into user(UserName, Password, Email) values("Dee", "Lee","later@snhu.edu");
insert into user(UserName, Password, Email) values("Zeeham", "Pass123","Z.Imam@snhu.edu");
insert into user(UserName, Password, Email) values("Taheer", "Pass123","T.mami@snhu.edu");
insert into user(UserName, Password, Email) values("Zee", "Tee","later@snhu.edu");
select * from user;
/*Delete from user where ID = '3';  DELETING */
Delete from user where ID IN(1,2,3);  /*DELETING MULTIPLE*/
/*USER TABLE END */

/*STUDENT TABLE */
CREATE TABLE Student(SID int not null,
					LastName varchar(255) not null,
                    FirstName varchar(255) not null,
                    GPA float not null, 
                    primary key (SID));

ALTER TABLE Student ADD CONSTRAINT gpacheck check(gpa >= 0.0 AND gpa <= 4.0);
insert into Student (SID, LastName, FirstName, GPA) values(1, "Reeham","Imam", 3.9);
Show tables;
SELECT SID, LastName, Age,
CASE WHEN GPA > 3.8 THEN 'Summa Cum Laude'
When GPA > 3.5 and GPA 3.8 THEN ' Magna Cum Laude'
ELSE 'Graduated'
END AS Distinction
FROM Student;
/*USER TABLE END*/

/*CUSTOMER TABLE */
CREATE TABLE customer(CID int not null,
					LastName varchar(255) not null,
                    FirstName varchar(255) not null,
                    Age float not null);
                    
insert into customer (CID, LastName, FirstName, Age) values(1, "Reeham","Imam", 20);
insert into customer (CID, LastName, FirstName, Age) values(2, "Rere","Im", 19);
insert into customer (CID, LastName, FirstName, Age) values(3, "ReeRee","Imam", 18);      
insert into customer (CID, LastName, FirstName, Age) values(4, "TeeTee","Tmam", 88);            
Select * from customer;

Select * from customer order by Lastname asc;
Select * from customer where LastName like "s%"; /* last name starts whith s and then whatever*/
Select * from customer where Age > 50;/* age grater than 50*/

SELECT CID, LastName, Age,
Case WHEN Age > 65 THEN ' The customer is senior'
WHEN Age > 30 and Age < 65 THEN 'The cusomer is Midage'
ELSE ' The customer is Young'
END AS Seniority
FROM Customer;

/*CUSTOMER TABLE END*/
/*------ HOW TO -------- */
show tables;  /* Show Existing Databases */



/*------ HOW TO -------- */

/*------ AFTER MID-TERM --------*/

/*CUSTOMER TABLE */
Select * from customer;
describe customer;
Alter table customer1 Add primary Key(CID);

CREATE TABLE Contact1 (CID int,
					State varchar(2) NOT NULL,
                    Phone varchar(12),
                    PRIMARY KEY (CID),
                    FOREIGN KEY (CID) REFERENCES customer(CID));
                    
                    Alter table customer Add primary Key(CID);
                    Select * from Contact1;
                    insert into Contact1 (CID, State, Phone) values(100, "NH","603603603");
                    insert into Contact1 (CID, State, Phone) values(1, "NH","103603603");
                    insert into Contact1 (CID, State, Phone) values(2, "MA","203603603");  
                    insert into Contact1 (CID, State, Phone) values(3, "NY","303603603");
Select * from customer;
Select * from Contact1;
insert into customer (CID, LastName, FirstName, Age) values(4,'Zee', 'K', 20);
insert into customer (CID, LastName, FirstName, Age) values(5,'Bee', 'B', 25);
insert into customer (CID, LastName, FirstName, Age) values(6,'Pew', 'P', 13);

Select LastName, FirstName from customer;
Select FirstName, LastName, Age, State, phone from customer, contact1 where customer.CID = Contact1.CID
order by FirstName;
Select LastName, FirstName, Age, State, Phone from Customer Join Contact1 on Customer.CID = Contact1.CID;

Select * from Student;
insert into Student (SID, LastName, FirstName, GPA) values(22, "Wep","Weep", 3.9);
insert into Student (SID, LastName, FirstName, GPA) values(23, "Tew","Much", 3.8);
insert into Student (SID, LastName, FirstName, GPA) values(24, "Fo","Num", 3.7);

Select Firstname, Lastname from Student;
/*Intersect*/
Select Firstname, Lastname from customer;
Select customer.FirstName as customer, student.FirstName as Student from Customer
join student on length(customer.Firstlone)> length(student.FirstHame);
Select count(distinct Firstname) from customer;
Select sum(age) from customer;
Select * from Customers

/* OR. Select LastName, FirstName, Age, State, Phone from Customer, Contact1 Where Customer.CID = Contact1.CID;*/
/*Where State Like 'NH';*/
/*CUSTOMER TABLE END*/

