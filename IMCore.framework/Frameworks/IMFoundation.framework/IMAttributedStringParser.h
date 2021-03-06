/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class IMAttributedStringParserContext;

@interface IMAttributedStringParser : NSObject  {
    IMAttributedStringParserContext *_context;
}

+ (id)sharedInstance;

- (oneway void)release;
- (unsigned int)retainCount;
- (id)autorelease;
- (void)_preprocessWithContext:(id)arg1 string:(id*)arg2;
- (void)parseContext:(id)arg1;

@end
