#pragma once
#include "views/View.h"

namespace hotel {
    class MainView: public View {
        std::string logo;
        int logo_width;

    public:
        MainView();
        ~MainView();

        // Inherited via View
        virtual void display() override;
    };
}
