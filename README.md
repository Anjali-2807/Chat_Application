Chat Application
This is a simple client-server chat application built in C++ that allows multiple clients to communicate with each other. It supports direct messages (DM) between users, logs all communication, and can handle multiple users concurrently.

Features
Multiple Clients: Supports up to MAX_CLIENTS concurrent clients.
Direct Messaging: Users can send private messages using the @username format.
Chat History: All messages are logged into a chat_history file.
Real-time Communication: Clients receive messages instantly after being sent by others.
Libraries Used
<netinet/in.h> – Provides definitions for Internet domain addresses and the socket API.
<unistd.h> – Provides access to the POSIX operating system API (e.g., close()).
Requirements
Operating System: Linux-based system (Tested on Ubuntu)
C++ Compiler: C++11 or later (e.g., GCC)
Libraries:
<iostream>
<vector>
<string>
<thread>
<fstream>
<cstring>
<netinet/in.h>
<unistd.h>
<algorithm>
<map>
