/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString;

@interface MLTrack : NSObject <NSCopying> {
    void *_trackInfoContext;
}

@property(copy) NSString * lyrics;


- (int)duration;
- (unsigned long)year;
- (id)path;
- (unsigned long)number;
- (id)title;
- (BOOL)isHidden;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)chapterTOC;
- (void)markNominalAmountHasBeenPlayed;
- (void)noteWasPlayedToTime:(double)arg1 skipped:(BOOL*)arg2;
- (void)incrementSkipCount;
- (void)incrementPlayCountForPlayingToEnd;
- (BOOL)incrementPlayCountForStopTime:(double)arg1;
- (BOOL)isRental;
- (unsigned int)playCount;
- (unsigned int)skipCount;
- (void)gaplessHeuristicInfo:(unsigned int*)arg1 duration:(unsigned int*)arg2 lastPacketsResync:(unsigned int*)arg3 encodingDelay:(unsigned int*)arg4 encodingDrain:(unsigned int*)arg5;
- (id)podcastURL;
- (BOOL)isITunesU;
- (double)lastPlayedDate;
- (double)lastSkippedDate;
- (id)lyrics;
- (id)albumArtist;
- (id)genre;
- (unsigned long)discNumber;
- (id)composer;
- (id)artist;
- (id)grouping;
- (id)comments;
- (unsigned long long)globalID;
- (id)sortTitle;
- (id)sortComposer;
- (id)sortSeriesDisplayName;
- (id)podcastName;
- (id)podcastDirectStoreURL;
- (unsigned long long)storeItemAdamID;
- (unsigned long long)storePlaylistAdamID;
- (id)seriesDisplayName;
- (id)seasonDisplayName;
- (BOOL)isAudibleAudioBook;
- (unsigned long)trackIndexInAlbum;
- (unsigned long long)accountID;
- (id)eqPresetName;
- (BOOL)videoHasAlternateAudio;
- (BOOL)videoHasSubtitles;
- (unsigned int)videoAudioTrackID;
- (void)setVideoAudioTrackID:(unsigned int)arg1;
- (void)setVideoSubtitleTrackID:(unsigned int)arg1;
- (BOOL)markAsDeleted;
- (double)lastPlayedBookmarkTimeInSeconds;
- (int)totalTimeInMS;
- (unsigned long)ratingLevel;
- (unsigned long long)persistentUID;
- (id)initWithTrackContext:(void*)arg1;
- (void*)trackInfoContext;
- (BOOL)isEqualToTrack:(id)arg1;
- (unsigned long long)unsignedValueForProperty:(unsigned long)arg1;
- (double)timeValueForProperty:(unsigned long)arg1;
- (unsigned long long)albumPID;
- (unsigned long long)artistPID;
- (BOOL)_isFilePathPlayable;
- (id)mobileArtworkCacheFolder;
- (id)infoShortDescription;
- (id)infoDescription;
- (id)sortArtist;
- (id)sortAlbum;
- (id)sortAlbumArtist;
- (void)setLyrics:(id)arg1;
- (unsigned long)bpm;
- (id)audioBookName;
- (unsigned int)seasonNumber;
- (unsigned int)episodeNumber;
- (unsigned long)audibleDRMGroupID;
- (unsigned long)numberOfTracksInAlbum;
- (unsigned long)numberOfDiscs;
- (id)contentRatingInfo;
- (id)movieInfo;
- (unsigned long long)genreID;
- (BOOL)isCompilationTrack;
- (BOOL)isExcludedFromShuffle;
- (BOOL)isOTAPurchasedContent;
- (BOOL)hasLyrics;
- (BOOL)hasVideoData;
- (BOOL)isDemoRental;
- (double)demoRentalDuration;
- (double)demoRentalPlaybackDuration;
- (double)demoRentalPlaybackStartTime;
- (double)demoRentalStartTime;
- (BOOL)fakeAsDemoRental;
- (id)eqPreset;
- (float)volumeAdjustment;
- (float)volumeNormalization;
- (int)durationInMS;
- (int)startTimeInMS;
- (int)stopTimeInMS;
- (int)customStopTimeInMS;
- (BOOL)hasChapterData;
- (BOOL)hasChapterArtwork;
- (unsigned int)videoSubtitleTrackID;
- (BOOL)hasDataForArtworkType:(int)arg1;
- (BOOL)sharesArtworkWithTrack:(id)arg1 artworkType:(int)arg2 formatID:(unsigned int)arg3 timeInMS:(unsigned int)arg4 missingAlwaysComparesEqual:(BOOL)arg5;
- (id)_getImageDataForImageType:(int)arg1 artworkFormatID:(unsigned int)arg2 size:(struct CGSize { float x1; float x2; })arg3 timeInMS:(unsigned int)arg4 artworkInstanceInfo:(struct MLArtworkInstanceInfo { struct MLArtworkFormatSpec { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; int x_1_1_5; int x_1_1_6; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; }*)arg5;
- (id)bestImageDataForImageType:(int)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (id)bestImageDataForImageType:(int)arg1 size:(struct CGSize { float x1; float x2; })arg2 timeInMS:(unsigned int)arg3 artworkInstanceInfo:(struct MLArtworkInstanceInfo { struct MLArtworkFormatSpec { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; int x_1_1_5; int x_1_1_6; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; }*)arg4;
- (id)imageDataForImageType:(int)arg1 artworkFormatID:(unsigned int)arg2 timeInMS:(unsigned int)arg3 artworkInstanceInfo:(struct MLArtworkInstanceInfo { struct MLArtworkFormatSpec { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; int x_1_1_5; int x_1_1_6; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; }*)arg4;
- (id)availableArtworkForImageType:(int)arg1 formatIDsForTimeInMS:(unsigned int)arg2;
- (BOOL)hasNominalAmountBeenPlayed;
- (double)nominalHasBeenPlayedThresholdInSeconds;
- (BOOL)isExplicitBasedOnCurrentRestrictions;
- (BOOL)shouldBookmarkLastPlayedTime;
- (BOOL)hasLastPlayedBookmarkTime;
- (void)clearLastPlayedBookmarkTime;
- (void)setLastPlayedBookmarkTimeInSeconds:(double)arg1;
- (long long)imageDBRecordID:(int)arg1;
- (id)filePath;
- (unsigned long long)fileSize;
- (id)album;
- (unsigned long)mediaType;
- (double)releaseDate;
- (void)setRating:(BOOL)arg1;
- (BOOL)rating;
- (id)stringValueForProperty:(unsigned long)arg1;
- (id)copyright;

@end
