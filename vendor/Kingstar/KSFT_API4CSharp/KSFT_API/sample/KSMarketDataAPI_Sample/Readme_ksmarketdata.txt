/**
 *@�ļ�  ��Readme_ksmarketdata.txt  ��������API��Դ����˵���ļ�
 *@����  : xdhu
 *@ϵͳ����API���Գ���
 *@��˾����ʤ�ƽ��˴�
 *@�޸���ʷ��
    20121203  ����
 */
һ���ļ�˵����
KSMarketDataAPI_Sample�ļ��а��������ļ���
Դ�ļ�   MdUserApi_Sample.cpp
linux����makefile�ļ�   makefile
windows����vc��Ŀ�ļ�   MdUserApi_Sample.cpp.sln��MdUserApi_Sample.cpp.vcproj
�����ļ�		Readme_ksmarketdata.txt, Readme_ksmarketdata_en.txt

�����ļ����ܣ�
MdUserApi_Sample.cpp  			                        ��Ҫʵ�ֲ���libksmarketdataapi.so��̬��Ļ�������
makefile 			    				��Ҫʵ����linuxƽ̨�£����Կ�ִ�г���ı��롣
MdUserApi_Sample.cpp.sln��MdUserApi_Sample.cpp.vcproj	        ��Ҫʵ����windowsƽ̨�£����Կ�ִ�г���ı��롣

����linuxƽ̨���롢����˵��

1������˵��
   makefile�ṩ32λ���Գ����64λ���Գ���ı��롣

   1��  ������
	����ȷ����������װ��gcc 4.1.2�������ϰ汾
	��linux��shell�������� ���� gcc -v ���Բ鿴gcc�İ汾��Ϣ
	�Ͱ汾��gcc���ܵ��±������
   
   2��  ��α���
	��linux�� shell������������make���
	make   		����64λ���Գ���Ĭ�ϣ�
	make  vtype=32r ����32λ���Գ���
        make  vtype=64r ����64λ���Գ���

   3��  ����Ŀ��
	make �� make vtype=64r ���� KSMarketDataAPI_Sample Ŀ¼�£����� MdUserApi_Sample��ִ���ļ�������64λ���Գ���
        make vtype=32r         ���� KSMarketDataAPI_Sample Ŀ¼�£����� MdUserApi_Sample��ִ���ļ�������32λ���Գ���
	
   4��  ע������
	�ڵ�ǰ����������32λ��64λ����ʱ��ִ��һ��make�������Ҫִ�� make clean ,ɾ���ϴα�����м�Ŀ���ļ���
	�Է�ֹ����64λ��������32λ���м�Ŀ���ļ������32λ����������64λ���м�Ŀ���ļ������±������

2������˵��
   
   1�����м��
      ���Դ�������У���Ҫȷ����̬��libksmarketdataapi.so,libkslkc64r.so(32λ����libkslkc32r.so)�ļ��Ĵ��ڡ������������32λ��64λ��libksmarketdataapi.so���ļ�����ͬ���ֱ���sdk/linux/linux32/��   sdk/linux/linux64Ŀ¼�¡���libkslkc32r.so��sdk/linux/linux32/Ŀ¼�£�libkslkc64r.so��sdk/linux/linux64/Ŀ¼�£�
      ����Ƿ��Ѿ��ɹ���������Գ���Ŀ�ִ���ļ��� ����׶ν���runĿ¼��������Ӧ�Ŀ�ִ�г��򣩡�

   2) ��̬���ļ���ִ����������
      
      ȷ����̬�� libksmarketdataapi.so���п�ִ�����ԡ�����ͨ��ls -l libksmarketdataapi.so�鿴�ļ������ԡ�
      ȷ����̬�� libkslkc64r.so����libkslc32r.so�����п�ִ�����ԡ�����ͨ��ls -l libkslkc64r.so ��libkslkc32r.so�����鿴�ļ����ԡ�
      ����̬�ⲻ�߱���ִ�����ԣ�������linux shell�������£�ͨ�� chmod +x libksmarketdataapi.so��ʵ�֡� ��������ο� man 1 chmod

   3�����ö�̬�����·��
      ����libksmarketdataapi.so�ľ���·��Ϊ/xxx/yyy/zzz/libksmarketdataapi.so�������·�ʽ���ö�̬�����·�������Բο�man 3 dlopen

      	 ���Խ�libksmarketdataapi.so,libkslkc64r.so(��libkslkc32r.so��������Ŀ¼·������ӵ�LD_LIBRARY_PATH���������С�
	 LD_LIBRARY_PATH=/xxx/yyy/zzz/��${LD_LIBRARY_PATH};  export LD_LIBRARY_PATH

   4) ��黷�����õ���ȷ��
      a)����ִ�г���Զ�̬������ü����Ƿ���ȷ
	ldd  MdUserApi_Sample   �����Գ���Զ�̬��ļ���
      b)�鿴��ǰ�Ķ�̬��İ汾��Ϣ
	strings libksmarketdataapi.so|grep KSFT_API_Version
   5��ע������
      �������ȷ���У�����Ҫ��ý��˴����Ȩ�ļ�KSInterB2C.lkc, ȷ���ڿ�ִ���ļ�����Ŀ¼����KSInterB2C.lkc�ļ����������ϵ���߻�ȡ��Ȩ�ļ���


����Windowsƽ̨���롢����˵��

1������˵��
   ��Ҫͨ��Visual Studio 2005 IDE���������ñ��롣

   1) ������
   ����ȷ����������װ��Visual Studio 2005�����ϰ汾��
   
   2����α���
   ͨ��vs��MdUserApi_Sample.cpp.sln�ļ������뼴�ɡ�
   
   3������Ŀ��
   ��KSMarketDataAPI_SampleĿ¼������MdUserApi_Sample.exe��ִ���ļ���

2������˵��
   ȷ��KSMarketDataAPI_SampleĿ¼����KSMarketDataAPI.dll,cpack.dll,lkcdll.dll
   ��KSMarketDataAPI_SampleĿ¼��ִ��MdUserApi_Sample.exe���ɡ�
   ͬ����ȷ������Ҫ��ȡ��Ȩ�ļ�KSInterB2C.lkc��ȷ���ڿ�ִ���ļ�����Ŀ¼����KSInterB2C.lkc
      