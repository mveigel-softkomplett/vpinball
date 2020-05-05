#ifndef H_LIGHT_STATES_PROPERTY
#define H_LIGHT_STATES_PROPERTY

class LightStatesProperty: public BasePropertyDialog
{
public:
    LightStatesProperty(VectorProtected<ISelect> *pvsel);
    virtual ~LightStatesProperty()
    {
    }

    void UpdateVisuals(const int dispid=-1);
    void UpdateProperties(const int dispid);

protected:
    virtual BOOL OnInitDialog();

private:
    EditBox     m_blinkPatternEdit;
    EditBox     m_blinkIntervalEdit;
    CComboBox   m_stateCombo;
    vector<string> m_stateList;
};

#endif // !H_LIGHT_STATES_PROPERTY