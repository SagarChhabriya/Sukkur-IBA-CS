# ER Model and SQL Commands Documentation

## 1. ER Model Overview

### Entity-Relationship Model (ERM)
The Entity-Relationship (ER) Model is used for designing databases by representing entities and their relationships.

#### Key Concepts:
- **Entity Type**: Defines a category of entities that share common properties.
- **Entity**: A real-world object or concept represented in the database.
- **Entity Set**: A collection of similar entities that belong to the same entity type.
- **EAR (Entity-Attribute-Relationship)**: A conceptual representation that defines entities, their attributes, and relationships between entities.

#### Attributes:
- **Simple Attribute**: Cannot be divided further (e.g., Name, Age).
- **Composite Attribute**: Can be broken down into smaller components (e.g., Address → Street, City, State).
- **Single-Valued Attribute**: Holds only one value for an entity (e.g., Date of Birth).
- **Multi-Valued Attribute**: Holds multiple values (e.g., Phone Numbers).
- **Stored Attribute**: Stores data directly in the database (e.g., Age).
- **Derived Attribute**: Can be derived from other attributes (e.g., Age from Date of Birth).
- **Descriptive Attribute**: Provides descriptive information about an entity (e.g., Color, Model).

#### Relationships:
- **Relationship Set**: A set of associations between entities.
- **Degree of Relationship**: Refers to the number of entities involved.
  - **Unary Relationship**: A relationship involving a single entity (e.g., Person).
  - **Binary Relationship**: A relationship involving two entities (e.g., Student and Course).
  - **Ternary Relationship**: A relationship involving three entities (e.g., Subject, Course, and Teacher).

### Mapping Cardinalities (Cardinality Ratio):
Cardinality defines the number of entity participants in a relationship set.

- **One-to-One**: One entity in the first set is related to one entity in the second set.
- **One-to-Many**: One entity in the first set is related to multiple entities in the second set.
- **Many-to-One**: Many entities in the first set are related to one entity in the second set.
- **Many-to-Many**: Many entities in both sets are related to each other.

#### Participation Constraints:
- **Total Participation**: All instances of an entity set must participate in a relationship (represented by double lines).
- **Partial Participation**: Some instances of an entity set may not participate in a relationship (represented by single lines).

---

## 2. Types of Attributes

### Attribute Types:
- **Simple Single-Valued Attribute**: A basic attribute with a single value (e.g., Employee ID).
- **Simple Multi-Valued Attribute**: A basic attribute that holds multiple values (e.g., Phone Numbers).
- **Composite Single-Valued Attribute**: A composite attribute with a single value (e.g., Full Name).
- **Composite Multi-Valued Attribute**: A composite attribute that holds multiple values (e.g., Address).

---

## 3. Keys in DBMS (SCP-AFC)

### Key Types:
- **Super Key**: A set of attributes that can uniquely identify an entity (e.g., Employee ID, Social Security Number).
- **Candidate Key**: A minimal super key that uniquely identifies an entity (e.g., Employee ID).
- **Primary Key**: The chosen candidate key to uniquely identify records in a table (e.g., Employee ID).
- **Alternate Key**: Any candidate key that is not chosen as the primary key.
- **Foreign Key**: An attribute that creates a link between two tables (e.g., Department ID in the Employee table referring to the Department table).
- **Composite Key**: A key composed of multiple attributes (e.g., Course ID + Student ID in an enrollment relationship).

---

## 4. Strong Entity vs. Weak Entity

- **Strong Entity**: Has its own primary key and is independent (e.g., Employee).
- **Weak Entity**: Does not have its own primary key and depends on a strong entity for identification (e.g., Dependent in an Employee-Dependent relationship).

---

## 5. SQL Commands

### General SQL Operations

#### To Create User:
```sql
CREATE USER "username" IDENTIFIED BY "password";
```

#### To Drop User:
```sql
DROP USER username;
```

#### To Alter User Password:
```sql
ALTER USER "username" IDENTIFIED BY "new_password";
```

#### To Show All Users:
```sql
SELECT * FROM dba_users;
```

#### To Unlock Existing User:
```sql
ALTER USER "username" ACCOUNT UNLOCK;
```

#### To Show Current System Date:
```sql
SELECT SYSDATE FROM dual;
```

#### To Show All Tables:
```sql
SELECT * FROM user_tables;
```

---

## 6. Data Manipulation SQL Queries

### Select Queries:
- **Basic Select**:
```sql
SELECT empno, ename, sal FROM emp;
```

- **Conditional Select**:
```sql
SELECT * FROM emp WHERE sal > 2000;
```

- **Pattern Matching**:
  - **Names starting with 'A'**:
  ```sql
  SELECT * FROM emp WHERE ename LIKE 'A%';
  ```

  - **Names ending with 'N'**:
  ```sql
  SELECT * FROM emp WHERE ename LIKE '%N';
  ```

  - **Names containing 'N'**:
  ```sql
  SELECT * FROM emp WHERE ename LIKE '%N%';
  ```

### Aggregate Functions:
- **Max**:
```sql
SELECT MAX(sal) FROM emp;
```

- **Count**:
```sql
SELECT COUNT(*) FROM emp;
```

- **Sum**:
```sql
SELECT deptno, SUM(sal) FROM emp GROUP BY deptno;
```

- **Group By and Having**:
```sql
SELECT deptno, MAX(sal) FROM emp GROUP BY deptno HAVING deptno = 10;
```

---

## 7. Table Management

### Create Table:
```sql
CREATE TABLE employees (
    empno NUMBER PRIMARY KEY,
    ename VARCHAR2(50),
    sal NUMBER(12, 2)
);
```

### Alter Table:
- **Add Column**:
```sql
ALTER TABLE employees ADD (phone_number VARCHAR2(15));
```

- **Modify Column**:
```sql
ALTER TABLE employees MODIFY (sal NUMBER(15, 2));
```

- **Drop Column**:
```sql
ALTER TABLE employees DROP COLUMN phone_number;
```

- **Add Primary Key**:
```sql
ALTER TABLE employees ADD CONSTRAINT pk_empno PRIMARY KEY (empno);
```

### Drop Table:
```sql
DROP TABLE employees;
```

---

## 8. Data Modification Queries

### Insert Data:
```sql
INSERT INTO employees (empno, ename, sal) VALUES (1001, 'John Doe', 3500);
```

### Update Data:
```sql
UPDATE employees SET sal = 4000 WHERE empno = 1001;
```

### Delete Data:
```sql
DELETE FROM employees WHERE empno = 1001;
```

---

## 9. Views and Synonyms

### Create a View:
```sql
CREATE VIEW emp_salaries AS
SELECT deptno, MAX(sal) FROM emp GROUP BY deptno;
```

### Drop a View:
```sql
DROP VIEW emp_salaries;
```

### Create a Synonym:
```sql
CREATE SYNONYM emp_synonym FOR emp;
```

### Drop a Synonym:
```sql
DROP SYNONYM emp_synonym;
```

---

## 10. Other Useful SQL Functions

### Date Functions:
- **Get current system date**:
```sql
SELECT SYSDATE FROM dual;
```

- **Add months to a date**:
```sql
SELECT ADD_MONTHS(SYSDATE, 5) FROM dual;
```

- **Find the difference between two dates**:
```sql
SELECT TO_DATE('2022-12-31', 'YYYY-MM-DD') - TO_DATE('2022-01-01', 'YYYY-MM-DD') FROM dual;
```

- **Find next Monday**:
```sql
SELECT NEXT_DAY(SYSDATE, 'Monday') FROM dual;
```

### String Functions:
- **Convert to Lowercase**:
```sql
SELECT LOWER(ename) FROM emp;
```

- **Substring**:
```sql
SELECT SUBSTR(ename, 1, 3) FROM emp;
```

---

## 11. SQL Assignment

### Queries:
- **20 Select Queries**
- **10 Update Queries**
- **10 Delete Queries**

---

## Notes:
- **Dual Table**: Used for selecting data when no specific table is required (often for functions like SYSDATE).
- **Views**: Useful for saving complex queries to simplify access.
- **Synonyms**: Provide alternate names for tables, helping to simplify queries and provide a level of abstraction.
