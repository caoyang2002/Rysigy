#include "folder_operation.h"

int main(int argc, char* argv[]) {
    LPWSTR commandLine = GetCommandLineW();  // ��ȡ�����������ַ���
    int numArgs;
    LPWSTR* args = CommandLineToArgvW(commandLine, &numArgs);  // ����������Ϊ��������
    if (numArgs >= 2) {
        std::wstring filepath(args[1]);  // ��ȡ��һ���������ļ���Ŀ¼·����
        std::string filepath_mb;  // ת������ļ�·����UTF-8 ���룩
        int mb_len = WideCharToMultiByte(CP_UTF8, 0, filepath.c_str(), filepath.length(),
            nullptr, 0, nullptr, nullptr);
        if (mb_len > 0) {
            filepath_mb.resize(mb_len);
            WideCharToMultiByte(CP_UTF8, 0, filepath.c_str(), filepath.length(),
                &filepath_mb[0], mb_len, nullptr, nullptr);
        }
        std::cout << "��������ļ���Ŀ¼·����" << filepath_mb << std::endl;
    }
    LocalFree(args);  // �ͷ��ڴ�


    //
    folder_operation FolderOperation;

    //FolderOperation.queryFolderVersions(argv[1]);
    FolderOperation.createFolderVresions(argv[1]);
    //FolderOperation.openFolderVersions(argv[1]);
    //FolderOperation.ignoreThisFolder(argv[1]);
    //FolderOperation.deleteFolderVersions(argv[1]);
    //FolderOperation.deleteAllFolderVersions(argv[1]);





}
