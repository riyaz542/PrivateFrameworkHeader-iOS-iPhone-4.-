/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSNumber, NSString, NSDictionary;

@interface ISAuthenticationResponse : NSObject  {
    NSDictionary *_responseDictionary;
    int _urlBagType;
}

@property(readonly) NSString * accountName;
@property(readonly) int accountKind;
@property(readonly) NSNumber * accountUniqueIdentifier;
@property(readonly) NSString * creditsString;
@property(readonly) NSString * token;
@property(readonly) NSNumber * failureType;
@property(readonly) int responseType;
@property(readonly) NSString * userMessage;
@property int URLBagType;
@property(readonly) NSDictionary * responseDictionary;


- (id)initWithDictionary:(id)arg1;
- (void)dealloc;
- (id)accountUniqueIdentifier;
- (id)userMessage;
- (int)_responseTypeForFailureType:(int)arg1;
- (int)_responseTypeForStatusValue:(int)arg1;
- (id)_statusValue;
- (id)newAccount;
- (id)failureType;
- (int)URLBagType;
- (id)responseDictionary;
- (int)responseType;
- (id)creditsString;
- (int)accountKind;
- (void)setURLBagType:(int)arg1;
- (id)accountName;
- (id)token;

@end
