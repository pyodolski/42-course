1. 그래픽환경이 없는지 확인(비밀번호 주의, root로 로그인 금지)
- echo $XDG-SESSION-TYPE
x11, wayland : GUL
tty : CLI
- echo $XDG_SESSION_TYPE

2. ufw 서비스가 시작되었는지 확인
- sudo ufw enable 
- sudo ufw status verbose
- sudo ufw disable 

3. ssh 서비스가 시작되었는 확인
- sudo systemctl enable ssh
- sudo systemctl status ssh
- sudo systemctl start ssh

- 비활성화
- sudo systemctl stop ssh
- sudo systemctl disable ssh

4. 운영체제 확인 방법

cat /etc/os-release
