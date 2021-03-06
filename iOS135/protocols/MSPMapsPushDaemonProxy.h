/* Generated by RuntimeBrowser.
 */

@protocol MSPMapsPushDaemonProxy <MSPRemoteModelAccess>

@required

- (void)checkin;
- (void)clearBulletinWithRecordID:(NSString *)arg1;
- (void)clearCurrentAnnouncement;
- (void)clearLowFuelAlertBulletin;
- (void)clearMapsSuggestionsBulletin;
- (void)clearParkedCarBulletin;
- (void)clearPredictedRouteTrafficIncidentBulletin;
- (void)clearShownAnnouncements;
- (void)clearTrafficConditionsBulletin;
- (void)clearTrafficIncidentBulletinWithAlertID:(NSData *)arg1;
- (void)clearTrafficIncidentsBulletin;
- (void)eraseRAPData;
- (void)fetchAnnouncementsFilePath:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)fetchAnnouncementsURLPath:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)fetchCurrentAnnouncement:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOAnnouncement *, void*
- (void)fetchDevicePushToken:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)fetchDownloadedAnnouncements:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)fetchProblemStatus;
- (void)fetchShownAnnouncements:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)fetchUserRoutingPreferencesWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MSPUserRoutingPreferences *, NSError *, void*
- (void)handleMapsApplicationRemoval:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)problemStatusResponseWithNotificationID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEORPProblemStatusResponse *, void*
- (void)registerForTopic;
- (void)removeProblemStatusResponseWithNotificationID:(NSString *)arg1;
- (void)resetAnnouncements;
- (void)setShouldUseDevAPNS:(bool)arg1;
- (void)shouldUseDevAPNS:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)showLowFuelAlertBulletinForLowFuelDetails:(MSPLowFuelDetails *)arg1;
- (void)showMapsSuggestionsBulletinWithTitle:(NSString *)arg1 message:(NSString *)arg2 actionURL:(NSURL *)arg3;
- (void)showParkedCarBulletinForEvent:(RTVehicleEvent *)arg1;
- (void)showParkedCarBulletinForEvent:(RTVehicleEvent *)arg1 afterDelay:(double)arg2;
- (void)showParkedCarReplacementBulletinForEvent:(RTVehicleEvent *)arg1 replacingEvent:(RTVehicleEvent *)arg2;
- (void)showParkedCarReplacementBulletinForEvent:(RTVehicleEvent *)arg1 replacingEvent:(RTVehicleEvent *)arg2 afterDelay:(double)arg3;
- (void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(GEOCommuteNotificationDetails *)arg1;
- (void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(GEOCommuteNotificationDetails *)arg1 afterDelay:(double)arg2;
- (void)showTrafficConditionsBulletinWithTitle:(NSString *)arg1 message:(NSString *)arg2 actionURL:(NSURL *)arg3;
- (void)showTrafficIncidentAlertWithID:(NSData *)arg1 withReroute:(bool)arg2 title:(NSString *)arg3 description:(NSString *)arg4;
- (void)simulateAnnouncement:(GEOAnnouncement *)arg1 afterDelay:(double)arg2;
- (void)simulateProblemResolution;
- (void)updateActiveAnnouncement;
- (void)updateAnnouncements:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (oneway void)updateMapsModelBackupAttributesIfNeeded;

@end
