/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class MCProfileServiceProfile, NSArray;

@interface MCConfigurationProfile : MCProfile  {
    NSArray *_payloads;
    MCProfileServiceProfile *_OTAProfile;
}

@property MCProfileServiceProfile * OTAProfile;
@property(readonly) NSArray * payloads;


- (void)dealloc;
- (id)description;
- (id)installationWarnings;
- (BOOL)isManagedByProfileService;
- (id)payloads;
- (id)localizedPayloadSummaryByType;
- (id)earliestCertificateExpiryDate;
- (id)initWithDictionary:(id)arg1 originalData:(id)arg2 wasEncrypted:(BOOL)arg3 allowEmptyPayload:(BOOL)arg4 outError:(id*)arg5;
- (id)stubDictionary;
- (void)_addObjectsOfClass:(Class)arg1 fromArray:(id)arg2 toArray:(id)arg3;
- (void)_sortPayloads;
- (id)OTAProfile;
- (void)setOTAProfile:(id)arg1;

@end
