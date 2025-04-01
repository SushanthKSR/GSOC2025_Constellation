# Qt Algorithm Sorting

A C++20 Qt6 desktop application that visually demonstrates sorting algorithms step-by-step using animated charts. Built with the Meson build system.

---

## Features

- Visual sorting animations (bubble sort by default)
- Bar chart updates after each pass
- Interactive UI with a "Sort" button
- Easily extensible for new algorithms
---

## Requirements

- **Qt6**
- **Meson**
- **Ninja**
- **C++20**

Install dependencies:

```bash
brew install qt meson ninja
```

### Build Yourself
``` bash
#clone repo
git clone https://github.com/your-username/AlgorithmSorting.git
cd AlgorithmSorting
```
```bash
# Set up build directory
PKG_CONFIG_PATH="/opt/homebrew/opt/qt/lib/pkgconfig" meson setup builddir --buildtype=debug
```
```bash
# Compile
meson compile -C builddir
```
### Run App
```bash
./builddir/src/AlgorithmSorting
```

### Result Chart showing the sorting
![Screen Recording 2025-04-01 at 5 30 23 AM](https://github.com/user-attachments/assets/2d4d8896-c451-40ae-a421-db9413e6ebee)

#### Sushanth Kesamreddy 2025

