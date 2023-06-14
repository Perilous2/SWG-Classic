# SWG-Classic
SWG Classic

Star Wars Galaxies Classic is based off of the SWGEmu Core3 with the stats of all weapons, schematics and items altered to match how things were when the game originally launched in June 2003.
In order to make it an evolving server we will offer monthly polls to add a feature or change an existing feature, allowing the players themselves to dictate the future of the server.

How to Build:
Dependencies
CMake 3.1.0 or higher
BerkeleyDB 5.3
MySQL Client and Server
OpenSSL libraries
pthreads
Lua 5.3 libraries
Zlib libraries
g++ 5.4+ or compatible
engine3
java jre 1.7+

Build:
Install dependencies (Debian 9+ or Ubuntu 16.04+)

sudo apt install build-essential libmysqlclient-dev liblua5.3-dev libdb5.3-dev libssl-dev cmake git default-jre
Install dependencies (RHEL/CentOS 8+ or Fedora 28+)

sudo dnf install automake cmake git gcc gcc-c++ java-1.8.0-openjdk-headless libatomic libdb-devel lua-devel make mariadb-devel ope>
Clone core3 repository somewhere (~/git)

sudo apt install build-essential libboost-system-dev libboost-thread-dev libboost-program-options-dev libboost-test-dev

mkdir -p ~/git
cd ~/git
git clone http://github.com/Perilous2/SWG-Classic
Build Core3 with 8 threads

cd MMOCoreORB
make -j8
Import sql database

mysql -h<MYSQLHOST> -u<MYSQLUSER> -p<MYSQLPASSWORD> < sql/swgemu.sql

How to Run:
cd ~/git/Core3/MMOCoreORB/bin
./core3

More info found here:                                                                    
     https://discord.gg/MDGhAtGM
                                                                    
