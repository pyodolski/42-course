1. 설치 확인
dpkg -l ufw
sudo ufw status

ufw는 우분투 및 다른 데비안 계열의 리눅스 시스템에서 사용할 수 있는 간단한 방화벽 도구이다 기본적으로 비활성화 되어있지만 사용자가 규칙을 추가하여 활성화 할 ㅜ수 있다 사용자가 쉽게 방화벽 규칙을 설정하고 관리할 수 있도록 하는 인터페이스를 제공한다.

sudo vim /etc/ssh/sshd_config
ufw allow 8080
sudo uw status
sudo ufw delete allow 8080
