/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSString;

@interface IMLockdownManager : NSObject  {
    int _state;
    BOOL _settingUpActivationState;
    BOOL _isBricked;
    BOOL _isInternalInstall;
    BOOL _isCarrierInstall;
    BOOL _hasShownWaitingAlertThisSession;
    BOOL _hasShownMismatchedSIM;
    NSString *_unqiueDeviceIdentifier;
    NSString *_inverseDeviceIdentifier;
}

@property(readonly) BOOL brickedDevice;
@property(readonly) BOOL isInternalInstall;
@property(readonly) BOOL isCarrierInstall;
@property(readonly) int lockdownState;
@property(readonly) NSString * uniqueDeviceIdentifier;
@property(readonly) NSString * inverseDeviceIdentifier;

+ (id)sharedInstance;

- (oneway void)release;
- (id)init;
- (void)dealloc;
- (unsigned int)retainCount;
- (id)autorelease;
- (BOOL)isInternalInstall;
- (BOOL)_hasEverRegistered;
- (void)_setHasEverRegistered:(BOOL)arg1;
- (void)_activationFailed;
- (void)_resetActivationState;
- (void)_setupActivationState;
- (BOOL)brickedDevice;
- (BOOL)isCarrierInstall;
- (int)lockdownState;
- (id)valueForDomain:(id)arg1 key:(id)arg2;
- (id)uniqueDeviceIdentifier;
- (id)inverseDeviceIdentifier;

@end
