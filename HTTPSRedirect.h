#include <WiFiClientSecure.h>

class HTTPSRedirect : public WiFiClientSecure {
  private:
    const int httpsPort;
    const char* redirFingerprint;
    bool fpCheck = false;
    bool keepAlive = true;
    bool verboseInfo = false;
    
  public:
    HTTPSRedirect(const int, const char*, bool);
    HTTPSRedirect(const int);
    ~HTTPSRedirect();

    String getData(const char*, const char*, const char*);
    String getData(String&, const char*, const char*);
    String createRequest(const char*, const char*);
    void fetchData(bool, bool);
  
};

