# bitviz 

A lightweight C utility to visualize how decimal integers are represented in binary. Perfect for students and developers learning bitwise operations.

## Features

* Converts integers (0-255) into an 8-bit byte.
* Uses bit-shifting logic for efficient conversion.

## Installation & Usage

### Prerequisites

You’ll need a C compiler (like `gcc` or `clang`).

### Compiling

Open your terminal and run:

Using gcc:

```bash
gcc bitviz.c -o bitviz

```

Using clang:
```bash
clang bitviz.c -o bitviz

```

### Running

```bash
./bitviz

```

## How it Works

The program takes a decimal number and iterates through 8 bits. It uses the **Right Shift** (`>>`) and **Bitwise AND** (`&`) operators to check the state of each bit individually.

```c
// Core logic snippet
int k = n >> i;  // Move the bit at position 'i' to the far right
if (k & 1)       // Check if that bit is 1
    printf("1");
else
    printf("0");

```

## Example Output

```text
Enter a small number (0-255): 34

Bitwise Visualization:

 128  64  32  16   8   4   2   1
---------------------------------
   0   0   1   0   0   0   1   0

Therefore, the byte for 34 is 00100010.
```

## License

This project is open-source and available under the [MIT License](https://opensource.org/licenses/MIT).
