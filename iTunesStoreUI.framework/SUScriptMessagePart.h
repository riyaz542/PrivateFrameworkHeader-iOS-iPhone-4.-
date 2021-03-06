/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, SUMessagePart;

@interface SUScriptMessagePart : SUScriptObject  {
}

@property(retain) SUMessagePart * nativeMessagePart;
@property(copy) NSString * contentEncoding;
@property(readonly) NSString * MIMEType;
@property(readonly) NSString * encodingBase64;

+ (id)webScriptNameForKey:(const char *)arg1;

- (id)MIMEType;
- (id)encodingBase64;
- (void)setNativeMessagePart:(id)arg1;
- (id)nativeMessagePart;
- (id)contentEncoding;
- (void)setContentEncoding:(id)arg1;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)_className;

@end
