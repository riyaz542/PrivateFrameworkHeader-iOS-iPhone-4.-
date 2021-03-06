/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ITSync.framework/ITSync
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class ITSyncFileLocker;

@interface ITSyncHelper : NSObject  {
    struct __CFArray { } *_observers;
    struct __CFArray { } *_observersNeedingStartNotification;
    struct __CFRunLoopTimer { } *_seedInternalStateAndObserversTimer;
    struct __CFSet { } *_observersBlockingSyncs;
    unsigned int _observersBlockingSyncsAreWaiting : 1;
    unsigned int _syncingBlockedBySB : 1;
    unsigned int _ignoreITDBPrepEndNotifications : 1;
    int _handlingNotifications;
    unsigned int _syncState;
    int _syncGenerationCount;
    ITSyncFileLocker *_flocker;
    ITSyncFileLocker *_flockerWaitingForSyncEnd;
    ITSyncFileLocker *_flockerWaitingForITDBPrep;
}

+ (id)helper;

- (void)dealloc;
- (id)_init;
- (BOOL)iTunesIsSyncing;
- (BOOL)isITDBPostSyncProcessRunning;
- (BOOL)tryToBlockSyncForRegisteredObserver:(id)arg1 threadedWaitIfNecessary:(BOOL)arg2;
- (void)unblockSyncForRegisteredObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)notifyUpdateAllSyncStateAndPost;
- (int)notifyGetSyncState;
- (int)notifyGetSyncGenerationCount;
- (BOOL)notifyGetSBBlockingSyncState;
- (void)notifySyncStateChangeIfNecessary;
- (void)setSyncState:(int)arg1 notifyRemoteDependents:(BOOL)arg2;
- (void)setSyncingBlockedBySB:(BOOL)arg1 notifyRemoteDependents:(BOOL)arg2;
- (void)runITDBPostSyncProcess;
- (void)_releaseFlockerWaitingForITDBPrep;
- (void)_generateIDBPPrepEnded;
- (BOOL)_testLockForSeedingState:(id)arg1 releaseLockCleanup:(id)arg2;
- (void)_seedFlockerWaitingForITDBPrepIfNecessary;
- (void)_generateIDBPPrepEndedIfNeeded;
- (void)_noteITDBPrepWillBegin;
- (void)postNotificationToiTunes:(struct __CFString { }*)arg1;
- (BOOL)_alreadyBlockingSyncs;
- (BOOL)_waitingForFilelock;
- (BOOL)isSyncingBlockedBySB;
- (void)_noteSBUnblockedSyncing;
- (void)_noteSyncFinished;
- (void)_noteSyncFailed;
- (void)_noteSyncTerminatedAbnormally;
- (void)_noteSyncWillStart;
- (void)_generateSyncEndedAbnormally;
- (void)_generateSyncEndedNormally;
- (void)_startFlockerWaitingForSyncEndIfNecessary;
- (void)_fixupAndStartFlockerWaitingForSyncEndIfNecessary;
- (void)_scheduleFixupAndStartFlockerWaitingForSyncEndIfNecessary:(double)arg1;
- (void)_postNotificationForAcquiringLockfileIgnoreingObserver:(id)arg1;
- (void)syncFileLockerDidAcquireLock:(id)arg1;
- (void)_releaseLockDueNotificationPostFailure:(id)arg1;
- (void)runITDBPostSyncProcessForiTunesSyncPhaseDidEnd;
- (void)_postDistNoteToObservers:(struct __CFArray { }*)arg1 notifName:(id)arg2 applierFunction:(int (*)())arg3 applierContext:(void*)arg4;
- (void)_seedObserversNeedingStartNotification;
- (void)_postDistNoteWithName:(id)arg1;
- (void)_handleStateChanged;
- (void)_handleHostAttachStateChangeToState:(BOOL)arg1;
- (void)_seedInternalStateAndObserversTimer;

@end
