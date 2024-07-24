1. sudo --version 수도 설치 확인
2. sudo 그룹에 새 사용자 할당
sudo usermod -aG sudo jupyo
visudo

Defaults        env_reset : sudo 실행할때마다 환경변수 초기화
Defaults        mail_badpass : 비밀번호 틀릴시 메일
		: 명령어를 실행하 때 사용될 경로 지정
Defaults        secure_path="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:>
Defaults        badpass_message="authentication fail" : 비밀번호 인증실패 메세지
Defaults        iolog_dir="/var/log/sudo/" : 입력 및 출력을 로그 파일로 저장할 디렉토리 설정
Defaults        log_input 입력으로그로
Defaults        log_output 풀력을 로그
Defaults        requiretty 명령어 입력할 때 터미널 세션 필요 비정상적인 수도 방직
Defaults        passwd_tries=3 입력횟수 3번으로 제한
로

- sudo란 리눅스와 유닉스 운영체제에서 슈퍼유저 권한으로 명령어를 실행할 수 있게 해주는 프로그램이다 슈퍼유저 권한은 시스템에서 최상위 권한을 가지는 계정으로 모든 시스템 설정을 변경할 수 있다 일반 유저는 이를 이용해 시스템에 패키지를 설치하는 등 자신의 권하능 ㄹ넘어서는 활동이 가능하다

/var/log/sudo/00/00/01 로그 확인
