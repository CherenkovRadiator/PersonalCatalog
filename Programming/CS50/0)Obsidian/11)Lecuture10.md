Here are some study notes from the "CS50x 2024 - Cybersecurity" lecture:

**What is Cybersecurity?**

- Cybersecurity is about keeping systems, data, accounts, and more secure. It’s increasingly important in our technology-driven world.
- **Security is not absolute** but about being resistant to attacks and controlling access.

**Passwords and Their Vulnerabilities:**

- Humans are bad at choosing passwords, leading to frequent account hacks.
- Common weak passwords include simple sequences, dictionary words, and predictable substitutions.
- **Dictionary attacks exploit lists of common passwords** to gain access to accounts.
- **Brute force attacks** systematically try all possible password combinations, and can be surprisingly fast even for 4-digit codes.

**Defending Against Password Attacks:**

- **Increasing password length and complexity** significantly increases the number of possible combinations, making brute force attacks much slower.
- **Limiting login attempts** increases the cost and risk for attackers.
- **Password managers** generate and store strong, unique passwords for each account, reducing the risk of password reuse.
- **Two-factor authentication (2FA)** requires a second factor, like a code sent to your phone, making it harder for attackers to gain access.

**Hashing and Salting:**

- **Hashing** transforms passwords into seemingly random values, making it difficult to recover the original password.
- **Salting** adds a unique, random value to each password before hashing, further protecting against rainbow table attacks and preventing the same password from producing identical hashes.

**Cryptography and Passkeys:**

- **Symmetric cryptography (secret key)** uses the same key for encryption and decryption, requiring a pre-shared secret.
- **Asymmetric cryptography (public key)** uses a key pair, allowing secure communication without a pre-shared secret.
- **Passkeys** are a newer technology that eliminates the need for passwords altogether, using public key cryptography and digital signatures for secure login.

**Encryption for Enhanced Security:**

- **End-to-end encryption** protects data even from the service provider, ensuring that only the sender and recipient can access the information.
- **Full disk encryption** scrambles all data on a device, requiring a password or key to access the information, protecting against unauthorized access if the device is lost or stolen.

**Important Takeaways:**

- **Use a password manager or passkeys.**
- **Turn on two-factor authentication.**
- **Turn on end-to-end encryption where possible.**
