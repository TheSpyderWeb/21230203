DROP DATABASE IF EXISTS CS_231R;
CREATE DATABASE CS_231R;
USE CS_231R;
show tables;

Create table user(ID int(11) unsigned auto_increment primary key not null, 
				  UserName varchar(25) not null, Password varchar(25) not null, 
                  Email varchar(40) not null);
Describe User;

insert into user(UserName, Password, Email) values("Reeham", "Pass123","R.Imam@snhu.edu");
insert into user(UserName, Password, Email) values("Maheer", "Pass123","I.mami@snhu.edu");

select * from user;

CREATE TABLE Student(SID int not null,
					LastName varchar(255) not null,
                    FirstName varchar(255) not null,
                    GPA float not null, 
                    primary key (SID));

ALTER TABLE Student ADD CONSTRAINT gpacheck check(gpa >= 0.0 AND gpa <= 4.0);
insert into Student (SID, LastName, FirstName, GPA) values(1, "Reeham","Imam", 3.9);

