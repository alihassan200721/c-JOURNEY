<div align="center">

```
 ██████╗      ██╗ ██████╗ ██╗   ██╗██████╗ ███╗   ██╗███████╗██╗   ██╗
██╔════╝      ██║██╔═══██╗██║   ██║██╔══██╗████╗  ██║██╔════╝╚██╗ ██╔╝
██║     █████╗██║██║   ██║██║   ██║██████╔╝██╔██╗ ██║█████╗   ╚████╔╝ 
██║     ╚════╝██║██║   ██║██║   ██║██╔══██╗██║╚██╗██║██╔══╝    ╚██╔╝  
╚██████╗      ██║╚██████╔╝╚██████╔╝██║  ██║██║ ╚████║███████╗   ██║   
 ╚═════╝      ╚═╝ ╚═════╝  ╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═══╝╚══════╝   ╚═╝  
```

**Learning C from the ground up — memory, pointers, and everything in between.**

![Language](https://img.shields.io/badge/Language-C-blue?style=flat-square&logo=c)
![Editor](https://img.shields.io/badge/Editor-Neovim-57A143?style=flat-square&logo=neovim)
![OS](https://img.shields.io/badge/OS-Fedora%20Linux-51A2DA?style=flat-square&logo=fedora)
![Status](https://img.shields.io/badge/Status-Active-brightgreen?style=flat-square)

</div>

---

## Why C?

Coming from Python and Blender scripting, I wanted to understand what actually happens under the hood — memory layout, pointers, manual allocation, the things higher-level languages abstract away. C is the closest you get to the machine without writing assembly.

This repo tracks everything: exercises, experiments, notes, and eventually projects built from scratch.

---

## Structure

```
c-journey/
│
├── 01-basics/              # Data types, variables, operators, printf/scanf
├── 02-control-flow/        # if/else, for, while, switch, do-while
├── 03-functions/           # Function design, recursion, scope, stack frames
├── 04-arrays-strings/      # Arrays, char arrays, string.h, manual string ops
├── 05-pointers/            # Pointer syntax, pointer arithmetic, pointers to pointers
├── 06-memory-management/   # malloc, calloc, realloc, free, valgrind, leaks
├── 07-structs/             # struct, union, enum, typedef, linked lists
├── 08-file-io/             # fopen, fread, fwrite, fseek, binary vs text
├── 09-advanced/            # Macros, preprocessor, bitwise ops, volatile, restrict
│
└── projects/               # Standalone C programs built along the way
```

Each folder contains `.c` files, and sometimes a short `notes.md` for concepts worth writing down.

---

## Progress

| # | Module | Topics | Status |
|---|--------|--------|--------|
| 01 | Basics | Types, variables, I/O, operators | 🔄 In Progress |
| 02 | Control Flow | Conditionals, loops, switch | ⬜ Not Started |
| 03 | Functions | Scope, recursion, stack | ⬜ Not Started |
| 04 | Arrays & Strings | char[], string.h, bounds | ⬜ Not Started |
| 05 | Pointers | *, &, arithmetic, arrays | ⬜ Not Started |
| 06 | Memory Management | Heap, malloc/free, leaks | ⬜ Not Started |
| 07 | Structs | struct, union, typedef | ⬜ Not Started |
| 08 | File I/O | fopen, fread, fwrite | ⬜ Not Started |
| 09 | Advanced | Macros, bitwise, preprocessor | ⬜ Not Started |
| — | Projects | Real programs | ⬜ Not Started |

---

## Toolchain

| Tool | What it does |
|------|-------------|
| `gcc` / `clang` | Compilation with `-Wall -Wextra` always on |
| `clangd` | LSP in Neovim — completions, diagnostics, go-to-def |
| `codelldb` | DAP debugger wired into nvim-dap-ui |
| `valgrind` | Memory leak detection |
| `make` | Build automation for multi-file programs |

**Compile a single file:**
```bash
gcc -Wall -Wextra -o out filename.c && ./out
```

**With debug symbols (for codelldb):**
```bash
gcc -g -Wall -Wextra -o out filename.c
```

---

## Related

- [`ashborn-nvim`](https://github.com/alihassan200721/ashborn-nvim) — Neovim config with clangd LSP and codelldb DAP already wired in
- [`python-journey`](https://github.com/alihassan200721/python-journey) — Where this all started
- [`ashborn-fedora_hyprland`](https://github.com/alihassan200721/ashborn-fedora_hyprland) — The machine running all of this

---

<div align="center">
<sub>alihassan200721 · learning in public</sub>
</div>
