#The Caesar cipher\
Is one of the oldest and simplest encryption methods. It is a substitution
cipher, meaning that each letter in the original text, or plaintext, is replaced by a different
letter in the ciphertext. The Caesar method requires the specification of a shift distance, which
determines the letter to be substituted. For instance, a shift distance of 2 means that a is
replaced by c, b by d, etc. To decrypt, the shift is applied in the opposite direction. For
instance, with a shift of 2:

    She is a whiz.
    Becomes
    ujg ku c yjkb.
    
As long as the recipient knows the shift amount, the process can easily be reversed. Note that
case is ignored, and spaces and punctuation are carried over without change. Also note that
the shift wraps around:
              
       the “z” of “whiz” became “b” in the ciphertext.
             
For this project, I will write a program that repeatedly prompts the user for a one-line input
string, a choice to encrypt or decrypt, and a shift distance. It should then output the resulting
string. Here’s a sample session:

    Enter a string:
    she is a whiz
    Encrypt (1) or Decrypt(2):
    1
    Shift:
    2
    ujg ku c yjkb.
    Do another (Y/N)?
    N
My main() function will be written in C. My program will use the following
function, which should be implemented in IA-32:

    // IN: c is a single lower-case alphabetic character
    // IN: direction is 0 for encrypt, 1 for decrypt
    // IN: shift is a positive integer for the amount to be shifted
    // OUT: the correct encrypted/decrypted character
    // SIDE-EFFECTS: none
    char cipher(char c, int direction, int shift);
