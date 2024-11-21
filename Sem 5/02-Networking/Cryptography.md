1. Cryptography
2. IAM, Authentication, CIA
3. Digital Signature, VoIP
4. Packet Encryption
5. Practical: Subnetting, HTTP(S), (Wire Shark)

# Cryptography and Its Types - Presentation Topics

## Level 1 Topics

1. **Introduction to Cryptography**
   - Overview of Cryptography
   - Importance in securing communication

2. **Types of Cryptography**
   - Symmetric Key Cryptography
   - Asymmetric Key Cryptography
   - Hash Functions

3. **Applications of Cryptography**
   - Password Protection
   - Digital Currencies & Cryptocurrencies
   - Secure Web Browsing

4. **Cryptography Algorithms**
   - AES (Advanced Encryption Standard)
   - RSA (Rivest-Shamir-Adleman)
   - DES (Data Encryption Standard)

5. **Advantages of Cryptography**
   - Secure Communication
   - Data Integrity
   - Protection against Cyber Attacks

---

## Level 2 Topics (Sub-topics for deeper dive)

1. **Symmetric Key Cryptography**
   - Key Exchange and Management
   - Examples: DES, AES

2. **Asymmetric Key Cryptography**
   - Public and Private Key Concept
   - RSA Algorithm in Detail

3. **Hash Functions in Cryptography**
   - Role of Hashing in Data Integrity
   - SHA and Its Variants (SHA-2, SHA-3)

4. **Cryptography in Real-World Applications**
   - Use in Blockchain and Cryptocurrencies
   - Role in Secure Emails and Instant Messaging

5. **Security Risks and Challenges in Cryptography**
   - Cryptanalysis and Attacks
   - Advances in Quantum Cryptography


# Level 1 Topics for Cryptography Presentation

## 1. Introduction to Cryptography

### Definition:
Cryptography is the practice of securing communication and information through the use of codes so that only authorized parties can access and understand the data. It involves algorithms and keys to convert plain text into ciphertext, making it unreadable without the decryption key.

### Real-Time Example:
- **End-to-End Encryption in Messaging Apps**: Applications like WhatsApp, Signal, and Telegram use cryptography to ensure that only the sender and recipient can read messages. Even if someone intercepts the message during transmission, it cannot be decrypted without the decryption key.
  
### Case Study:
- **Data Breach of Target (2013)**: One of the largest retail data breaches in history, where hackers stole personal data of 40 million credit and debit card holders. Cryptography and encryption were not sufficiently used for the data at rest, leading to unauthorized access. Post-breach, companies have improved encryption standards to prevent such breaches.

---

## 2. Types of Cryptography

### Symmetric Key Cryptography:
- **Definition**: Symmetric key cryptography uses the same key for both encryption and decryption. The sender and receiver must securely share the key before communication can begin.

- **Real-Time Example**: 
  - **AES (Advanced Encryption Standard)**: Used to encrypt sensitive data in many government and financial institutions. For instance, encrypted files on your computer can be decrypted only if you have the same key that was used to encrypt them.
  
- **Case Study**: 
  - **Encryption in Wi-Fi Networks**: WPA2 (Wi-Fi Protected Access 2) uses symmetric encryption (AES) to secure wireless communication. If someone tries to intercept your Wi-Fi data, they can’t decrypt it without the Wi-Fi key.

### Asymmetric Key Cryptography:
- **Definition**: Asymmetric key cryptography uses a pair of keys: a public key (for encryption) and a private key (for decryption). Only the receiver’s private key can decrypt the message encrypted with the public key.

- **Real-Time Example**:
  - **Secure Websites (SSL/TLS)**: Websites like your bank’s site use asymmetric cryptography to establish a secure connection. Your browser encrypts data with the website’s public key, and the website decrypts it using its private key.

- **Case Study**:
  - **HTTPS and SSL/TLS**: In 2014, Google began penalizing sites that didn’t use SSL (Secure Sockets Layer) encryption, marking a shift toward stronger cryptography for securing online transactions. Now, SSL/TLS is standard practice to ensure secure communication on the web.

### Hash Functions:
- **Definition**: A hash function takes an input (or "message") and produces a fixed-length string of characters, which is typically a digest that represents the data. Hash functions are one-way operations, meaning you can’t reverse the process to retrieve the original data.

- **Real-Time Example**:
  - **Password Storage**: Many websites store passwords as hashes rather than plaintext. When you log in, your password is hashed and compared to the stored hash to verify your identity. This prevents anyone from accessing your password, even if they gain access to the database.

- **Case Study**:
  - **LinkedIn Data Breach (2012)**: In 2012, LinkedIn suffered a breach where millions of passwords were stolen. However, because the passwords were hashed, the attackers couldn’t retrieve the actual passwords without significant computational effort, highlighting the importance of secure password hashing.

---

## 3. Applications of Cryptography

### Password Protection:
Cryptography is commonly used to secure user passwords. Instead of storing passwords in plaintext, systems store a hashed version of the password, which cannot be reversed back to the original password without extensive computing resources.

- **Real-Time Example**: 
  - **Email Accounts**: Services like Gmail or Outlook use cryptography to protect users' passwords. If an attacker gets access to a database, they only see hashed password values, making it harder to gain unauthorized access.

- **Case Study**:
  - **Yahoo Data Breach (2014)**: Over 3 billion user accounts were affected, and hackers had access to hashed passwords. Since Yahoo used salt with the hashes, it made it significantly more difficult for the attackers to crack the password hashes.

---

### Digital Currencies & Cryptocurrencies:
Cryptocurrency transactions are secured by cryptographic algorithms. The integrity and security of digital currencies like Bitcoin rely heavily on cryptography to prevent fraud and unauthorized access.

- **Real-Time Example**:
  - **Bitcoin Blockchain**: Every Bitcoin transaction is secured with public key cryptography. The private key is needed to authorize transactions, ensuring that only the rightful owner can transfer Bitcoin.

- **Case Study**:
  - **Mt. Gox Bitcoin Exchange Hack (2014)**: Hackers were able to steal 850,000 Bitcoins due to inadequate security measures. While Bitcoin itself uses strong cryptographic algorithms, the breach was attributed to poor security practices at the exchange level.

---

### Secure Web Browsing:
Cryptography is vital for ensuring the security and privacy of users when browsing the internet. This is achieved using SSL/TLS encryption, which protects data transmitted between your browser and websites.

- **Real-Time Example**:
  - **Banking Websites**: When you access your bank account online, SSL/TLS encrypts your connection to protect sensitive financial information from being intercepted.

- **Case Study**:
  - **Heartbleed Bug (2014)**: A vulnerability in the OpenSSL library affected millions of websites, exposing sensitive information. The bug allowed attackers to read memory from affected servers, highlighting the importance of regularly updating cryptographic software.

---

## 4. Cryptography Algorithms

### AES (Advanced Encryption Standard):
AES is a widely-used symmetric key encryption algorithm that encrypts data in fixed-size blocks. It is regarded as one of the most secure algorithms for encrypting sensitive information.

- **Real-Time Example**: 
  - **File Encryption**: Many software tools like BitLocker (Windows) and FileVault (MacOS) use AES to encrypt files on your computer, ensuring that your data remains private even if your device is lost or stolen.

- **Case Study**:
  - **U.S. Government**: AES is used by the U.S. government to protect classified data. In 2001, the National Institute of Standards and Technology (NIST) selected AES as the encryption standard for federal government use after an extensive public evaluation process.

---

### RSA (Rivest-Shamir-Adleman):
RSA is an asymmetric encryption algorithm that uses a public key for encryption and a private key for decryption. It is widely used for secure data transmission and digital signatures.

- **Real-Time Example**: 
  - **Digital Signatures**: When you sign a PDF document electronically, an RSA-based digital signature proves that the document was signed by you and hasn’t been altered.

- **Case Study**:
  - **Secure Email (PGP and GPG)**: Many secure email services use RSA encryption to ensure the confidentiality of messages, with the sender encrypting the message with the recipient's public key, and the recipient decrypting it with their private key.

---

### DES (Data Encryption Standard):
DES is an older symmetric encryption algorithm that was widely used but is now considered weak due to its short key length. It was replaced by AES for most modern cryptographic uses.

- **Real-Time Example**:
  - **Legacy Systems**: DES may still be used in legacy systems where upgrading to AES is not feasible. However, its vulnerabilities make it unsuitable for securing sensitive data today.

- **Case Study**:
  - **Cracking DES (1997)**: In 1997, a team using the "DES Cracker" (a supercomputer designed to crack DES encryption) successfully cracked a DES-encrypted message in just 56 hours, highlighting the need for stronger encryption methods like AES.

---

## 5. Advantages of Cryptography

### Secure Communication:
Cryptography ensures that messages transmitted over insecure channels, such as the internet, remain private and tamper-proof.

- **Real-Time Example**: 
  - **Banking Transactions**: Online banking uses cryptography to ensure that transactions are encrypted and cannot be intercepted or altered by malicious parties.

### Data Integrity:
Cryptography helps ensure that data is not tampered with during transmission. Hash functions are often used to verify that data has not been changed.

- **Real-Time Example**:
  - **File Integrity Checks**: When downloading software, hash values are often provided to verify that the file has not been altered or corrupted during transfer.

### Protection Against Cyber Attacks:
Cryptography plays a crucial role in defending against various types of cyberattacks, such as man-in-the-middle and replay attacks.

- **Case Study**:
  - **Man-in-the-Middle Attack (SSL Stripping)**: Attackers intercepted communication between a user and a website by downgrading SSL to HTTP, allowing them to view sensitive data. Modern cryptographic standards have largely mitigated such attacks.

