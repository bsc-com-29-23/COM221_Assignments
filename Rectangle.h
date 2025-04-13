using namespace std;
class rectangle{

    private:
    float length;
    float width;

    public:
    rectangle();
    void SetValues(float x,float y);
    float GetValues();
    float calculates(float length,float width);
    ~rectangle();
};