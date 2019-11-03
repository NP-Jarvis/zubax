import socket
import random

with socket.socket(socket.AF_INET, socket.SOCK_DGRAM) as s:
    message= random.randint(0,999)
    addr= ('localhost',11235)

    s.sendto(message,addr)
    data,address = s.recvfrom(1024)      #1024 is buffersize
    print(data.decode())