1. 현재 로그인한 유저가 sudo와 user42에 속해잇는지 확인
- groups
- groups jupyo | grep user42

2. 새사용자를 만듬
sudo adduser pyo
groups jupyo -> user42 sudo 

비밀번호 정책 
vi /etc/pam.d/common-password
vi /etc/login.def

- 30일 비밀번호만료 
- 변경 후 최소 2일 후 변경 가능
- 만료 7일 전 경고 표시

- sudo addgroup evaluating 
- sudo usermod -aG evaluating jupyo
- grep sudo /etc/group | cut -d: -f4 : sudo에 속한 user 불러오기



