# Vigenère Cipher in C

This project implements the **Vigenère cipher** in C, a classical encryption method that uses a keyword to encrypt messages. It is a polyalphabetic substitution cipher, where each letter in the plaintext is shifted by a corresponding letter in the keyword.

## 🛠️ Features
- **Encrypt** a message using the Vigenère cipher.
- Ignores non-alphabetic characters during encryption/decryption (keeps spaces and punctuation intact).
- Handles both uppercase and lowercase letters.

## 🚀 Requirements

You just need a **C compiler** (like `gcc`) to run this program.

## 📂 How It Works

1. The program takes a **plaintext** message and a **keyword** as inputs.
2. During **encryption**, each letter in the plaintext is shifted by the value corresponding to the matching letter in the keyword. If the keyword is shorter than the message, it repeats in a cyclic manner.

### Example
- **Plaintext**: `HELLO WORLD`
- **Keyword**: `KEY`
- **Ciphertext**: `RIJVS UYVJN`
