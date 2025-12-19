<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>C++ Bank Management System</title>
</head>
<body>

<h1>🏦 Bank Management System (C++)</h1>

<p>
A console-based <strong>Bank Management System</strong> developed in <strong>C++</strong>, 
designed to demonstrate core <strong>Object-Oriented Programming (OOP)</strong> concepts such as:
</p>

<ul>
    <li>Inheritance</li>
    <li>Polymorphism</li>
    <li>Encapsulation</li>
    <li>Virtual Functions</li>
    <li>Operator Overloading (minimal & meaningful)</li>
</ul>

<hr>

<h2>📁 Project Structure</h2>

<pre>
├── Account.h / Account.cpp
├── SavingsAccount.h / SavingsAccount.cpp
├── CurrentAccount.h / CurrentAccount.cpp
├── Bank.h / Bank.cpp
├── Transaction.h / Transaction.cpp   (optional)
├── User.h / User.cpp                 (optional)
├── FileManager.h / FileManager.cpp   (optional)
└── main.cpp
</pre>

<hr>

<h2>🧱 Class Overview</h2>

<h3>1️⃣ Account (Base Class)</h3>

<p>
The <strong>Account</strong> class acts as the base class for all account types.
It stores common data and provides virtual functions to enable polymorphism.
</p>

<h4>🔹 Data Members</h4>
<ul>
    <li>Account Number</li>
    <li>Account Holder Name</li>
    <li>Balance</li>
</ul>

<h4>🔹 Member Functions (6–7)</h4>
<ul>
    <li><code>deposit()</code></li>
    <li><code>withdraw()</code> <em>(virtual)</em></li>
    <li><code>showDetails()</code> <em>(virtual)</em></li>
    <li><code>getAccountNumber()</code></li>
    <li><code>getBalance()</code></li>
    <li><code>setBalance()</code> <em>(optional)</em></li>
    <li><code>~Account()</code> <em>(virtual destructor)</em></li>
</ul>

<hr>

<h3>2️⃣ SavingsAccount (Derived Class)</h3>

<p>
Inherits from <strong>Account</strong> and adds interest-related functionality.
</p>

<h4>🔹 Additional Data</h4>
<ul>
    <li>Interest Rate</li>
</ul>

<h4>🔹 Member Functions (2–3)</h4>
<ul>
    <li><code>addInterest()</code></li>
    <li><code>withdraw()</code> <em>(override if rules differ)</em></li>
    <li><code>showDetails()</code> <em>(override)</em></li>
</ul>

<hr>

<h3>3️⃣ CurrentAccount (Derived Class)</h3>

<p>
Designed for accounts that support overdraft facilities.
</p>

<h4>🔹 Additional Data</h4>
<ul>
    <li>Overdraft Limit</li>
</ul>

<h4>🔹 Member Functions (2–3)</h4>
<ul>
    <li><code>withdraw()</code> <em>(override – allows overdraft)</em></li>
    <li><code>showDetails()</code></li>
</ul>

<hr>

<h3>4️⃣ Bank (Controller / Manager Class)</h3>

<p>
The <strong>Bank</strong> class is the heart of the system.
It manages all accounts and controls program flow.
</p>

<h4>🔹 Data Members</h4>
<ul>
    <li>Collection of accounts using <code>vector&lt;Account*&gt;</code></li>
</ul>

<h4>🔹 Member Functions (6–8)</h4>
<ul>
    <li><code>createAccount()</code></li>
    <li><code>findAccount()</code></li>
    <li><code>depositMoney()</code></li>
    <li><code>withdrawMoney()</code></li>
    <li><code>showSingleAccount()</code></li>
    <li><code>showAllAccounts()</code></li>
    <li><code>deleteAccount()</code> <em>(optional)</em></li>
    <li><code>menu()</code> <em>(main controller)</em></li>
</ul>

<hr>

<h2>➕ Optional Supporting Classes</h2>

<ul>
    <li><strong>Transaction</strong> – logs deposits & withdrawals</li>
    <li><strong>User</strong> – manages user credentials</li>
    <li><strong>FileManager</strong> – handles file I/O and data persistence</li>
</ul>

<hr>

<h2>⚙️ Operator Overloading (Minimal & Useful)</h2>

<p>
Only meaningful operator overloading is used to maintain clarity.
</p>

<ul>
    <li><code>+=</code> → Used for depositing money</li>
    <li><code>&lt;&lt;</code> → Used to display account details</li>
</ul>

<hr>

<h2>📊 Project Statistics (Approx.)</h2>

<table border="1" cellpadding="8">
    <tr>
        <th>Item</th>
        <th>Count</th>
    </tr>
    <tr>
        <td>Classes</td>
        <td>4</td>
    </tr>
    <tr>
        <td>Functions</td>
        <td>~18–22</td>
    </tr>
    <tr>
        <td>Operators Overloaded</td>
        <td>2–3</td>
    </tr>
</table>

<hr>

<h2>🎯 Learning Outcomes</h2>

<ul>
    <li>Clear understanding of inheritance and polymorphism</li>
    <li>Real-world application of OOP concepts</li>
    <li>Hands-on experience with virtual functions</li>
    <li>Clean separation of responsibilities using classes</li>
</ul>

<hr>

<h3>🚀 Future Enhancements</h3>

<ul>
    <li>Persistent storage using files</li>
    <li>Transaction history</li>
    <li>User authentication</li>
    <li>Exception handling</li>
</ul>

<hr>

<p><strong>Author:</strong> Akshay<br>
<strong>Language:</strong> C++<br>
<strong>Paradigm:</strong> Object-Oriented Programming</p>

</body>
</html><h4>🔹 Data Members</h4>
<ul>
    <li>Account Number</li>
    <li>Account Holder Name</li>
    <li>Balance</li>
</ul>

<h4>🔹 Member Functions (6–7)</h4>
<ul>
    <li><code>deposit()</code></li>
    <li><code>withdraw()</code> <em>(virtual)</em></li>
    <li><code>showDetails()</code> <em>(virtual)</em></li>
    <li><code>getAccountNumber()</code></li>
    <li><code>getBalance()</code></li>
    <li><code>setBalance()</code> <em>(optional)</em></li>
    <li><code>~Account()</code> <em>(virtual destructor)</em></li>
</ul>

<hr>

<h3>2️⃣ SavingsAccount (Derived Class)</h3>

<p>
Inherits from <strong>Account</strong> and adds interest-related functionality.
</p>

<h4>🔹 Additional Data</h4>
<ul>
    <li>Interest Rate</li>
</ul>

<h4>🔹 Member Functions (2–3)</h4>
<ul>
    <li><code>addInterest()</code></li>
    <li><code>withdraw()</code> <em>(override if rules differ)</em></li>
    <li><code>showDetails()</code> <em>(override)</em></li>
</ul>

<hr>

<h3>3️⃣ CurrentAccount (Derived Class)</h3>

<p>
Designed for accounts that support overdraft facilities.
</p>

<h4>🔹 Additional Data</h4>
<ul>
    <li>Overdraft Limit</li>
</ul>

<h4>🔹 Member Functions (2–3)</h4>
<ul>
    <li><code>withdraw()</code> <em>(override – allows overdraft)</em></li>
    <li><code>showDetails()</code></li>
</ul>

<hr>

<h3>4️⃣ Bank (Controller / Manager Class)</h3>

<p>
The <strong>Bank</strong> class is the heart of the system.
It manages all accounts and controls program flow.
</p>

<h4>🔹 Data Members</h4>
<ul>
    <li>Collection of accounts using <code>vector&lt;Account*&gt;</code></li>
</ul>

<h4>🔹 Member Functions (6–8)</h4>
<ul>
    <li><code>createAccount()</code></li>
    <li><code>findAccount()</code></li>
    <li><code>depositMoney()</code></li>
    <li><code>withdrawMoney()</code></li>
    <li><code>showSingleAccount()</code></li>
    <li><code>showAllAccounts()</code></li>
    <li><code>deleteAccount()</code> <em>(optional)</em></li>
    <li><code>menu()</code> <em>(main controller)</em></li>
</ul>

<hr>

<h2>➕ Optional Supporting Classes</h2>

<ul>
    <li><strong>Transaction</strong> – logs deposits & withdrawals</li>
    <li><strong>User</strong> – manages user credentials</li>
    <li><strong>FileManager</strong> – handles file I/O and data persistence</li>
</ul>

<hr>

<h2>⚙️ Operator Overloading (Minimal & Useful)</h2>

<p>
Only meaningful operator overloading is used to maintain clarity.
</p>

<ul>
    <li><code>+=</code> → Used for depositing money</li>
    <li><code>&lt;&lt;</code> → Used to display account details</li>
</ul>

<hr>

<h2>📊 Project Statistics (Approx.)</h2>

<table border="1" cellpadding="8">
    <tr>
        <th>Item</th>
        <th>Count</th>
    </tr>
    <tr>
        <td>Classes</td>
        <td>4</td>
    </tr>
    <tr>
        <td>Functions</td>
        <td>~18–22</td>
    </tr>
    <tr>
        <td>Operators Overloaded</td>
        <td>2–3</td>
    </tr>
</table>

<hr>

<h2>🎯 Learning Outcomes</h2>

<ul>
    <li>Clear understanding of inheritance and polymorphism</li>
    <li>Real-world application of OOP concepts</li>
    <li>Hands-on experience with virtual functions</li>
    <li>Clean separation of responsibilities using classes</li>
</ul>

<hr>

<h3>🚀 Future Enhancements</h3>

<ul>
    <li>Persistent storage using files</li>
    <li>Transaction history</li>
    <li>User authentication</li>
    <li>Exception handling</li>
</ul>

<hr>

<p><strong>Author:</strong> Akshay<br>
<strong>Language:</strong> C++<br>
<strong>Paradigm:</strong> Object-Oriented Programming</p>

</body>
</html>
