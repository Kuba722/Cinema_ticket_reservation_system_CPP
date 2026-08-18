# Cinema Ticket Reservation System

A console-based cinema ticket reservation system written in C++.

> **Project status:** Educational project originally developed in 2024.
> In 2026, I revisited the project to improve the documentation and
> organize the source code into separate header and implementation files.
> The original application logic has been preserved.

## Features

### Client
- User registration and login
- Browse available movies
- View seating layout
- Select a seat
- Purchase a ticket

### Admin
- Administrator registration and login
- Add and delete movies
- Display movies
- View seating layout
- Reset seats

## Technologies

- C++
- Object-Oriented Programming (OOP)
- Inheritance and polymorphism
- STL (`std::vector`)
- File I/O

## Project Structure

```text
.
├── include/
│   ├── admin.h
│   ├── client.h
│   ├── movie.h
│   └── user.h
│
├── src/
│   ├── admin.cpp
│   ├── client.cpp
│   ├── movie.cpp
│   ├── user.cpp
│   └── main.cpp
│
├── Admin.txt
├── Client.txt
├── Movies.txt
├── Places_1.txt
└── Places_2.txt
