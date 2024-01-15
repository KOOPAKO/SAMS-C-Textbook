class TV
{
public:
    void SetStation(int Station);
    int GetStation() const;

private:
    int itsStation;
};

main()
{
    TV myTV;
    myTV = TV(); // added this and fixed the three lines below
    myTV.SetStation(2);
    myTV.SetStation(10);
    TV myotherTV = TV();
}