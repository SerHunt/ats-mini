#ifndef STORAGE_H
#define STORAGE_H

void eepromTickTime(uint32_t millis);
void eepromRequestSave();
void eepromInvalidate();
bool eepromCheck();
void eepromSaveConfig();
void eepromLoadConfig();

void drawEepromIndicator(int x, int y);

#endif // STORAGE_H