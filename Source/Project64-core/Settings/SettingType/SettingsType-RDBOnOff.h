#pragma once
#include <Project64-core/Settings/SettingType/SettingsType-RomDatabase.h>

class CSettingTypeRDBOnOff :
    public CSettingTypeRomDatabase
{
public:
    CSettingTypeRDBOnOff(const char * Name, SettingID DefaultSetting);
    CSettingTypeRDBOnOff(const char * Name, uint32_t DefaultValue);
    ~CSettingTypeRDBOnOff();

    // Return the values
    virtual bool Load(uint32_t Index, bool & Value) const;
    virtual bool Load(uint32_t Index, uint32_t & Value) const;
    virtual bool Load(uint32_t Index, std::string & Value) const;

    // Return the default values
    virtual void LoadDefault(uint32_t Index, bool & Value) const;
    virtual void LoadDefault(uint32_t Index, uint32_t & Value) const;
    virtual void LoadDefault(uint32_t Index, std::string & Value) const;

    // Update the settings
    virtual void Save(uint32_t Index, bool Value);
    virtual void Save(uint32_t Index, uint32_t Value);
    virtual void Save(uint32_t Index, const std::string & Value);
    virtual void Save(uint32_t Index, const char * Value);

    // Delete the setting
    virtual void Delete(uint32_t Index);

private:
    CSettingTypeRDBOnOff(void);
    CSettingTypeRDBOnOff(const CSettingTypeRDBOnOff &);
    CSettingTypeRDBOnOff & operator=(const CSettingTypeRDBOnOff &);
};
