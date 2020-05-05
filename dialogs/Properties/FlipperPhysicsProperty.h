#ifndef H_FLIPPER_PHYSICS_PROPERTY
#define H_FLIPPER_PHYSICS_PROPERTY

class FlipperPhysicsProperty: public BasePropertyDialog
{
public:
    FlipperPhysicsProperty(VectorProtected<ISelect> *pvsel);
    virtual ~FlipperPhysicsProperty()
    {
    }

    void UpdateVisuals(const int dispid=-1);
    void UpdateProperties(const int dispid);

protected:
    virtual BOOL OnInitDialog();

private:
    EditBox m_massEdit;
    EditBox m_strengthEdit;
    EditBox m_elasticityEdit;
    EditBox m_elasticityFalloffEdit;
    EditBox m_frictionEdit;
    EditBox m_returnStrengthEdit;
    EditBox m_coilUpRampEdit;
    EditBox m_scatterAngleEdit;
    EditBox m_eosTorqueEdit;
    EditBox m_eosTorqueAngleEdit;
    CComboBox m_overwriteSettingsCombo;
    vector<string> m_physicSetList;
};

#endif