#ifndef __SodiumServerDialog__
#define __SodiumServerDialog__

/**
@file
Subclass of ServerDialog, which is generated by wxFormBuilder.
*/

#include "sodium.hpp"
#include "server_dialog_base.hpp"

//// end generated include

/** Implementing ServerDialog */
class SodiumServerDialog : public ServerDialog {
protected:
    // Handlers for ServerDialog events.
    void start_server(wxCommandEvent& event);
    void stop_server(wxCommandEvent& event);
    void config_server(wxCommandEvent& event);
    void open_server(wxCommandEvent& event);
    void start_webserver(wxCommandEvent& event);
    void stop_webserver(wxCommandEvent& event);

public:
    /** Constructor */
    SodiumServerDialog(wxWindow* parent);
    ~SodiumServerDialog();
    //// end generated class members
};

class ServerAssistantFactory {
public:
    static wxDialog* MakeServerAssistant();
};

#endif  // __SodiumServerDialog__