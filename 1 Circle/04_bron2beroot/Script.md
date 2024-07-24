1. 시스템 아키텍처
sh
Copy code
printf "#Architecture: "
uname -a
uname -a 명령어를 사용하여 시스템의 커널 이름, 호스트 이름, 커널 릴리스, 커널 버전, 머신 하드웨어 이름, 프로세서 유형, 하드웨어 플랫폼 및 운영 체제 정보를 출력합니다.
2. 물리적 CPU 수
sh
Copy code
printf "#CPU physical : "
nproc --all
nproc --all 명령어를 사용하여 시스템의 물리적 CPU 코어 수를 출력합니다.
3. 가상 CPU 수
sh
Copy code
printf "#vCPU : "
cat /proc/cpuinfo | grep processor | wc -l
/proc/cpuinfo 파일에서 프로세서 정보를 가져와 grep processor로 필터링하고, 그 결과를 wc -l로 줄 수를 세어 가상 CPU의 수를 출력합니다.
4. 메모리 사용량
sh
Copy code
printf "#Memory Usage: "
free -m | grep Mem | awk '{printf"%d/%dMB (%.2f%%)\n", $3, $2, $3/$2 * 100}'
free -m 명령어로 메모리 정보를 가져와 grep Mem으로 필터링한 후, awk를 사용하여 총 메모리, 사용 중인 메모리 및 사용 비율을 계산하여 출력합니다.
5. 디스크 사용량
sh
Copy code
printf "#Disk Usage: "
df -a -BM | grep /dev/map | awk '{sum+=$3}END{print sum}' | tr -d '\n'
printf "/"
df -a -BM | grep /dev/map | awk '{sum+=$4}END{print sum}' | tr -d '\n'
printf "MB ("
df -a -BM | grep /dev/map | awk '{sum1+=$3 ; sum2+=$4 }END{printf "%d", sum1 / sum2 * 100}' | tr -d '\n'
printf "%%)\n"
df -a -BM 명령어로 모든 파일 시스템의 디스크 사용량을 메가바이트 단위로 가져와 /dev/map으로 필터링하고, 사용량 및 총 용량을 계산하여 출력합니다.
6. CPU 부하
sh
Copy code
printf "#CPU load: "
mpstat | grep all | awk '{printf "%.2f%%\n", 100-$13}'
mpstat 명령어로 CPU 사용량을 가져와 grep all으로 전체 CPU 정보를 필터링한 후, awk를 사용하여 유휴 시간($13 열)을 이용해 CPU 부하를 계산하여 출력합니다.
7. 마지막 부팅 시간
sh
Copy code
printf "#Last boot: "
who -b | awk '{printf $3" "$4"\n"}'
who -b 명령어로 시스템의 마지막 부팅 시간을 가져와 출력합니다.
8. LVM 사용 여부
sh
Copy code
printf "#LVM use: "
if [ "$(lsblk | grep lvm | wc -l)" -gt 0 ] ; then printf "yes\n" ; else printf "no\n" ; fi
lsblk 명령어로 블록 장치 정보를 가져와 grep lvm으로 LVM 사용 여부를 확인하고, 결과에 따라 "yes" 또는 "no"를 출력합니다.
9. TCP 연결 수
sh
Copy code
printf "#Connections TCP : "
ss | grep -i tcp | wc -l | tr -d '\n'
printf " ESTABLISHED\n"
ss 명령어로 현재 TCP 연결을 가져와 grep -i tcp로 필터링한 후, wc -l로 TCP 연결 수를 세어 출력합니다.
10. 사용자 로그인 수
sh
Copy code
printf "#User log: "
who | wc -l
who 명령어로 현재 로그인한 사용자 수를 출력합니다.
11. 네트워크 정보
sh
Copy code
printf "#Network: IP "
hostname -I | tr -d '\n'
printf "("
ip link show | awk '$1 == "link/ether" {print $2}' | sed '2, $d' | tr -d '\n'
printf ")\n"
hostname -I 명령어로 IP 주소를 가져와 출력하고, ip link show 명령어로 네트워크 인터페이스의 MAC 주소를 가져와 출력합니다.
12. Sudo 명령어 사용 횟수
sh
Copy code
printf "#Sudo : "
journalctl _COMM=sudo | wc -l | tr -d '\n'
printf " cmd\n"
journalctl _COMM=sudo 명령어로 sudo 명령어의 로그를 가져와 wc -l로 로그 수를 세어 출력합니다.
