#include <iostream>
#include <vector>
#include <sstream>
std::vector<std::string>Valid_Characters{
    "a",
    "b",
    "c",
    "d",
    "E",
    "e",
    "A",
    "1",
    "2",
    "3",
    "4",
    "5",
    "6",
    "7"
};
//request the input stream
extern std::stringstream KD_InputStream;
void KD_ServerInit(char**);
void KD_GameTimeInit();
void KD_TrueLoadingServiceBegin();
void KD_StreamInput(std::string string)
{
    KD_InputStream << string << std::endl;
}
void KD_PrintScreen(const std::string& chararra)
{
    std::cout << chararra << std::endl;
}
unsigned KD_LoadingLatency = 1;
bool KD_LoggedIn = false;
char KD_UserAuthentication[] = "anc";
int main(int argc, char* argv[]) {
    KD_TrueLoadingServiceBegin();
    KD_ServerInit(argv);

    return 0;
}
