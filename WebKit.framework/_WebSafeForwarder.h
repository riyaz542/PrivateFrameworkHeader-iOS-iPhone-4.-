/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@interface _WebSafeForwarder : NSObject  {
    id target;
    id defaultTarget;
    BOOL catchExceptions;
}


- (void)clearTarget;
- (id)initWithTarget:(id)arg1 defaultTarget:(id)arg2 catchExceptions:(BOOL)arg3;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)arg1;

@end