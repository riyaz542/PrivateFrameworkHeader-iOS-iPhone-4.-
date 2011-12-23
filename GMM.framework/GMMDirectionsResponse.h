/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMDateTime, NSString, NSMutableArray, GMMDirectionsIconResponse;

@interface GMMDirectionsResponse : PBCodable  {
    int _status;
    NSMutableArray *_modes;
    GMMDateTime *_requestedDateTime;
    int _requestedTimeType;
    BOOL _hasRequestedTimeType;
    NSMutableArray *_waypointFeedbacks;
    NSMutableArray *_trips;
    GMMDirectionsIconResponse *_icons;
    NSString *_notice;
    NSMutableArray *_agencys;
    int _recommendedDistanceUnits;
    BOOL _hasRecommendedDistanceUnits;
    NSMutableArray *_optionsUseds;
    NSMutableArray *_alerts;
    NSMutableArray *_alternateModes;
}

@property(readonly) int mode;
@property(readonly) int modesCount;
@property(readonly) BOOL hasRequestedDateTime;
@property(readonly) int waypointFeedbacksCount;
@property(readonly) int tripsCount;
@property(readonly) BOOL hasIcons;
@property(readonly) BOOL hasNotice;
@property(readonly) int agencysCount;
@property(readonly) int optionsUsedsCount;
@property(readonly) int alertsCount;
@property(readonly) int alternateModesCount;
@property(retain) NSMutableArray * alternateModes;
@property(retain) NSMutableArray * alerts;
@property(retain) NSMutableArray * optionsUseds;
@property(readonly) BOOL hasRecommendedDistanceUnits;
@property int recommendedDistanceUnits;
@property(retain) NSMutableArray * agencys;
@property(retain) NSString * notice;
@property(retain) GMMDirectionsIconResponse * icons;
@property(retain) NSMutableArray * trips;
@property(retain) NSMutableArray * waypointFeedbacks;
@property(readonly) BOOL hasRequestedTimeType;
@property int requestedTimeType;
@property(retain) GMMDateTime * requestedDateTime;
@property(retain) NSMutableArray * modes;
@property int status;

+ (int)modeFlagForMode:(int)arg1;
+ (int)modeForModeFlag:(int)arg1;

- (void)setStatus:(int)arg1;
- (id)icons;
- (void)setIcons:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)waypointFeedbacks;
- (id)optionsUseds;
- (id)alternateModes;
- (int)alertsCount;
- (BOOL)hasIcons;
- (BOOL)hasRequestedDateTime;
- (void)setWaypointFeedback:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addWaypointFeedback:(id)arg1;
- (void)setTrip:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)hasNotice;
- (int)agencysCount;
- (void)setAgency:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addAgency:(id)arg1;
- (void)setRecommendedDistanceUnits:(int)arg1;
- (int)optionsUsedsCount;
- (void)setOptionsUsed:(id)arg1 atIndex:(unsigned int)arg2;
- (id)optionsUsedAtIndex:(unsigned int)arg1;
- (void)addOptionsUsed:(id)arg1;
- (void)setAlert:(id)arg1 atIndex:(unsigned int)arg2;
- (id)alertAtIndex:(unsigned int)arg1;
- (void)addAlert:(id)arg1;
- (int)alternateModesCount;
- (void)setAlternateMode:(id)arg1 atIndex:(unsigned int)arg2;
- (id)alternateModeAtIndex:(unsigned int)arg1;
- (void)addAlternateMode:(id)arg1;
- (void)setAlternateModes:(id)arg1;
- (id)alerts;
- (void)setAlerts:(id)arg1;
- (void)setOptionsUseds:(id)arg1;
- (BOOL)hasRecommendedDistanceUnits;
- (id)agencys;
- (void)setAgencys:(id)arg1;
- (id)notice;
- (void)setNotice:(id)arg1;
- (void)setTrips:(id)arg1;
- (void)setWaypointFeedbacks:(id)arg1;
- (BOOL)hasRequestedTimeType;
- (int)modesCount;
- (void)setMode:(int)arg1 atIndex:(unsigned int)arg2;
- (void)setModes:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (int)recommendedDistanceUnits;
- (int)tripsCount;
- (id)trips;
- (id)tripAtIndex:(unsigned int)arg1;
- (id)modes;
- (int)requestedTimeType;
- (id)requestedDateTime;
- (void)addMode:(int)arg1;
- (void)setRequestedTimeType:(int)arg1;
- (void)setRequestedDateTime:(id)arg1;
- (id)waypointFeedbackAtIndex:(unsigned int)arg1;
- (void)addTrip:(id)arg1;
- (int)waypointFeedbacksCount;
- (id)agencyAtIndex:(unsigned int)arg1;
- (int)modeAtIndex:(unsigned int)arg1;
- (int)status;
- (int)mode;

@end