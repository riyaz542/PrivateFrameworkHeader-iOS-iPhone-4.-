/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
 */

@class NSMutableDictionary;

@interface BluetoothManager : NSObject  {
    struct BTLocalDeviceImpl { } *_localDevice;
    struct BTSessionImpl { } *_session;
    int _available;
    BOOL _audioConnected;
    BOOL _scanningEnabled;
    BOOL _scanningInProgress;
    unsigned int _scanningServiceMask;
    struct BTDiscoveryAgentImpl { } *_discoveryAgent;
    struct BTPairingAgentImpl { } *_pairingAgent;
    struct BTAccessoryManagerImpl { } *_accessoryManager;
    NSMutableDictionary *_btAddrDict;
    NSMutableDictionary *_btDeviceDict;
    NSMutableDictionary *_seekingInProgressDict;
}

+ (int)lastInitError;
+ (id)sharedInstance;

- (BOOL)connected;
- (void)_postNotification:(id)arg1;
- (BOOL)setPowered:(BOOL)arg1;
- (BOOL)powered;
- (BOOL)available;
- (BOOL)setEnabled:(BOOL)arg1;
- (BOOL)enabled;
- (void)postNotificationName:(id)arg1 object:(id)arg2;
- (void)postNotification:(id)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)_attach:(id)arg1;
- (BOOL)_setup:(struct BTSessionImpl { }*)arg1;
- (void)_cleanup:(BOOL)arg1;
- (void)_postNotificationWithArray:(id)arg1;
- (void)postNotificationName:(id)arg1 object:(id)arg2 error:(id)arg3;
- (id)addDeviceIfNeeded:(struct BTDeviceImpl { }*)arg1;
- (BOOL)deviceScanningEnabled;
- (BOOL)deviceScanningInProgress;
- (void)_scanForServices:(unsigned int)arg1 withMode:(int)arg2;
- (void)scanForServices:(unsigned int)arg1;
- (void)scanForConnectableDevices:(unsigned int)arg1;
- (void)_restartScan;
- (void)_setScanState:(int)arg1;
- (BOOL)isDiscoverable;
- (BOOL)devicePairingEnabled;
- (void)setDevicePairingEnabled:(BOOL)arg1;
- (void)cancelPairing;
- (void)unpairDevice:(id)arg1;
- (void)setPincode:(id)arg1 forDevice:(id)arg2;
- (void)connectDevice:(id)arg1;
- (BOOL)connectable;
- (void)setConnectable:(BOOL)arg1;
- (id)connectedDevices;
- (BOOL)_isConnectedToNonSensorDevice;
- (void)_connectedStatusChanged;
- (BOOL)audioConnected;
- (void)setAudioConnected:(BOOL)arg1;
- (void)endVoiceCommand:(id)arg1;
- (void)_sendSeekStart:(id)arg1 forDevice:(id)arg2;
- (void)_stopSeeking:(id)arg1 forDevice:(id)arg2;
- (void)sendContact:(id)arg1 toDevice:(id)arg2;
- (void)sendAllContactsToDevice:(id)arg1;
- (BOOL)isServiceSupported:(unsigned int)arg1;
- (void)setAuthorizedServices:(unsigned int)arg1 forDevice:(id)arg2;
- (void)enableTestMode;
- (struct BTAccessoryManagerImpl { }*)_accessoryManager;
- (void)connectDevice:(id)arg1 withServices:(unsigned int)arg2;
- (void)startVoiceCommand:(id)arg1;
- (void)acceptSSP:(int)arg1 forDevice:(id)arg2;
- (int)powerState;
- (BOOL)wasDeviceDiscovered:(id)arg1;
- (id)connectingDevices;
- (void)setDiscoverable:(BOOL)arg1;
- (void)setDeviceScanningEnabled:(BOOL)arg1;
- (void)resetDeviceScanning;
- (id)pairedDevices;
- (void)_removeDevice:(id)arg1;
- (void)_powerChanged;
- (int)localDeviceSupportsService:(unsigned int)arg1;

@end
