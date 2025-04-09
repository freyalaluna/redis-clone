# README
This project is a prototype for a key-value database modelled after [Redis](https://redis.io/)

## Requirements
The database utilizes the UNIX socket API for TCP communication between the server and client, as well as Linux kernel macros for storage optimizations. As such, it must be run on a Linux operating system. For Windows users wishing to run this project, [Windows Subsystem for Linux](https://learn.microsoft.com/en-us/windows/wsl/install) can be used to run a Linux environment without the commitment of OS virtualization.

## How to run
The database consists of two programs, `server.o` and `client.o`. These programs are pre-compiled as a part of this project. To run, enter `./server` in one terminal and `./client` in another.

### Database Commands
The following database commands are supported:

#### GET
`get key`

#### SET
`set key value`

#### DEL
`del key`

#### KEYS
`keys`

#### ZADD
`zadd zset score name`

#### ZREM
`zrem zset name`

#### ZSCORE
`zscore zset name`

#### ZQUERY
`zquery zset score name offset limit`
