use nandha;
create table users(
ID int not null auto_increment,name varchar(50) not null,AGE int not null,
primary key(ID)
);
show databases;
show tables;
describe users;
alter table users add GENDER varchar(10) not null after age;
show tables;
describe USERS;
alter table users rename to Nandha;
describe Nandha;
alter table Nandha modify GENDER varchar(50) not null;
alter table Nandha add PLACE varchar(50) not null,
add CONTACT varchar(50) not null;
alter table Nandha modify CONTACT varchar(50)not null;
select * from Nandha;
insert into Nandha values(null,'Nandhagopal',24,'male','salem','9442701231');
describe Nandha;
insert into Nandha (NAME,AGE,GENDER,PLACE,CONTACT) VALUES('LEGEND',24,'MALE','SALEM','6380304667'),('SARA',23,'FEMALE','SALEM','9976685934');
DELETE FROM Nandha where ID=3;
alter table Nandha auto_increment =5;
update Nandha set ID =3 where ID =4;
alter table Nandha modify Id int not null auto_increment=2;
