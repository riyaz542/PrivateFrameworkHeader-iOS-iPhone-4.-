/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSCountedSet, NSMutableSet, NSString, NSMutableDictionary;

@interface DAPowerAssertionManager : NSObject  {
    NSString *_uuid;
    NSCountedSet *_contexts;
    NSMutableDictionary *_groupIdentifierToContexts;
    struct __CFDictionary { } *_contextToGroupIdentifier;
    NSMutableSet *_heldAsideGroupIdentifiers;
    NSCountedSet *_heldAsideContexts;
    void *_timedAssertionRef;
}

+ (void)vendDaemons:(Class)arg1;
+ (id)sharedPowerAssertionManager;

- (void)_retainAssertions;
- (void)_releaseAssertions;
- (id)init;
- (void)dealloc;
- (void)retainPowerAssertion:(id)arg1 withGroupIdentifier:(id)arg2;
- (unsigned int)powerAssertionRetainCount:(id)arg1;
- (void)releasePowerAssertion:(id)arg1;
- (id)stateString;
- (void)reattainPowerAssertionsForGroupIdentifier:(id)arg1;
- (void)dropPowerAssertionsForGroupIdentifier:(id)arg1;

@end