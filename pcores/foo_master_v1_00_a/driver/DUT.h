
class DUT {
public:
    enum DUTResponseChannel {
        GetResponseResponseChannel, DUTNumChannels
    };
    int connectHandler(DUTResponseChannel c, UshwInstance::MessageHandler h) {
        p->messageHandlers[c] = h;
        return 0;
    }

    static DUT *createDUT(const char *instanceName);
    void setBase ( unsigned int );
    void setBounds ( unsigned int );
    void setThreshold ( unsigned int );
    void setEnabled ( unsigned int );
    void enq ( unsigned int );
private:
    DUT(UshwInstance *, int baseChannelNumber=0);
    ~DUT();
    UshwInstance *p;
    int baseChannelNumber;
};