/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AACCore.framework/AACCore
 */

@interface AEConcretePreferences : NSObject <AEPreferences>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)assessmentBoolForKey:(id)arg1;
- (id)assessmentPreferenceDomain;
- (id)ignoreCreateAssessmentFileKey;
- (id)ignoreDisableContinuityKey;
- (id)ignoreDisableSiriKey;
- (id)ignoreDisableTrackpadLookupKey;
- (id)ignorePauseMediaKey;
- (id)ignorePresentShieldsKey;
- (id)ignoreRestrictContentCaptureKey;
- (id)ignoreRestrictFrontmostAppKey;
- (id)ignoreRestrictNetworkAccessKey;
- (id)ignoreScrubPasteboardKey;
- (id)ignoreStopAirPlayBeforehandKey;
- (id)ignoreWhitelistHotkeysKey;
- (void)setAssessmentBool:(bool)arg1 forKey:(id)arg2;
- (void)setCreateAssessmentFile:(bool)arg1;
- (void)setDisableContinuity:(bool)arg1;
- (void)setDisableSiri:(bool)arg1;
- (void)setDisableTrackpadLookup:(bool)arg1;
- (void)setPauseMedia:(bool)arg1;
- (void)setPresentShields:(bool)arg1;
- (void)setRestrictContentCapture:(bool)arg1;
- (void)setRestrictFrontmostApp:(bool)arg1;
- (void)setRestrictNetworkAccess:(bool)arg1;
- (void)setScrubPasteboard:(bool)arg1;
- (void)setStopAirPlayBeforehand:(bool)arg1;
- (void)setWhitelistHotkeys:(bool)arg1;
- (bool)shouldCreateAssessmentFile;
- (bool)shouldDisableContinuity;
- (bool)shouldDisableSiri;
- (bool)shouldDisableTrackpadLookup;
- (bool)shouldPauseMedia;
- (bool)shouldPresentShields;
- (bool)shouldRestrictContentCapture;
- (bool)shouldRestrictFrontmostApp;
- (bool)shouldRestrictNetworkAccess;
- (bool)shouldScrubPasteboard;
- (bool)shouldStopAirplayBeforehand;
- (bool)shouldWhitelistHotkeys;

@end
