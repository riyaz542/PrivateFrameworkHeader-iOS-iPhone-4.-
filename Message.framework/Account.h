/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface Account : BasicAccount <WeaklyReferencedObject, ASDynamicAccountClassLoader, AccountCreationProtocol> {
    unsigned int _isOffline : 1;
    unsigned int _autosynchronizingEnabled : 1;
    unsigned int _isActive : 2;
}

+ (id)displayedAccountTypeString;
+ (id)displayedShortAccountTypeString;
+ (id)predefinedValueForKey:(id)arg1;
+ (id)readAccountsUsingKey:(id)arg1;
+ (id)newAccountWithDictionary:(id)arg1;
+ (id)basicAccountProperties;
+ (void)saveAccountInfoToDefaults;
+ (void)saveAccounts:(id)arg1 usingKey:(id)arg2;
+ (void)loadBundleForAccountClass:(id)arg1;
+ (BOOL)loadBundleForAccountWithProperties:(id)arg1;
+ (id)accountWithBasicAccount:(id)arg1;
+ (BOOL)haveAccountsBeenConfigured;
+ (BOOL)isPredefinedAccountType;
+ (id)supportedDataclasses;
+ (id)propertiesWhichRequireValidation;
+ (id)accountTypeString;
+ (void*)keychainProtocol;
+ (id)accountPropertiesValueForKey:(id)arg1 value:(id)arg2;
+ (BOOL)allObjectsInArrayAreOffline:(id)arg1;
+ (BOOL)isSSLEditable;
+ (id)saslProfileName;
+ (id)myFullName;
+ (void)initialize;
+ (id)hostname;

- (struct __CFString { }*)connectionServiceType;
- (id)certUIService;
- (BOOL)shouldEnableAfterError:(id)arg1;
- (BOOL)enableAccount;
- (void)setPortNumber:(unsigned int)arg1;
- (void)setUsesSSL:(BOOL)arg1;
- (unsigned int)portNumber;
- (void*)keychainAccessibility;
- (BOOL)isCommonPortNumber:(unsigned int)arg1;
- (unsigned int)keychainPortNumber;
- (BOOL)_shouldTryDirectSSLConnectionOnPort:(unsigned int)arg1;
- (void)setPreferredAuthScheme:(id)arg1;
- (id)passwordFromKeychain;
- (id)preferredAuthScheme;
- (BOOL)usesSSL;
- (void)setHostname:(id)arg1;
- (void)_initializeState;
- (void)setAutosynchronizingEnabled:(BOOL)arg1;
- (void)_queueAccountInfoDidChange;
- (id)propertiesToSave;
- (void)_setAccountProperties:(id)arg1;
- (void)setValueInAccountProperties:(id)arg1 forKey:(id)arg2;
- (void)removeValueInAccountPropertiesForKey:(id)arg1;
- (id)valueInAccountPropertiesForKey:(id)arg1;
- (BOOL)canGoOffline;
- (BOOL)isOffline;
- (void)setIsOffline:(BOOL)arg1;
- (void)setPasswordInKeychain:(id)arg1;
- (void)_removePasswordInKeychain;
- (id)passwordFromStoredUserInfo;
- (id)promptUserForPasswordWithMessage:(id)arg1;
- (BOOL)storesPassword;
- (BOOL)needsCredentials;
- (BOOL)acquireCredentialsWithPassword:(id)arg1;
- (id)managedTag;
- (id)promptUserIfNeededForPasswordWithMessage:(id)arg1;
- (unsigned int)defaultPortNumber;
- (unsigned int)defaultSecurePortNumber;
- (id)secureServiceName;
- (void)releaseAllConnections;
- (void)releaseAllForcedConnections;
- (void)validateConnections;
- (void)setTryDirectSSL:(BOOL)arg1;
- (void)accountInfoDidChange;
- (id)_newConnection;
- (Class)connectionClass;
- (id)authenticatedConnection;
- (id)defaultConnectionSettings;
- (void)applySettingsAsDefault:(id)arg1;
- (id)alternateConnectionSettings;
- (id)insecureConnectionSettings;
- (id)secureConnectionSettings;
- (id)customTitleForError:(id)arg1 authScheme:(id)arg2 defaultTitle:(id)arg3;
- (id)customTitleForAuthenticationError:(id)arg1 authScheme:(id)arg2 defaultTitle:(id)arg3;
- (id)customDescriptionForError:(id)arg1 authScheme:(id)arg2 defaultDescription:(id)arg3;
- (BOOL)isPasswordMissing;
- (void)reportAuthenticationError:(id)arg1 authScheme:(id)arg2;
- (BOOL)_connectAndAuthenticate:(id)arg1;
- (id)nameForMailboxUid:(id)arg1;
- (BOOL)shouldDisplayHostnameInErrorMessages;
- (id)missingPasswordErrorWithTitle:(id)arg1;
- (void)setDomain:(id)arg1;
- (id)displayName;
- (id)initWithProperties:(id)arg1;
- (id)password;
- (BOOL)isActive;
- (void)setIsActive:(BOOL)arg1;
- (void)release;
- (id)init;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)retainCount;
- (BOOL)requiresAuthentication;
- (void)setDisplayName:(id)arg1;
- (id)uniqueId;
- (void)setPassword:(id)arg1;
- (id)domain;
- (void)setUsername:(id)arg1;
- (id)username;
- (id)serviceName;
- (id)hostname;
- (id)syncStoreIdentifier;

@end
