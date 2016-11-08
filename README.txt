Program Title		: Chatting program
Author			: Byungwook Lee
E-MAIL			: quddnr153@naver.com & quddnr153@gmail.com
Last revised date	: 2016.11.08
Version			: 1.0
Environments		: Windows 10 64bit, Visual Studio 2015, MFC(C++)

Program Description
- MFC application for chatting
- Provide 1:N chatting
- Share 'Paint part' and 'Text part' in real-time


File Description
- Read 'readme.txt' firstly

1. Execute Server (ChatServer.exe)
2. Execute Clients (ChatClient.exe) -> If you execute on local, you would just execute the client application. But if you want to execute separately, you would revise ip address in client file and re build the program. -> ChatClient project -> ChatClientDlg.cpp -> line 105 "127.0.0.1" code would be changed your server ip address "xxx.xxx.xxx.xxx".
3. Type any text you want to talk other clients and click 'send' button.

4. Actually, paint part is not working now. I will revise that part and re-deploy.