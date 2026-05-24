# 📚 Book Management System (C++)

A console-based Book Management System built in C++ using a **Singly Linked List** with **Generic (Template) Node**. Books can be inserted at any position, deleted, and displayed. Data is persisted to a binary file (`book.bin`) on exit.

---

## Project Structure

```
├── main.cpp                  # Entry point, menu-driven interface
├── bookManagementSystem.cpp  # Book class implementation
├── bookManagementSystem.h    # Book class declaration
├── bookLL.cpp                # LinkedList<T> template implementation
├── bookLL.h                  # LinkedList<T> template declaration
├── node.cpp                  # Node<T> template implementation
├── node.h                    # Node<T> template declaration
└── book.bin                  # Binary file (auto-generated at runtime)
```

---

## Features

- Insert a book at any position in the linked list
- Delete a book by position
- Display all books in the list
- Data saved to `book.bin` binary file on program exit

---

## Class Overview

### `Book` — `bookManagementSystem.h / .cpp`

Represents a single book record.

| Field        | Type    | Description                    |
|--------------|---------|--------------------------------|
| `id`         | int     | Unique book identifier         |
| `bookName`   | char[]  | Name of the book (max 20)      |
| `authorName` | char[]  | Author's name (max 20)         |
| `catagory`   | char[]  | Book category (max 20)         |
| `price`      | int     | Price of the book              |
| `rating`     | float   | Rating between 0.0 and 10.0    |

**Key Methods:**

| Method | Description |
|--------|-------------|
| `Book()` | Default constructor — sets placeholder values |
| `Book(id, name, author, category, price, rating)` | Parameterized constructor |
| `getX() / setX()` | Getters and setters for all fields |
| `display()` | Prints all book details to console |

---

### `Node<T>` — `node.h / node.cpp`

A generic template node used by the linked list.

| Member | Description |
|--------|-------------|
| `data` | Stores the object of type `T` |
| `next` | Pointer to the next node |

**Key Methods:** `getData()`, `setData()`, `getNext()`, `setNext()`

---

### `LinkedList<T>` — `bookLL.h / bookLL.cpp`

A generic singly linked list.

| Method | Description |
|--------|-------------|
| `LinkedList()` | Constructor, initializes empty list |
| `insertPos(data, pos)` | Inserts node at given position |
| `deletePos(pos)` | Deletes node at given position |
| `display()` | Displays all nodes |
| `~LinkedList()` | Destructor — saves data to `book.bin` |

---

## Getting Started

### Prerequisites

- G++ compiler (C++11 or later)
- Linux / macOS / Windows (MinGW or WSL)

### Compile

```bash
g++ main.cpp -o bookManagement
```

> `main.cpp` includes `bookLL.cpp` which chains all other files, so a single compile command is enough.

### Run

```bash
./bookManagement
```

---

## Menu Options

```
1. Insert At Position
2. Delete At Position
3. Display
0. Exit
```

---

## Usage Examples

### Insert a Book
Select `1`, enter book details (ID, name, author, category, price, rating), then specify the position to insert at.

```
Enter Book Id: 1
Enter Book Name : TheGuide
Enter Author Name : RKNarayan
Enter Catagory : fiction
Enter Price : 199
Enter Rating : 9.2

Enter Position you want to store : 1
```

### Delete a Book
Select `2` and enter the position of the book to remove. The deleted book's details are printed to confirm.

### Display All Books
Select `3` to print all books currently in the list.

```
-_-_-_-_-_-_-_-_-_-_-_-
Book Id : 1
Book Name : TheGuide
Author Name : RKNarayan
Catagory : fiction
Price : 199
Rating : 9.2
-_-_-_-_-_-_-_-_-_-_-_-
```

### Exit
Select `0` — the destructor saves all remaining books to `book.bin` automatically.

---

## Binary File Persistence

On exit, the destructor of `LinkedList<T>` writes all book records to `book.bin` using binary I/O (`ofstream` with `ios_base::binary`). This allows data to be reloaded in future sessions.

> Note: File reading on startup is currently commented out in the constructor. Uncomment the `ifstream` block in `LinkedList()` inside `bookLL.cpp` to enable it.

---

## Known Limitations

- Book name, author name, and category are limited to 20 characters — names with spaces must be entered without spaces (e.g., `TheGuide` instead of `The Guide`) since `cin` is used for input
- No search, update, or category filter functionality yet
- Binary file reload on startup is commented out

---

## Future Improvements

- Add search by ID or name
- Add update price / rating feature
- Add category filter
- Replace `char[]` with `std::string` for easier input handling
- Re-enable binary file loading on startup
- Add input validation for rating range

---

## License

This project is open for educational use.
