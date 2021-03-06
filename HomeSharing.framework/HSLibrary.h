/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class <NSObject>, NSString, HSConnection;

@interface HSLibrary : NSObject  {
    HSConnection *_connection;
    <NSObject> *_context;
    NSString *_name;
    BOOL _requiresPassword;
    NSString *_uniqueIdentifier;
    unsigned int _version;
}

@property(readonly) unsigned int version;
@property(readonly) NSString * uniqueIdentifier;
@property(readonly) BOOL requiresPassword;
@property(readonly) NSString * name;
@property(retain) <NSObject> * context;
@property(readonly) HSConnection * connection;


- (void)setContext:(id)arg1;
- (unsigned int)version;
- (id)uniqueIdentifier;
- (id)context;
- (id)name;
- (void)dealloc;
- (BOOL)requiresPassword;
- (id)connection;
- (id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2 version:(unsigned int)arg3 baseURL:(id)arg4;

@end
