class VRCRobot {
public:
    VRCRobot() : catapult(), doubleReverseFourBar() {}
    void moveForward(int distance);
    void moveBackward(int distance);
    void turnLeft(int angle);
    void turnRight(int angle);
    void raiseCatapult();
    void lowerCatapult();
    void activateDoubleReverseFourBar();
    void deactivateDoubleReverseFourBar();
private:
    class Catapult {
    public:
        Catapult() : isRaised(0) {}
        void raise();
        void lower();
    private:
        int isRaised;
    } catapult;
    class DoubleReverseFourBar {
    public:
        DoubleReverseFourBar() : isActive(0) {}
        void activate();
        void deactivate();
    private:
        int isActive;
    } doubleReverseFourBar;
};

void VRCRobot::moveForward(int distance) {}
void VRCRobot::moveBackward(int distance) {}
void VRCRobot::turnLeft(int angle) {}
void VRCRobot::turnRight(int angle) {}
void VRCRobot::raiseCatapult() {
    catapult.raise();
}
void VRCRobot::lowerCatapult() {
    catapult.lower();
}
void VRCRobot::activateDoubleReverseFourBar() {
    doubleReverseFourBar.activate();
}
void VRCRobot::deactivateDoubleReverseFourBar() {
    doubleReverseFourBar.deactivate();
}

void VRCRobot::Catapult::raise() {
    isRaised = 1;
}

void VRCRobot::Catapult::lower() {
    isRaised = 0;
}

void VRCRobot::DoubleReverseFourBar::activate() {
    isActive = 1;
}

void VRCRobot::DoubleReverseFourBar::deactivate() {
    isActive = 0;
}
