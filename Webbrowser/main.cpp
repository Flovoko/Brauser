#include "webview.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    webview::webview w;
    w.set_title("Brauser");
    w.set_size(1000, 600, WEBVIEW_HINT_NONE);
    w.navigate("https://www.duckduckgo.com");
    w.run();
    return 0;
}
