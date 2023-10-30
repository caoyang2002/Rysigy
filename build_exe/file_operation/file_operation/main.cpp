#include "file_operation.h"


int main(int argc, char* argv[]) {
    std::string start_up = "\n"
        " ____                                             \n"
        "/\\  _`\\                   __                      \n"
        "\\ \\ \\L\\ \\  __  __    ____/\\_\\     __    __  __    \n"
        " \\ \\ ,  / /\\ \\/\\ \\  /',__\\/\\ \\  /'_ `\\ /\\ \\/\\ \\   \n"
        "  \\ \\ \\\\ \\\\ \\ \\_\\ \\/\\__, `\\ \\ \\/\\ \\L\\ \\\\ \\ \\_\\ \\  \n"
        "   \\ \\_\\ \\_\\/`____ \\/\\____/\\ \\_\\ \\____ \\\\/`____ \\ \n"
        "    \\/_/\\/ /`/___/> \\/___/  \\/_/\\/___L\\ \\`/___/> \\\n"
        "               /\\___/             /\\____/   /\\___/\n"
        "               \\/__/              \\_/__/    \\/__/ ";

    cout << start_up << endl;

    LPWSTR commandLine = GetCommandLineW();  // ��ȡ�����������ַ���
    int numArgs;
    LPWSTR* args = CommandLineToArgvW(commandLine, &numArgs);  // ����������Ϊ��������
    if (numArgs >= 2) {
        std::wstring filepath(args[1]);  // ��ȡ��һ���������ļ���Ŀ¼·����
        std::string filepath_gbk;  // ת������ļ�·����GBK ���룩
        int gbk_len = WideCharToMultiByte(936, 0, filepath.c_str(), filepath.length(),
            nullptr, 0, nullptr, nullptr);
        if (gbk_len > 0) {
            filepath_gbk.resize(gbk_len);
            WideCharToMultiByte(936, 0, filepath.c_str(), filepath.length(),
                &filepath_gbk[0], gbk_len, nullptr, nullptr);
        }
        std::cout << "��������ļ���Ŀ¼·����" << filepath_gbk << std::endl;
    }
    LocalFree(args);  // �ͷ��ڴ�










	file_operation FileOperation;
    
    //FileOperation.QueryFileVersions(argv[1]); // ��ѯ�ļ��汾

	//FileOperation.CreateFileVersions(argv[1]); // �����ļ��汾

    // ��ȡָ�����ļ��汾
    FileOperation.GetSpecilVerofFile(argv[1]);

	//FileOperation.DeleteAllFileVersions(argv[1]); // ɾ�������ļ��汾
    
	//FileOperation.IgnoreThisFile(); // ���Դ��ļ�
}
