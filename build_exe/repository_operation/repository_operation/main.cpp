
#include "check_repository.h"


int main(int argc, char* argv[]) {

    //LPWSTR commandLine = GetCommandLineW();  // ��ȡ�����������ַ���
    //int numArgs;
    //LPWSTR* args = CommandLineToArgvW(commandLine, &numArgs);  // ����������Ϊ��������
    //if (numArgs >= 2) {
    //    std::wstring filepath(args[1]);  // ��ȡ��һ���������ļ���Ŀ¼·����
    //    std::string filepath_mb;  // ת������ļ�·����UTF-8 ���룩
    //    int mb_len = WideCharToMultiByte(CP_UTF8, 0, filepath.c_str(), filepath.length(),
    //        nullptr, 0, nullptr, nullptr);
    //    if (mb_len > 0) {
    //        filepath_mb.resize(mb_len);
    //        WideCharToMultiByte(CP_UTF8, 0, filepath.c_str(), filepath.length(),
    //            &filepath_mb[0], mb_len, nullptr, nullptr);
    //    }
    //    std::cout << "��������ļ���Ŀ¼·����" << filepath_mb << std::endl;
    //}
    //LocalFree(args);  // �ͷ��ڴ�


	RepositoryOperation repo_opt;

	repo_opt.CheckRepository();
	//repo_opt.OpenRepository();
	//repo_opt.CreateRepository();
	//repo_opt.DeleteRepository();
    //repo_opt.GetRepositorySize();

}
