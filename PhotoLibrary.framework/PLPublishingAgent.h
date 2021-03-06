/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLPublishingAgentDelegate>, NSString, NSData, PLVideoRemaker, NSMutableArray, UINavigationController;

@interface PLPublishingAgent : NSObject <PLDataArrayInputStreamProgressDelegate> {
    id _userInfo;
    id _delegate;
    NSString *_mediaPath;
    NSData *_mediaData;
    NSString *_mimeType;
    BOOL _deleteAfterPublishing;
    double _changeRate;
    long long _currentValue;
    double _estimatedTimeRemaining;
    long long _maxValue;
    long long _normalizedCurrentValue;
    long long _normalizedMaxValue;
    float _percentComplete;
    float _remakingPercentComplete;
    float _progressMultiplier;
    NSMutableArray *_snapshotTimes;
    NSMutableArray *_snapshotValues;
    UINavigationController *_parentNavigationController;
    BOOL _ownerIsCamera;
    BOOL _needsRemaking;
    double _startTime;
    double _endTime;
    long long _approximateHDUploadSize;
    long long _approximateSDUploadSize;
    BOOL _mediaIsHDVideo;
    BOOL _enableHDUpload;
    BOOL _needsTrimming;
    BOOL _allowsHDOver3GUpload;
    int _selectedOption;
    PLVideoRemaker *_remaker;
    int _remakerMode;
    SEL _completionSelector;
    unsigned int _remakingWasCancelled : 1;
    unsigned int _remaking : 1;
    unsigned int _publishing : 1;
    BOOL _shouldCancelPublish;
}

@property BOOL shouldCancelPublish;
@property BOOL allowsHDOver3GUpload;
@property float progressMultiplier;
@property int selectedOption;
@property int remakerMode;
@property BOOL needsTrimming;
@property BOOL enableHDUpload;
@property BOOL mediaIsHDVideo;
@property long long approximateSDUploadSize;
@property long long approximateHDUploadSize;
@property BOOL ownerIsCamera;
@property <PLPublishingAgentDelegate> * delegate;

+ (id)publishingAgentForBundleNamed:(id)arg1 toPublishMedia:(id)arg2;

- (void)dismiss;
- (void)setUserInfo:(id)arg1;
- (id)navigationController;
- (id)userInfo;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (float)remakingPercentComplete;
- (id)progressViewMessageDuringRemake;
- (double)estimatedTimeRemaining;
- (float)percentComplete;
- (BOOL)ownerIsCamera;
- (long long)approximateSDUploadSize;
- (int)remakerMode;
- (float)progressMultiplier;
- (BOOL)shouldCancelPublish;
- (void)_startNetworkObservation;
- (void)_stopNetworkObservation;
- (id)initWithMedia:(id)arg1;
- (void)_setUpPublishingParams;
- (id)mediaPath;
- (void)setMediaPath:(id)arg1;
- (void)setDeleteMediaFileAfterPublishing:(BOOL)arg1;
- (BOOL)deleteMediaFileAfterPublishing;
- (id)mediaData;
- (void)setPublishing:(BOOL)arg1;
- (void)setRemakerMode:(int)arg1;
- (void)setTrimStartTime:(double)arg1 andEndTime:(double)arg2;
- (void)_setApproximateVideoUploadSizes;
- (void)resignPublishingSheetResponders;
- (void)cancelButtonClicked;
- (void)doneButtonClicked;
- (void)_agentIsReadyToPublish:(id)arg1;
- (void)publish;
- (void)presentModalSheetInViewController:(id)arg1;
- (id)parentNavigationController;
- (id)mediaURL;
- (id)mediaTitle;
- (BOOL)isVideoMedia;
- (id)tellAFriendURL;
- (id)tellAFriendSubject;
- (id)tellAFriendBody;
- (double)maximumVideoDuration;
- (void)dataArrayInputStreamBytesWereRead:(id)arg1;
- (void)setTotalBytesWritten:(int)arg1 totalBytes:(int)arg2;
- (void)snapshot;
- (void)_updateStatisticsFromSnapshots;
- (void)cancelRemaking;
- (BOOL)isRemaking;
- (void)_transcodeVideo:(id)arg1;
- (void)videoRemakerDidBeginRemaking:(id)arg1;
- (int)_remakerModeForSelectedOption;
- (void)setShouldCancelPublish:(BOOL)arg1;
- (BOOL)allowsHDOver3GUpload;
- (void)setAllowsHDOver3GUpload:(BOOL)arg1;
- (int)selectedOption;
- (void)setSelectedOption:(int)arg1;
- (BOOL)needsTrimming;
- (BOOL)enableHDUpload;
- (void)setEnableHDUpload:(BOOL)arg1;
- (BOOL)mediaIsHDVideo;
- (void)setMediaIsHDVideo:(BOOL)arg1;
- (void)setApproximateSDUploadSize:(long long)arg1;
- (long long)approximateHDUploadSize;
- (void)setApproximateHDUploadSize:(long long)arg1;
- (void)_cancelRemaking:(id)arg1;
- (void)_remakerDidFinish:(id)arg1;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;
- (id)serviceName;
- (void)setOwnerIsCamera:(BOOL)arg1;
- (void)setNeedsTrimming:(BOOL)arg1;
- (void)setMediaData:(id)arg1;
- (void)setProgressMultiplier:(float)arg1;
- (BOOL)isPublishing;
- (void)videoRemaker:(id)arg1 progressDidChange:(float)arg2;
- (void)_networkReachabilityDidChange:(id)arg1;

@end
