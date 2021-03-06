/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class <NSURLAuthenticationChallengeSender>, NSString;

@interface ISStoreAuthenticationChallenge : ISAuthenticationChallenge  {
    int _failureCount;
    BOOL _hasPassword;
    NSString *_password;
    <NSURLAuthenticationChallengeSender> *_sender;
    NSString *_user;
    BOOL _userNameIsEditable;
}

@property BOOL userNameIsEditable;
@property(retain) NSString * user;
@property <NSURLAuthenticationChallengeSender> * sender;
@property(retain) NSString * password;
@property BOOL hasPassword;
@property int failureCount;


- (id)user;
- (id)sender;
- (id)password;
- (id)init;
- (void)dealloc;
- (BOOL)userNameIsEditable;
- (BOOL)userNameIsEmail;
- (void)setUserNameIsEditable:(BOOL)arg1;
- (void)setHasPassword:(BOOL)arg1;
- (void)setFailureCount:(int)arg1;
- (int)failureCount;
- (BOOL)hasPassword;
- (void)setSender:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setUser:(id)arg1;

@end
