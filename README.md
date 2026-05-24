# c-language-02
day 2 of learning c 
# My C Programming Journey

A dedicated repository documenting my daily progress, core concepts learned, and code implementation as I build a rock-solid foundation in computer science through the C language.

---

## Day 1

### :Concepts Mastered
- **Syntax & Execution:** Configured the basic template of a C program and successfully executed the standard `Hello World` output.
- **Data Types & Variables:** Studied how variables act as named memory locations and explored foundational data types (`int`, `float`, `char`) and their roles in memory allocation.
- **Source Code Documentation:** Implemented single-line (`//`) and multi-line (`/* */`) comments to enhance code maintainability and readability.

### Debugging Log & Environment Setup

#### 1. Toolchain Configuration & Path Issues
- **Problem:** Encountered an environment issue where the GNU Compiler Collection binary (`gcc.exe`) via MinGW was not directly visible or recognized within the root setup directory.
- **Resolution:** Thoroughly analyzed the file hierarchy and realized the binaries reside inside the nested `/bin` directory. Leveraged the Command Line Interface (CLI) using explicit change directory (`cd`) commands to map out system paths and validate the compiler's responsiveness.

#### 2. Directory Nesting & Workspace Navigation
- **Problem:** Newly created source files threw a `file not found` or compilation error in the terminal.
- **Root Cause:** Accidental folder redundancy (nesting a subfolder with the exact same name inside the parent directory), leading to an incorrect relative path execution.
- **Resolution:** Audited the directory layout using native terminal commands. Instead of relying on manual fixes, I deeply explored VS Code's built-in features and configured a **Split Terminal** layout to actively monitor active working directories and execute code seamlessly.

###  Key Takeaway
Software engineering is deeply rooted in system-level understanding and patience. Debugging configuration issues today taught me the critical importance of pathing, CLI operations, and IDE optimization before even writing complex logic.

---
