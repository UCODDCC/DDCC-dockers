from ubuntu:18.04

run apt update -y
run apt upgrade -y
run apt install g++ cmake git -y

workdir /
run git clone https://github.com/UCODDCC/DDCC-containers-code.git

run mkdir -p /app/build
run cp -r /DDCC-containers-code/vector/* /app

workdir /app/build
run cmake ..
run make

cmd /app/build/app